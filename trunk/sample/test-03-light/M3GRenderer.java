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
        cam.lookAt (0,20,20,
                    0,0,0,
                    0,1,0);
        wld.addChild (cam);
        wld.setActiveCamera (cam);

        VertexArray positions = new VertexArray (840, 3, 2);
        VertexArray normals   = new VertexArray (840, 3, 1);
        positions.set (0, 840, Data.positionValues);
        normals.set (0, 840, Data.normalValues);

        float scale = 1;
        float[] bias = {0,0,0};
        VertexBuffer vertices = new VertexBuffer ();
        vertices.setPositions (positions, scale, bias);
        vertices.setNormals (normals);

        int[] strips = {42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42};
        TriangleStripArray tris = new TriangleStripArray (0, strips);

        Material mat = new Material ();
        mat.setColor (Material.DIFFUSE, 0xffffffff);
  
        Appearance app = new Appearance ();
        app.setMaterial (mat);
        
        Mesh mesh = new Mesh (vertices, tris, app);
        wld.addChild (mesh);

        Light lgh = new Light ();
        lgh.setColor (0xffffff00);
        lgh.setIntensity (1);
        lgh.setMode (Light.OMNI);
        lgh.translate (0.f,2.f,0.f);
        lgh.postRotate (-90, 1,0,0);
        lgh.setSpotAngle (60);
        wld.addChild (lgh);
        
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