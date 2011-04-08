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
        cam.lookAt (0,0,10,
                    0,0,0,
                    0,1,0);
        wld.addChild (cam);
        wld.setActiveCamera (cam);

        Background bg = new Background ();
        bg.setColor (0xff7f7f7f);
        wld.setBackground (bg);

        AnimationController controller_translation = new AnimationController ();
        controller_translation.setSpeed (1, 0);
        AnimationController controller_orientation = new AnimationController ();
        controller_orientation.setSpeed (2, 0);
  
        KeyframeSequence keyframe_mesh_translate = new KeyframeSequence (4, 3, KeyframeSequence.LINEAR);
        KeyframeSequence keyframe_mesh_orientation = new KeyframeSequence (3, 4, KeyframeSequence.SLERP);
        float[][] frame_mesh_translate = {{0,0,0},
                                          {4,0,0},
                                          {-4,0,0}};
        float[][] frame_mesh_orientation = {{0,0,0, 1},
                                            {0,1,0, 0},
                                            {0,0,0, -1}};
        keyframe_mesh_translate.setKeyframe (0, 0,   frame_mesh_translate[0]);
        keyframe_mesh_translate.setKeyframe (1, 100, frame_mesh_translate[1]);
        keyframe_mesh_translate.setKeyframe (2, 300, frame_mesh_translate[2]);
        keyframe_mesh_translate.setKeyframe (3, 400, frame_mesh_translate[0]);
        keyframe_mesh_translate.setRepeatMode (KeyframeSequence.LOOP);
        keyframe_mesh_translate.setValidRange (0, 3);
        keyframe_mesh_translate.setDuration (400);
        keyframe_mesh_orientation.setKeyframe (0, 0,   frame_mesh_orientation[0]);
        keyframe_mesh_orientation.setKeyframe (1, 100, frame_mesh_orientation[1]);
        keyframe_mesh_orientation.setKeyframe (2, 200, frame_mesh_orientation[2]);
        keyframe_mesh_orientation.setRepeatMode (KeyframeSequence.LOOP);
        keyframe_mesh_orientation.setValidRange (0, 2);
        keyframe_mesh_orientation.setDuration (200);

        AnimationTrack animation_mesh_translation = new AnimationTrack (keyframe_mesh_translate, AnimationTrack.TRANSLATION);
        animation_mesh_translation.setController (controller_translation);
        AnimationTrack animation_mesh_orientation = new AnimationTrack (keyframe_mesh_orientation, AnimationTrack.ORIENTATION);
        animation_mesh_orientation.setController (controller_orientation);




        VertexArray positions         = new VertexArray (4, 3, 2);
        short[]        position_values = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
        positions.set (0, 4, position_values);

        float scale = 1;
        float[] bias = {0,0,0};
        VertexBuffer vertices = new VertexBuffer ();
        vertices.setPositions (positions, scale, bias);

        int[] strips  = {4};
        int[] indices = {0,1,2,3};
        TriangleStripArray tris = new TriangleStripArray (indices, strips);

        Material mat = new Material ();
        mat.setColor (Material.DIFFUSE, 0xff0000ff);

        PolygonMode pmode = new PolygonMode ();
        pmode.setCulling (PolygonMode.CULL_NONE);

        Appearance app = new Appearance ();
        app.setMaterial (mat);
        app.setPolygonMode (pmode);

        Mesh mesh = new Mesh (vertices, tris, app);
        mesh.addAnimationTrack (animation_mesh_translation);
        mesh.addAnimationTrack (animation_mesh_orientation);
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
        }
        else if (key == ' ') {
            System.out.println ("main: time = " + worldTime + "\n");
            worldTime = worldTime + 2;
            wld.animate (worldTime);
        }

        drawer.display();
    }

}