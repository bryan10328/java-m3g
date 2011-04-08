import javax.media.opengl.GL;
import javax.media.opengl.GLAutoDrawable;
import javax.media.opengl.GLEventListener;
import javax.media.opengl.GLCanvas;
import org.karlsland.m3g.*;

public class M3GRenderer implements GLEventListener {

    private GLAutoDrawable drawer;
    private Graphics3D     g3d;
    private World          wld;
    private Camera         cam;
    private int     width;
    private int     height;
    private boolean clicked;
    private int     curX;
    private int     curY;

    public void init(GLAutoDrawable drawable) {
        // 初期化処理
        this.drawer  = drawable;
        this.g3d     = Graphics3D.getInstance ();
        this.wld     = new World ();
        this.cam     = new Camera ();
        this.width   = 0;
        this.height  = 0;
        this.clicked = false;
        this.curX = 0;
        this.curY = 0;

        cam.translate (0,0,2);
        wld.addChild (cam);
        wld.setActiveCamera (cam);

        VertexArray positions         = new VertexArray (4, 3, 2);
        short[]     position_values = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
        positions.set (0, 4, position_values);

        VertexArray normals           = new VertexArray (4, 3, 1);
        byte[]      normal_values   = {0,0,127, 0,127,0, 0,0,127, 0,127,0};
        normals.set (0, 4, normal_values);

        VertexArray tex_coords         = new VertexArray (4, 2, 4);
        float[]     tex_coord_values = {1,0, 1,1, 0,0, 0,1};
        tex_coords.set (0, 4, tex_coord_values);

        float   scale = 1;
        float[] bias  = {0,0,0};
        VertexBuffer vertices = new VertexBuffer ();
        vertices.setPositions (positions, scale, bias);
        vertices.setNormals   (normals);
        vertices.setTexCoords (0, tex_coords, scale, bias);
  
        int[][] strips  = {{3}, {3}};
        int[][] indices = {{0,1,2}, {1,2,3}};

        IndexBuffer[] submesh = {null,null};
        submesh[0] = new TriangleStripArray (indices[0], strips[0]);
        submesh[1] = new TriangleStripArray (indices[1], strips[1]);

        Appearance[] app = {null, null};
        app[0]     = new Appearance ();
        app[1]     = new Appearance ();

        Mesh mesh = new Mesh (vertices, submesh, app);
        wld.addChild (mesh);

        Background bg = new Background ();
        bg.setColor (0xff66380e);
        wld.setBackground (bg);
    }
 
    public void reshape(GLAutoDrawable drawable,
                        int x, int y, 
                        int width, int height) {
        // 描画領域変更処理
        this.width  = width;
        this.height = height;
        g3d.setViewport (x, y, width, height);
        Camera cam = wld.getActiveCamera ();
        cam.setPerspective (90, width/(float)height, 0.1f, 100.f);
    }
 
    public void display(GLAutoDrawable drawable) {
        // 描画処理
        if (clicked) {
            RayIntersection ri = new RayIntersection ();
            boolean hit;
            hit = wld.pick (-1, (float)curX/width, (float)curY/height, cam, ri);
            if (hit) {
                System.out.println ("HIT!\n");
            } else {
                System.out.println ("miss\n");
            }
            if (hit) {
                float nx = ri.getNormalX ();
                float ny = ri.getNormalY ();
                float nz = ri.getNormalZ ();
                int submesh_index = ri.getSubmeshIndex ();
                System.out.println ("normal = " + nx + "," + ny + "," + nz);
                System.out.println ("submesh index = " + submesh_index);
            }
            clicked = false;
        }
        g3d.render (wld);
    }
 
    public void displayChanged(GLAutoDrawable drawable,
                               boolean modeChanged,
                               boolean deviceChanged) {
        // 
    }
 
    public void keybord (char key) {
        System.out.println (key+"のキーが押された");
        if (key == 'q') {
            System.exit (0);
        }
        drawer.display();
    }

    public void mouse (int x, int y) {
        System.out.println ("クリック("+x+","+y+")");
        clicked = true;
        curX = x;
        curY = y; 
        drawer.display();
    }


}