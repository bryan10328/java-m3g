import javax.media.opengl.GL;
import javax.media.opengl.GLAutoDrawable;
import javax.media.opengl.GLEventListener;
import javax.media.opengl.GLCanvas;
import org.karlsland.m3g.*;

public class M3GRenderer implements GLEventListener {

    private GLAutoDrawable drawer;
    private Graphics3D     g3d;
    private World          wld;
    private int            worldTime;

    public void init(GLAutoDrawable drawable) {

        // 初期化処理
        this.drawer = drawable;
        this.g3d    = Graphics3D.getInstance ();
        this.wld    = new World ();
        this.worldTime = 0;
        
        Camera cam = new Camera ();
        cam.lookAt (0,0,5,
                    0,0,0,
                    0,1,0);
        wld.addChild (cam);
        wld.setActiveCamera (cam);


        Background bg = new Background ();
        bg.setColor (0xff3f3f3f);
        wld.setBackground (bg);

        VertexArray positions = new VertexArray (4, 3, 2);
        short[]        position_values = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
        positions.set (0, 4, position_values);

        float scale = 1;
        float[] bias = {0,0,0};
        VertexBuffer vertices = new VertexBuffer ();
        vertices.setPositions (positions, scale, bias);


        int[] strips  = {4};
        int[] indices = {0,1,2,3};
        TriangleStripArray tris = new TriangleStripArray (indices, strips);

        CompositingMode comp = new CompositingMode ();
        comp.setBlending (CompositingMode.ALPHA);

        Material mat = new Material ();
        mat.setColor (Material.DIFFUSE, 0xff0000ff);

        Appearance app = new Appearance ();
        app.setCompositingMode (comp);
        app.setMaterial (mat);

        float[] frame0_alpha = {1};
        float[] frame1_alpha = {0.1f};
        KeyframeSequence keyframe_alpha = new KeyframeSequence (2, 1, KeyframeSequence.LINEAR);
        keyframe_alpha.setKeyframe (0, 0, frame0_alpha);
        keyframe_alpha.setKeyframe (1, 100, frame1_alpha);
        keyframe_alpha.setValidRange (0, 1);
        keyframe_alpha.setDuration (100);

        KeyframeSequence keyframe_color = new KeyframeSequence (3, 3, KeyframeSequence.LINEAR);
        float[] frame0_color = {0,0,1};
        float[] frame1_color = {1,0,0};
        float[] frame2_color = {0,0,1};
        keyframe_color.setKeyframe (0, 0, frame0_color);
        keyframe_color.setKeyframe (1, 100, frame1_color);
        keyframe_color.setKeyframe (2, 200, frame2_color);
        keyframe_color.setRepeatMode (KeyframeSequence.LOOP);
        keyframe_color.setValidRange (0, 2);
        keyframe_color.setDuration (200);

        AnimationController controller = new AnimationController ();
        controller.setSpeed (0.5f, 0);

        AnimationTrack track_alpha = new AnimationTrack (keyframe_alpha, AnimationTrack.ALPHA);
        AnimationTrack track_color = new AnimationTrack (keyframe_color, AnimationTrack.DIFFUSE_COLOR);
        track_alpha.setController (controller);
        track_color.setController (controller);

        //mat.addAnimationTrack (track_alpha);
        mat.addAnimationTrack (track_color);

        Mesh mesh = new Mesh (vertices, tris, app);
        wld.addChild (mesh);

    }
 
    public void reshape(GLAutoDrawable drawable,
                        int x, int y, 
                        int width, int height) {
        // 描画領域変更処理
        g3d.setViewport (x, y, width, height);
        Camera cam = wld.getActiveCamera ();
        cam.setPerspective (45, width/(float)height, 0.1f, 100.f);
    }
 
    public void display(GLAutoDrawable drawable) {
        // 描画処理
        g3d.render (wld);
    }
 
    public void displayChanged(GLAutoDrawable drawable,
                               boolean modeChanged,
                               boolean deviceChanged) {
        // 
    }

    public void update (char key) {

        System.out.println (key+"のキーが押された");
        if (key == 'q') {
            System.exit (0);
        } else if (key == ' ') {
            System.out.println ("main: time = " + worldTime + "\n");
            worldTime = worldTime + 2;
            wld.animate (worldTime);
            drawer.display();
        }

    }


}