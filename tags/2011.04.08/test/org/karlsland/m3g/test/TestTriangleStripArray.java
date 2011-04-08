package org.karlsland.m3g.test;

import static org.junit.Assert.*;

import org.junit.Test;
import org.karlsland.m3g.TriangleStripArray;

public class TestTriangleStripArray {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
	@Test
	public void testInitialize1() {
	    int[] indices      = {2,4,6,8,10,12,14,16,18,20};
	    int[] stripLengths = {4,3,3};
	    TriangleStripArray tris = new TriangleStripArray(indices, stripLengths);

	    assertEquals (12, tris.getIndexCount());

	    int[] expected     = {2,4,6, 4,6,8, 10,12,14, 16,18,20};
	    indices            = new int[12];
	    tris.getIndices (indices);  
	    assertEquals(12, tris.getIndexCount());
	    assertArrayEquals(expected, indices);
	}

	@Test
	public void testInitialize2() {
	    int   firstIndex   = 100;
	    int[] stripLengths = {4,3,3};
	    TriangleStripArray tris = new TriangleStripArray (firstIndex, stripLengths);

	    assertEquals (12, tris.getIndexCount());

	    assertEquals (12, tris.getIndexCount());
	    int[] expected = {100,101,102, 101,102,103, 104,105,106, 107,108,109};
	    int[] indices = new int[12];
	    tris.getIndices (indices);
	    assertArrayEquals(expected, indices);
	}

	
	@Test
	public void testFinalize() {
	    int   firstIndex   = 100;
	    int[] stripLengths = {4,3,3};
	    @SuppressWarnings("unused")
		TriangleStripArray tris = new TriangleStripArray (firstIndex, stripLengths);
		tris = null;
		System.gc();
	}

	@Test
	public void testToString() {
	    int   firstIndex   = 100;
	    int[] stripLengths = {4,3,3};
	    TriangleStripArray tris = new TriangleStripArray (firstIndex, stripLengths);
		tris.toString();
	}
}
