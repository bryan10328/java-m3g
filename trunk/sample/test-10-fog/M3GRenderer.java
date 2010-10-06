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

        GL gl = drawable.getGL ();        
        gl.glEnable( GL.GL_DEPTH_TEST );
        gl.glDepthFunc(GL.GL_LEQUAL);

        // 初期化処理
        this.drawer = drawable;
        this.g3d    = Graphics3D.getInstance ();
        this.wld    = new World ();
        this.worldTime = 0;

        g3d.print ();

        Camera cam = new Camera ();
        cam.lookAt (3,0,3,
                    0,0,-2,
                    0,1,0);
        wld.addChild (cam);
        wld.setActiveCamera (cam);

        AnimationController controller = new AnimationController ();

        KeyframeSequence keyframe_fog_far = new KeyframeSequence (3, 1, KeyframeSequence.LINEAR);
        float[][] frame_fog_far = {{10}, {4}, {10}};
        keyframe_fog_far.setKeyframe (0, 0,   frame_fog_far[0]);
        keyframe_fog_far.setKeyframe (1, 100, frame_fog_far[1]);
        keyframe_fog_far.setKeyframe (2, 200, frame_fog_far[2]);
        keyframe_fog_far.setRepeatMode (KeyframeSequence.LOOP);
        keyframe_fog_far.setValidRange (0, 2);
        keyframe_fog_far.setDuration (200);

        AnimationTrack animation_fog_far = new AnimationTrack (keyframe_fog_far, AnimationTrack.FAR_DISTANCE);
        animation_fog_far.setController (controller);

        VertexArray positions       = new VertexArray (4, 3, 2);
        short[]     position_values = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
        positions.set (0, 4, position_values);

        float   scale = 1;
        float[] bias  = {0,0,0};
        VertexBuffer vertices = new VertexBuffer ();
        vertices.setPositions (positions, scale, bias);
        vertices.setDefaultColor (0xff0000ff);

        int[] strips = {4};
        TriangleStripArray tris = new TriangleStripArray (0, strips);

        Fog fog = new Fog ();
        fog.setLinear (4, 10);
        fog.setColor (0x000000ff);
        fog.addAnimationTrack (animation_fog_far);
        fog.setMode (Fog.LINEAR);

        Appearance app = new Appearance ();
        app.setFog (fog);

        Mesh mesh1 = new Mesh (vertices, tris, app);
        mesh1.translate (0,0,-1);

        Mesh mesh2 = new Mesh (vertices, tris, app);
        mesh2.translate (0,0,-2);

        Mesh mesh3 = new Mesh (vertices, tris, app);
        mesh3.translate (0,0,-3);

        Mesh mesh4 = new Mesh (vertices, tris, app);
        mesh4.translate (0,0,-4);

        Mesh mesh5 = new Mesh (vertices, tris, app);
        mesh5.translate (0,0,-5);

        Group grp = new Group ();
        wld.addChild (grp);
        grp.addChild (mesh1);
        grp.addChild (mesh2);
        grp.addChild (mesh3);
        grp.addChild (mesh4);
        grp.addChild (mesh5);

        Background bg = new Background ();
        bg.setColor (0xff3f3f3f);
        wld.setBackground (bg);

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
        GL gl = drawable.getGL ();
        gl.glClearDepth(1.0f);        // Depth Buffer Setup
        gl.glDepthFunc(GL.GL_LEQUAL);  // The Type Of Depth Testing (Less Or Equal)
        gl.glDisable(GL.GL_DEPTH_TEST);
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