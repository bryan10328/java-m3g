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

        VertexArray positions       = new VertexArray (4, 3, 2);
        short[]     position_values = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
        positions.set (0, 4, position_values);

        VertexArray colors       = new VertexArray (4, 4, 1);
        byte[]      color_values = {127,0,0,127,  0,127,0,127,  0,0,127,127,  127,127,127,127};
        colors.set (0, 4, color_values);

        float   scale = 1;
        float[] bias  = {0,0,0};
        VertexBuffer vertices = new VertexBuffer ();
        vertices.setPositions (positions, scale, bias);
        vertices.setColors    (colors);

        int[] indices = {0,1,2,3};
        int[] strips  = {4};
        TriangleStripArray tris = new TriangleStripArray (indices, strips);

        CompositingMode cmp = new CompositingMode ();
        cmp.setBlending (CompositingMode.ALPHA);

        Material mat = new Material ();
        mat.setVertexColorTrackingEnable (true);

        Appearance app = new Appearance ();
        app.setMaterial (mat);
        app.setCompositingMode (cmp);

        Mesh mesh  = new Mesh (vertices, tris, app);
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
            worldTime = worldTime + 5;
            wld.animate (worldTime);
            drawer.display();
        }

    }


}