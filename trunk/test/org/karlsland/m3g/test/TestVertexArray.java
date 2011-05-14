package org.karlsland.m3g.test;

import static org.junit.Assert.*;

import org.junit.Test;
import org.karlsland.m3g.VertexArray;

public class TestVertexArray {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
	@Test
	public void testInitialize() {
        VertexArray varry = new VertexArray (3, 2, 1);
        
        assertEquals (3, varry.getVertexCount());
        assertEquals (2, varry.getComponentCount());
        assertEquals (1, varry.getComponentType());
	}

	@Test
	public void testFinalize() {
        @SuppressWarnings("unused")
		VertexArray varry = new VertexArray (3, 2, 1);
        varry = null;
        System.gc();
	}

	@Test
	public void testSet1() {
        VertexArray varry    = new VertexArray (3, 2, 1);
        byte[]      expected = {1,2, 3,4, 5,6};
        byte[]      values   = new byte[6];
        varry.set(0, 3, expected);
        varry.get(0, 3, values);
        
        assertArrayEquals(expected, values);
	}

	@Test
	public void testSet2() {
        VertexArray varry    = new VertexArray (3, 2, 2);
        short[]      expected = {1,2, 3,4, 5,6};
        short[]      values   = new short[6];
        varry.set(0, 3, expected);
        varry.get(0, 3, values);
        
        assertArrayEquals(expected, values);
	}

	@Test
	public void testSet3() {
        VertexArray varry    = new VertexArray (3, 2, 4);
        float[]      expected = {1,2, 3,4, 5,6};
        float[]      values   = new float[6];
        varry.set(0, 3, expected);
        varry.get(0, 3, values);
        
        assertArrayEquals(expected, values, 0.00001f);
	}

	@Test
	public void testToString() {
        VertexArray varry = new VertexArray (3, 2, 4);
        varry.toString();
	}



}
