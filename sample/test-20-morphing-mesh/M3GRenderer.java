import javax.media.opengl.GL;
import javax.media.opengl.GLAutoDrawable;
import javax.media.opengl.GLEventListener;
import javax.media.opengl.GLCanvas;
import javax.media.opengl.GLContext;
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
        
        wld = new World ();

        Camera cam = new Camera ();
        cam.translate (0,0,10);
        wld.addChild (cam);
        wld.setActiveCamera (cam);


        KeyframeSequence keyframe_sequence = new KeyframeSequence (4, 2, KeyframeSequence.LINEAR);
        float[][] keyframe_weights  = {{0,0},
                                       {1,0},
                                       {0,1},
                                       {0,0}};
        keyframe_sequence.setKeyframe   (0, 0,   keyframe_weights[0]);
        keyframe_sequence.setKeyframe   (1, 100, keyframe_weights[1]);
        keyframe_sequence.setKeyframe   (2, 200, keyframe_weights[2]);
        keyframe_sequence.setKeyframe   (3, 300, keyframe_weights[3]);
        keyframe_sequence.setValidRange (0, 3);
        keyframe_sequence.setDuration   (400);
        keyframe_sequence.setRepeatMode (KeyframeSequence.LOOP);

        AnimationController animation_controller = new AnimationController ();
        AnimationTrack      animation_track      = new AnimationTrack (keyframe_sequence, AnimationTrack.MORPH_WEIGHTS);
        animation_track.setController (animation_controller);

        float   scale = 1;
        float[] bias  = {0,0,0};

        VertexArray  base_positions        = new VertexArray (4, 3, 4);
        float[]      base_positions_values = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
        base_positions.set (0, 4, base_positions_values);

        VertexArray target1_positions        = new VertexArray (4, 3, 4);
        float[]     target1_positions_values = {1,-1,0, 0,0,0, -1,-1,0, 0,0,0};
        target1_positions.set (0, 4, target1_positions_values);

        VertexArray target2_positions        = new VertexArray (4, 3, 4);
        float[]     target2_positions_values = {2,-1,0, 2,-0.5f,0, -2,-1,0, -2,-0.5f,0};
        target2_positions.set (0, 4, target2_positions_values);

        VertexBuffer base_vertices = new VertexBuffer ();
        base_vertices.setPositions (base_positions, scale, bias);

        VertexBuffer[] target_vertices = new VertexBuffer[2];

        target_vertices[0] = new VertexBuffer ();
        target_vertices[0].setPositions (target1_positions, scale, bias);

        target_vertices[1] = new VertexBuffer ();
        target_vertices[1].setPositions (target2_positions, scale, bias);

        int[] strips = {4};
        TriangleStripArray tris = new TriangleStripArray (0, strips);
        Appearance app = new Appearance ();
  
        MorphingMesh mesh = new MorphingMesh (base_vertices, target_vertices, tris, app);

        float[] weights = {0,0};
        mesh.setWeights (weights);
        mesh.addAnimationTrack (animation_track);

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
        wld.animate (worldTime);
        g3d.render (wld);
    }
 
    public void displayChanged(GLAutoDrawable drawable,
                               boolean modeChanged,
                               boolean deviceChanged) {
        // 
    }

    public void update (char key) {

        drawer.setAutoSwapBufferMode (true);
        System.out.println (key+"のキーが押されたよ。");
        if (key == 'q') {
            System.exit (0);
        }
        else if (key == ' ') {
            System.out.println ("main: time = " + worldTime + "\n");
            worldTime = worldTime + 20;
        }

        drawer.display();
    }

}