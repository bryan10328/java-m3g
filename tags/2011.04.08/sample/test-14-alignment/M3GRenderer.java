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
        cam.lookAt (0,0,15,
                    0,0,0,
                    0,1,0);
        wld.addChild (cam);
        wld.setActiveCamera (cam);

        Background bg = new Background ();
        bg.setColor (0xff3f3fff);
        wld.setBackground (bg);

        VertexArray positions = new VertexArray (4, 3, 4);
        float[]        position_values = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
        positions.set (0, 4, position_values);

        VertexArray  colors = new VertexArray (4, 3, 1);
        byte colors_values[] = {127,127,127, 127,0,0, 127,127,127, 0,0,127, 127,127,127};
        colors.set (0, 4, colors_values);

        float scale = 1;
        float[] bias = {0,0,0};
        VertexBuffer vertices = new VertexBuffer ();
        vertices.setPositions (positions, scale, bias);
        vertices.setColors (colors);

        int[] strips = {4};
        int[] indices = {0,1,2,3};
        TriangleStripArray tris = new TriangleStripArray (indices, strips);

        PolygonMode poly = new PolygonMode ();
        poly.setCulling (PolygonMode.CULL_NONE);

        Material mat = new Material ();
        mat.setVertexColorTrackingEnable (true);

        Appearance app = new Appearance ();
        app.setPolygonMode (poly);
        app.setMaterial (mat);


        Mesh mesh1 = new Mesh (vertices, tris, app);
        wld.addChild (mesh1);

        Mesh mesh2 = new Mesh (vertices, tris, app);
        mesh2.translate (3,0,0);
        wld.addChild (mesh2);

        Mesh mesh3 = new Mesh (vertices, tris, app);
        mesh3.translate (-3,0,0);
        wld.addChild (mesh3);

        mesh1.setAlignment (cam, Node.NONE,   wld, Node.NONE);
        mesh2.setAlignment (cam, Node.ORIGIN, wld, Node.ORIGIN);
        mesh3.setAlignment (cam, Node.ORIGIN, cam, Node.ORIGIN);
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
        else if (key == '4') {
            Camera cam = wld.getActiveCamera();
            cam.postRotate (5, 0,1,0);
            wld.align (null);
        }
        else if (key == '6') {
            Camera cam = wld.getActiveCamera();
            cam.postRotate (-5, 0,1,0);
            wld.align (null);
        }
        else if (key == '8') {
            Camera cam = wld.getActiveCamera();
            cam.postRotate (5, 1,0,0);
            wld.align (null);
        }
        else if (key == '2') {
            Camera cam = wld.getActiveCamera();
            cam.postRotate (-5, 1,0,0);
            wld.align (null);
        }

        drawer.display();
    }

}