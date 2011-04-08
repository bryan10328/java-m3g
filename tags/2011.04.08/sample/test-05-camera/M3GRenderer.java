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
        cam.lookAt (0,0,50,
                    0,0,0,
                    0.1f,1,0);
        wld.addChild (cam);
        wld.setActiveCamera (cam);


        AnimationController controller = new AnimationController ();

        KeyframeSequence keyframe_fovy = new KeyframeSequence (3, 1, KeyframeSequence.LINEAR);
        float[][] frame_fovy = {{45}, {90}, {45}};
        keyframe_fovy.setKeyframe (0, 0,   frame_fovy[0]);
        keyframe_fovy.setKeyframe (1, 100, frame_fovy[1]);
        keyframe_fovy.setKeyframe (2, 200, frame_fovy[2]);
        keyframe_fovy.setRepeatMode (KeyframeSequence.LOOP);
        keyframe_fovy.setValidRange (0, 2);
        keyframe_fovy.setDuration (200);

        AnimationTrack animation_fovy = new AnimationTrack (keyframe_fovy, AnimationTrack.FIELD_OF_VIEW);
        animation_fovy.setController (controller);
        cam.addAnimationTrack (animation_fovy);

        short[] positionValues = {10,-10,0, 10,10,0, -10,-10,0, -10,10,0};
        VertexArray positions = new VertexArray (4,3,2);
        positions.set (0, 4, positionValues);

        float   scale = 1;
        float[] bias  = {0,0,0};
        VertexBuffer vertices = new VertexBuffer ();
        vertices.setPositions (positions, scale, bias);


        int[] strips = {4};
        TriangleStripArray tris = new TriangleStripArray (0, strips);

        Material mat = new Material ();
        mat.setColor (Material.DIFFUSE, 0xff4c4cb2);  // 0.3, 0.3, 0.7
  
        Appearance app = new Appearance ();
        app.setMaterial (mat);
        
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