import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.karlsland.m3g.*;

public class TestMesh {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestMesh.class);
    }

    @Test
    public void testInitialize1 () {
        VertexBuffer       vertices = new VertexBuffer ();
        TriangleStripArray tris     = new TriangleStripArray (0, new int[]{3});
        Appearance         app      = new Appearance ();

        Mesh mesh = new Mesh (vertices, tris, app);

        assertEquals (vertices, mesh.getVertexBuffer());
        assertEquals (1       , mesh.getSubmeshCount());
        assertEquals (tris    , mesh.getIndexBuffer(0));
        assertEquals (app     , mesh.getAppearance(0));
    }

    @Test
    public void testInitialize2 () {
        VertexBuffer         vertices = new VertexBuffer ();
        TriangleStripArray   tris0    = new TriangleStripArray (0, new int[]{3});
        TriangleStripArray   tris1    = new TriangleStripArray (0, new int[]{3});
        TriangleStripArray[] trises   = {tris0, tris1};
        Appearance           app0     = new Appearance ();
        Appearance           app1     = new Appearance ();
        Appearance[]         apps     = {app0, app1};

        Mesh mesh = new Mesh (vertices, trises, apps);

        assertEquals (vertices , mesh.getVertexBuffer());
        assertEquals (2        , mesh.getSubmeshCount());
        assertEquals (tris0    , mesh.getIndexBuffer(0));
        assertEquals (tris1    , mesh.getIndexBuffer(1));
        assertEquals (app0     , mesh.getAppearance(0));
        assertEquals (app1     , mesh.getAppearance(1));

    }




}