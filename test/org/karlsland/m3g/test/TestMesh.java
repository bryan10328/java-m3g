package org.karlsland.m3g.test;

import static org.junit.Assert.*;

import org.junit.Test;
import org.karlsland.m3g.Appearance;
import org.karlsland.m3g.Group;
import org.karlsland.m3g.Mesh;
import org.karlsland.m3g.Object3D;
import org.karlsland.m3g.TriangleStripArray;
import org.karlsland.m3g.VertexBuffer;

public class TestMesh {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
	@Test
	public void testInitialize1() {
        VertexBuffer       vertices = new VertexBuffer ();
        TriangleStripArray tris     = new TriangleStripArray (0, new int[]{3});
        Appearance         app      = new Appearance ();
        Mesh               mesh     = new Mesh (vertices, tris, app);

        assertEquals (vertices, mesh.getVertexBuffer());
        assertEquals (1       , mesh.getSubmeshCount());
        assertEquals (tris    , mesh.getIndexBuffer(0));
        assertEquals (app     , mesh.getAppearance(0));
	}

	@Test
	public void testInitialize2() {
        VertexBuffer         vertices = new VertexBuffer ();
        TriangleStripArray   tris0    = new TriangleStripArray (0, new int[]{3});
        TriangleStripArray   tris1    = new TriangleStripArray (0, new int[]{3});
        TriangleStripArray[] trises   = {tris0, tris1};
        Appearance           app0     = new Appearance ();
        Appearance           app1     = new Appearance ();
        Appearance[]         apps     = {app0, app1};
        Mesh                 mesh     = new Mesh (vertices, trises, apps);

        assertEquals (vertices , mesh.getVertexBuffer());
        assertEquals (2        , mesh.getSubmeshCount());
        assertEquals (tris0    , mesh.getIndexBuffer(0));
        assertEquals (tris1    , mesh.getIndexBuffer(1));
        assertEquals (app0     , mesh.getAppearance(0));
        assertEquals (app1     , mesh.getAppearance(1));
	}
	
	@Test
	public void testFinalize() {
        VertexBuffer       vertices = new VertexBuffer ();
        TriangleStripArray tris     = new TriangleStripArray (0, new int[]{3});
        Appearance         app      = new Appearance ();
        @SuppressWarnings("unused")
        Mesh               mesh     = new Mesh (vertices, tris, app);
        mesh = null;
        System.gc();
	}

	@Test
	public void testToString() {
        VertexBuffer       vertices = new VertexBuffer ();
        TriangleStripArray tris     = new TriangleStripArray (0, new int[]{3});
        Appearance         app      = new Appearance ();
        Mesh               mesh     = new Mesh (vertices, tris, app);
        mesh.toString();
	}



	@Test
	public void testSetAppearance() {
        VertexBuffer       vertices = new VertexBuffer ();
        TriangleStripArray tris     = new TriangleStripArray (0, new int[]{3});
        Appearance         app1     = new Appearance ();
        Appearance         app2     = new Appearance ();
        Mesh               mesh     = new Mesh (vertices, tris, app1);
        assertEquals (app1     , mesh.getAppearance(0));

        mesh.setAppearance(0, app2);
        assertEquals (app2     , mesh.getAppearance(0));
        
        mesh.setAppearance(0, null);
        assertEquals (null     , mesh.getAppearance(0));
	}

	@Test
	public void testGetReferences() {
        VertexBuffer       vertices = new VertexBuffer ();
        TriangleStripArray tris     = new TriangleStripArray (0, new int[]{3});
        Appearance         app      = new Appearance ();
        Mesh               mesh     = new Mesh (vertices, tris, app);

		Object3D[] references = {null, null, null};
	 	int n = mesh.getReferences(references);

	 	assertEquals(3       , n);
	 	assertEquals(vertices, references[0]);
	 	assertEquals(tris    , references[1]);
	 	assertEquals(app     , references[2]);
	}

}
