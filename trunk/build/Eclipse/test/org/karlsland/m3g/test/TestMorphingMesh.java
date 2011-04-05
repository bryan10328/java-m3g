package org.karlsland.m3g.test;

import static org.junit.Assert.*;

import org.junit.Test;
import org.karlsland.m3g.Appearance;
import org.karlsland.m3g.MorphingMesh;
import org.karlsland.m3g.TriangleStripArray;
import org.karlsland.m3g.VertexArray;
import org.karlsland.m3g.VertexBuffer;

public class TestMorphingMesh {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
	@Test
	public void testInitialize1() {
        VertexArray        positions = new VertexArray (4, 3, 2);
        VertexBuffer       vertices  = new VertexBuffer ();
        VertexBuffer       target0   = new VertexBuffer ();
        VertexBuffer       target1   = new VertexBuffer ();
        VertexBuffer[]     targets   = new VertexBuffer[] {target0, target1};
        TriangleStripArray tris      = new TriangleStripArray (0, new int[]{3});
        Appearance         app       = new Appearance ();

        vertices.setPositions (positions, 1, new float[]{0,0,0});
        target0.setPositions  (positions, 1, new float[]{0,0,0});
        target1.setPositions  (positions, 1, new float[]{0,0,0});

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
	public void testInitialize2() {
        VertexArray          positions = new VertexArray (4, 3, 2);
        VertexBuffer         vertices  = new VertexBuffer ();
        VertexBuffer         target0   = new VertexBuffer ();
        VertexBuffer         target1   = new VertexBuffer ();
        VertexBuffer[]       targets   = new VertexBuffer[] {target0, target1};
        TriangleStripArray   tris0     = new TriangleStripArray (0, new int[]{3});
        TriangleStripArray   tris1     = new TriangleStripArray (0, new int[]{3});
        TriangleStripArray[] trises    = {tris0, tris1};
        Appearance           app0      = new Appearance ();
        Appearance           app1      = new Appearance ();
        Appearance[]         apps      = {app0, app1};

        float   scale = 1;
        float[] bias  = {0,0,0};
        vertices.setPositions (positions, scale, bias);
        target0.setPositions  (positions, scale, bias);
        target1.setPositions  (positions, scale, bias);

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
	public void testFinalize() {
        VertexArray        positions = new VertexArray (4, 3, 2);
        VertexBuffer       vertices  = new VertexBuffer ();
        VertexBuffer       target0   = new VertexBuffer ();
        VertexBuffer       target1   = new VertexBuffer ();
        VertexBuffer[]     targets   = new VertexBuffer[] {target0, target1};
        TriangleStripArray tris      = new TriangleStripArray (0, new int[]{3});
        Appearance         app       = new Appearance ();

        vertices.setPositions (positions, 1, new float[]{0,0,0});
        target0.setPositions  (positions, 1, new float[]{0,0,0});
        target1.setPositions  (positions, 1, new float[]{0,0,0});

        @SuppressWarnings("unused")
		MorphingMesh mesh = new MorphingMesh (vertices, targets, tris, app);

        mesh = null;
        System.gc();
	}


	@Test
	public void testSetWeights() {
        VertexArray        positions = new VertexArray (4, 3, 2);
        VertexBuffer       vertices  = new VertexBuffer ();
        VertexBuffer       target0   = new VertexBuffer ();
        VertexBuffer       target1   = new VertexBuffer ();
        VertexBuffer[]     targets   = new VertexBuffer[] {target0, target1};
        TriangleStripArray tris      = new TriangleStripArray (0, new int[]{3});
        Appearance         app       = new Appearance ();

        vertices.setPositions (positions, 1, new float[]{0,0,0});
        target0.setPositions  (positions, 1, new float[]{0,0,0});
        target1.setPositions  (positions, 1, new float[]{0,0,0});

		MorphingMesh mesh = new MorphingMesh (vertices, targets, tris, app);
        
        float[] expected = {1,2};
        mesh.setWeights(expected);
        
        float[] weights = {0,0};
        mesh.getWeights(weights);
        
        assertEquals(1.f, weights[0], 0.0001f);
        assertEquals(2.f, weights[1], 0.0001f);
      
	}

	@Test
	public void testToString() {
        VertexArray        positions = new VertexArray (4, 3, 2);
        VertexBuffer       vertices  = new VertexBuffer ();
        VertexBuffer       target0   = new VertexBuffer ();
        VertexBuffer       target1   = new VertexBuffer ();
        VertexBuffer[]     targets   = new VertexBuffer[] {target0, target1};
        TriangleStripArray tris      = new TriangleStripArray (0, new int[]{3});
        Appearance         app       = new Appearance ();

        vertices.setPositions (positions, 1, new float[]{0,0,0});
        target0.setPositions  (positions, 1, new float[]{0,0,0});
        target1.setPositions  (positions, 1, new float[]{0,0,0});

		MorphingMesh mesh = new MorphingMesh (vertices, targets, tris, app);
		mesh.toString();
	}


}
