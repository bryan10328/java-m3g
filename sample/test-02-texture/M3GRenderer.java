import javax.media.opengl.GL;
import javax.media.opengl.GLAutoDrawable;
import javax.media.opengl.GLEventListener;
import javax.media.opengl.GLCanvas;
import org.karlsland.m3g.*;

public class M3GRenderer implements GLEventListener {

    private GLAutoDrawable drawer;
    private Graphics3D     g3d;
    private World          wld;

    public void init(GLAutoDrawable drawable) {
        // 初期化処理
        g3d = Graphics3D.getInstance ();
        wld = new World ();
        
        Camera cam = new Camera ();
        cam.translate (0,0,5);
        wld.addChild (cam);
        wld.setActiveCamera (cam);

        VertexArray positions = new VertexArray (4, 3, 2);
        short[]  positionValues = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
        positions.set (0, 4, positionValues);

        VertexArray colors = new VertexArray (4, 3, 1);
        byte colorValues[] = {127,127,127, 127,127,127, 127,127,127, 127,127,127};
        colors.set (0, 4, colorValues);

        VertexArray texCoords = new VertexArray (4, 2, 2);
        short texCoordValues[] = {1,0, 1,1, 0,0, 0,1};
        texCoords.set (0, 4, texCoordValues);

        float scale = 1;
        float[] bias = {0,0,0};
        VertexBuffer vertices = new VertexBuffer ();
        vertices.setPositions (positions, scale, bias);
        vertices.setColors (colors);
        vertices.setTexCoords (0, texCoords, scale, bias);
        vertices.setTexCoords (1, texCoords, scale, bias);
        
        int[] strips  = {3,3};
        int[] indices = {0,1,2, 2,1,3};

        
        TriangleStripArray tris = new TriangleStripArray (indices, strips);


        Image2D   img0 = (Image2D)(Loader.load ("yumemi.png")[0]);
        Texture2D tex0 = new Texture2D (img0);

        Image2D   img1 = (Image2D)(Loader.load ("onnanoko.png")[0]);
        Texture2D tex1 = new Texture2D (img1);
        tex1.setBlending (Texture2D.FUNC_DECAL);

        Appearance app = new Appearance ();
        app.setTexture (0, tex0);
        app.setTexture (1, tex1);

        Mesh mesh = new Mesh (vertices, tris, app);
        mesh.translate (0,0,2);
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
        drawer.display();
    }


}