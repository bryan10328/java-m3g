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
        cam.translate (0,0,5);
        wld.addChild (cam);
        wld.setActiveCamera (cam);


        AnimationController controller = new AnimationController ();

        KeyframeSequence keyframe_sequence1 = new KeyframeSequence (3, 3, KeyframeSequence.LINEAR);
        float[][] keyframes1 = {{1,0,0}, {0,0,0}, {1,0,0}};
        keyframe_sequence1.setKeyframe (0, 0,   keyframes1[0]);
        keyframe_sequence1.setKeyframe (1, 100, keyframes1[1]);
        keyframe_sequence1.setKeyframe (2, 200, keyframes1[2]);
        keyframe_sequence1.setRepeatMode (KeyframeSequence.LOOP);
        keyframe_sequence1.setValidRange (0, 2);
        keyframe_sequence1.setDuration (200);

        KeyframeSequence keyframe_sequence2 = new KeyframeSequence (3, 3, KeyframeSequence.LINEAR);
        float[][] keyframes2 = {{-1,0,0}, {0,0,0}, {-1,0,0}};
        keyframe_sequence2.setKeyframe (0, 0,   keyframes2[0]);
        keyframe_sequence2.setKeyframe (1, 100, keyframes2[1]);
        keyframe_sequence2.setKeyframe (2, 200, keyframes2[2]);
        keyframe_sequence2.setRepeatMode (KeyframeSequence.LOOP);
        keyframe_sequence2.setValidRange (0, 2);
        keyframe_sequence2.setDuration (200);

        AnimationTrack animation_track1 = new AnimationTrack (keyframe_sequence1, AnimationTrack.TRANSLATION);
        animation_track1.setController (controller);

        AnimationTrack animation_track2 = new AnimationTrack (keyframe_sequence2, AnimationTrack.TRANSLATION);
        animation_track2.setController (controller);


        float   scale = 1;
        float[] bias = {0,0,0};

        short[]     pos1 = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
        VertexArray positions1 = new VertexArray (4, 3, 2);
        positions1.set (0, 4, pos1);

        VertexBuffer vertices1 = new VertexBuffer ();
        vertices1.setPositions (positions1, scale, bias);

        short[]     pos2       = {1,-1,-3, 1,1,-3, -1,-1,-3, -1,1,-3};
        VertexArray positions2 = new VertexArray (4, 3, 2);
        positions2.set (0, 4, pos2);

        VertexBuffer vertices2 = new VertexBuffer ();
        vertices2.setPositions (positions2, scale, bias);

        int[] strips = {4};
        TriangleStripArray tris = new TriangleStripArray (0, strips);

        Material mat1 = new Material ();
        mat1.setColor (Material.DIFFUSE, 0xcf4c4cb2);

        CompositingMode cmode1 = new CompositingMode ();
        cmode1.setBlending (CompositingMode.ALPHA);
        cmode1.setDepthTestEnable (false);
  
        Material mat2 = new Material ();
        mat2.setColor (Material.DIFFUSE, 0xcf4cb2b2);

        CompositingMode cmode2 = new CompositingMode ();
        cmode2.setBlending (CompositingMode.ALPHA);
        cmode2.setDepthTestEnable (false);

        Appearance app1 = new Appearance ();
        app1.setMaterial (mat1);
        app1.setCompositingMode (cmode1);

        Appearance app2 = new Appearance ();
        app2.setMaterial (mat2);
        app2.setCompositingMode (cmode2);

        animation_track1.print ();

        Mesh mesh1 = new Mesh (vertices1, tris, app1);
        mesh1.addAnimationTrack (animation_track1);
        mesh1.translate (1,0,0);

        Mesh mesh2 = new Mesh (vertices2, tris, app2);
        mesh2.addAnimationTrack (animation_track2);
        mesh2.translate (-1,0,0);
  
        Group grp = new Group ();
        grp.translate (0,0,-3);
        grp.addChild (mesh1);
        grp.addChild (mesh2);
        wld.addChild (grp);

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
            worldTime = worldTime + 5;
            wld.animate (worldTime);
            drawer.display();
        }

    }


}