import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.karlsland.m3g.*;

public class TestSkinnedMesh {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestSkinnedMesh.class);
    }

    @Test
    public void testInitialize1 () {
        VertexArray        positions = new VertexArray (4, 3, 2);
        VertexBuffer       vertices  = new VertexBuffer ();
        TriangleStripArray tris      = new TriangleStripArray (0, new int[]{3});
        Appearance         app       = new Appearance ();
        Group              skeleton  = new Group ();
        vertices.setPositions (positions, 1, new float[]{0,0,0});

        SkinnedMesh mesh = new SkinnedMesh (vertices, tris, app, skeleton);

        assertEquals (vertices, mesh.getVertexBuffer());
        assertEquals (1       , mesh.getSubmeshCount());
        assertEquals (tris    , mesh.getIndexBuffer(0));
        assertEquals (app     , mesh.getAppearance(0));
        assertEquals (skeleton, mesh.getSkeleton());
    }

    @Test
    public void testInitialize2 () {
        VertexArray          positions = new VertexArray (4, 3, 2);
        VertexBuffer         vertices  = new VertexBuffer ();
        TriangleStripArray   tris0     = new TriangleStripArray (0, new int[]{3});
        TriangleStripArray   tris1     = new TriangleStripArray (0, new int[]{3});
        TriangleStripArray[] trises    = {tris0, tris1};
        Appearance           app0      = new Appearance ();
        Appearance           app1      = new Appearance ();
        Appearance[]         apps      = {app0, app1};
        Group              skeleton  = new Group ();
        vertices.setPositions (positions, 1, new float[]{0,0,0});

        SkinnedMesh mesh = new SkinnedMesh (vertices, trises, apps, skeleton);

        assertEquals (vertices , mesh.getVertexBuffer());
        assertEquals (2        , mesh.getSubmeshCount());
        assertEquals (tris0    , mesh.getIndexBuffer(0));

    }
}