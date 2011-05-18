package org.karlsland.m3g.test;

import static org.junit.Assert.*;

import org.junit.Test;
import org.karlsland.m3g.Graphics3D;

public class TestGraphics3D {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
	@Test
	public void testInitialize() {
		Graphics3D g3d1 = Graphics3D.getInstance();
		Graphics3D g3d2 = Graphics3D.getInstance();
		
		assertEquals(g3d1, g3d2);
	}

	/**
	 * finalize()が呼ばれてもC++側のインスタンスは開放されない。
	 * Graphics3Dのインスタンスは開放できない（してはいけない）。
	 */
	@Test
	public void testFinalize() {
		@SuppressWarnings("unused")
		Graphics3D g3d = Graphics3D.getInstance();
		g3d = null;
		System.gc();
	}

	@Test
	public void testSetViewport() {
		Graphics3D g3d = Graphics3D.getInstance();
		g3d.setViewport(1, 2, 100, 200);
		
		assertEquals(1  , g3d.getViewportX());
		assertEquals(2  , g3d.getViewportY());
		assertEquals(100, g3d.getViewportWidth());
		assertEquals(200, g3d.getViewportHeight());
	}

	@Test
	public void testToString() {
		Graphics3D g3d = Graphics3D.getInstance();
		g3d.toString();
	}

}
