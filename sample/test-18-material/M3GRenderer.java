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
        cam.lookAt (0,20,20,
                   0,0,0,
                   0,1,0);
        wld.addChild (cam);
        wld.setActiveCamera (cam);


        AnimationController controller = new AnimationController ();

        KeyframeSequence keyframe_light_color = new KeyframeSequence (3, 3, KeyframeSequence.LINEAR);
        float[][] frame_light_color = {{1,1,0}, {0,1,0}, {1,1,0}, {1,0,0}};
        keyframe_light_color.setKeyframe (0, 0,   frame_light_color[0]);
        keyframe_light_color.setKeyframe (1, 100, frame_light_color[1]);
        keyframe_light_color.setKeyframe (2, 200, frame_light_color[2]);
        keyframe_light_color.setRepeatMode (KeyframeSequence.LOOP);
        keyframe_light_color.setValidRange (0, 2);
        keyframe_light_color.setDuration (200);

        AnimationTrack animation_light_color = new AnimationTrack (keyframe_light_color, AnimationTrack.COLOR);
        animation_light_color.setController (controller);


        VertexArray positions = new VertexArray (840, 3, 2);
        positions.set (0, 840, Data.position_values);

        VertexArray normals = new VertexArray (840, 3, 1);
        normals.set (0, 840, Data.normal_values);

        float scale   = 1;
        float[] bias = {0,0,0};
        VertexBuffer vertices = new VertexBuffer ();
        vertices.setPositions (positions, scale, bias);
        vertices.setNormals (normals);

        int[] strips = {42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42};
        TriangleStripArray tris = new TriangleStripArray (0, strips);

        Material mat = new Material ();
        mat.setColor (Material.EMISSIVE, 0x00000000);
        mat.setColor (Material.DIFFUSE,  0x00000000);
        mat.setColor (Material.SPECULAR, 0x00ff0000);
        mat.setShininess (10);

        Appearance app = new Appearance ();
        app.setMaterial (mat);

        Mesh mesh = new Mesh (vertices, tris, app);
        //meshtranslate (0,0,-10);
        wld.addChild (mesh);

        Light lig = new Light ();
        lig.setColor (0xffffffff);
        lig.setIntensity (3);
        lig.setMode (Light.OMNI);
        lig.translate (0,1,0);
        lig.addAnimationTrack (animation_light_color);
        wld.addChild (lig);



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