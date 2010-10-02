import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.karlsland.m3g.*;

public class TestMorphingMesh {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestMorphingMesh.class);
    }

    @Test
    public void testInitialize1 () {
        VertexArray        positions = new VertexArray (4, 3, 2);
        VertexBuffer       vertices = new VertexBuffer ();
        VertexBuffer       target0  = new VertexBuffer ();
        VertexBuffer       target1  = new VertexBuffer ();
        VertexBuffer[]     targets  = new VertexBuffer[] {target0, target1};
        TriangleStripArray tris     = new TriangleStripArray (0, new int[]{3});
        Appearance         app      = new Appearance ();

        vertices.setPositions (positions, 1, new float[]{0,0,0});
        target0.setPositions (positions, 1, new float[]{0,0,0});
        target1.setPositions (positions, 1, new float[]{0,0,0});

        MorphingMesh mesh = new MorphingMesh (vertices, targets, tris, app);

        assertEquals (vertices, mesh.getVertexBuffer());
        assertEquals (2       , mesh.getMorphTargetCount());
        assertEquals (target0 , mesh.getMorphTarget(0));
        assertEquals (target1 , mesh.getMorphTarget(1));
        assertEquals (1       , mesh.getSubmeshCount());
        assertEquals (tris    , mesh.getIndexBuffer(0));
        assertEquals (app     , mesh.getAppearance(0));
    }

    @Test
    public void testInitialize2 () {
        VertexArray          positions = new VertexArray (4, 3, 2);
        VertexBuffer         vertices = new VertexBuffer ();
        VertexBuffer         target0  = new VertexBuffer ();
        VertexBuffer         target1  = new VertexBuffer ();
        VertexBuffer[]       targets  = new VertexBuffer[] {target0, target1};
        TriangleStripArray   tris0    = new TriangleStripArray (0, new int[]{3});
        TriangleStripArray   tris1    = new TriangleStripArray (0, new int[]{3});
        TriangleStripArray[] trises   = {tris0, tris1};
        Appearance           app0     = new Appearance ();
        Appearance           app1     = new Appearance ();
        Appearance[]         apps     = {app0, app1};

        float   scale = 1;
        float[] bias  = {0,0,0};
        vertices.setPositions (positions, scale, bias);
        target0.setPositions (positions, scale, bias);
        target1.setPositions (positions, scale, bias);

        MorphingMesh mesh = new MorphingMesh (vertices, targets, trises, apps);

        assertEquals (vertices , mesh.getVertexBuffer());
        assertEquals (2        , mesh.getMorphTargetCount());
        assertEquals (target0  , mesh.getMorphTarget(0));
        assertEquals (target1  , mesh.getMorphTarget(1));
        assertEquals (2        , mesh.getSubmeshCount());
        assertEquals (tris0    , mesh.getIndexBuffer(0));
        assertEquals (tris1    , mesh.getIndexBuffer(1));
        assertEquals (app0     , mesh.getAppearance(0));
        assertEquals (app1     , mesh.getAppearance(1));

    }

    @Test
    public void testSetterGetter () {
        VertexArray          positions0 = new VertexArray (3, 3, 2);
        VertexArray          positions1 = new VertexArray (3, 3, 2);
        VertexArray          positions2 = new VertexArray (3, 3, 2);
        VertexBuffer         vertices = new VertexBuffer ();
        VertexBuffer         target0  = new VertexBuffer ();
        VertexBuffer         target1  = new VertexBuffer ();
        VertexBuffer[]       targets  = new VertexBuffer[] {target0, target1};
        TriangleStripArray   tris0    = new TriangleStripArray (0, new int[]{3});
        TriangleStripArray   tris1    = new TriangleStripArray (0, new int[]{3});
        TriangleStripArray[] trises   = {tris0, tris1};
        Appearance           app0     = new Appearance ();
        Appearance           app1     = new Appearance ();
        Appearance[]         apps     = {app0, app1};

        short[] position_values0 = {0, 0,0,0,0,0,0,0,0};
        short[] position_values1 = {1, 0,0,0,0,0,0,0,0};
        short[] position_values2 = {2, 0,0,0,0,0,0,0,0};
        positions0.set (0, 3, position_values0);
        positions1.set (0, 3, position_values1);
        positions2.set (0, 3, position_values2);
        float   scale = 1;
        float[] bias  = {0,0,0};
        vertices.setPositions (positions0, scale, bias);
        target0.setPositions  (positions1, scale, bias);
        target1.setPositions  (positions2, scale, bias);

        MorphingMesh mesh = new MorphingMesh (vertices, targets, trises, apps);

        float[] weights = {1,2};
        mesh.setWeights (weights);
        
        float[] w = new float[2];
        mesh.getWeights (w);
        assertEquals (1.f, w[0], 0.00001f);
        assertEquals (2.f, w[1], 0.00001f);

        
        
    }



}
