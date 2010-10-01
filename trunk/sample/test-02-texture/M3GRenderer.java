import javax.media.opengl.GL;
import javax.media.opengl.GLAutoDrawable;
import javax.media.opengl.GLEventListener;
import javax.media.opengl.GLCanvas;
import org.karlsland.m3g.*;

public class M3GRenderer implements GLEventListener {

    private Graphics3D g3d;
    private World      wld;

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
        byte colorValues[] = {255,255,255, 255,255,255, 255,255,255, 255,255,255};
        colors.set (0, 4, color_values);

        VertexArray texCoords = new VertexArray (4, 2, 2);
        short texCoordValues[] = {1,0, 1,1, 0,0, 0,1};
        texCoords.set (0, 4, texCoordValues);

        flaot scale = 1;
        float bias[3] = {0,0,0};
        VertexBuffer vertices = new VertexBuffer;
        vertices.setPositions (positions, scale, bias);
        vertices.setColors (colors);
        vertices.setTexCoords (0, texCoords, scale, bias);
        vertices.setTexCoords (1, texCoords, scale, bias);
        
        int strips[2];


        // ここから
        // load関数がないのでこのサンプルは無理


        float scale = 1;
        float[] bias = {0,0,0};
        vertices.setPositions (positions, scale, bias);
        
        int[] indices = {0,1,2,3};
        int[] strips = {4};
        TriangleStripArray tris = new TriangleStripArray (indices, strips);

        Material mat = new Material ();
        mat.setColor (Material.DIFFUSE, 0xff7f7fff);
  
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
 


}