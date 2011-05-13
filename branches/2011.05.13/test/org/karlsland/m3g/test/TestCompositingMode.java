package org.karlsland.m3g.test;

import static org.junit.Assert.*;

import org.junit.Test;
import org.karlsland.m3g.CompositingMode;

public class TestCompositingMode {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
	@Test
	public void testInitialize() {
		CompositingMode cmode = new CompositingMode();
		
		assertEquals (CompositingMode.REPLACE, cmode.getBlending());
		assertEquals (0.f , cmode.getAlphaThreshold()   , 0.00001f);
		assertEquals (0.f , cmode.getDepthOffsetFactor(), 0.00001f);
		assertEquals (0.f , cmode.getDepthOffsetUnits() , 0.00001f);
		assertEquals (true, cmode.isDepthTestEnabled());
		assertEquals (true, cmode.isAlphaWriteEnabled());
		assertEquals (true, cmode.isColorWriteEnabled());
		assertEquals (true, cmode.isDepthWriteEnabled());
	}

	@Test
	public void testFinalize() {
		@SuppressWarnings("unused")
		CompositingMode cmode = new CompositingMode();
		cmode = null;
		System.gc();
	}
	
	@Test
	public void testSetAlphaThreshold() {
		CompositingMode cmode = new CompositingMode();
		cmode.setAlphaThreshold(0.1f);
		
		assertEquals(0.1f, cmode.getAlphaThreshold(), 0.0001f);
	}

	@Test
	public void testSetAlphaWriteEnable() {
		CompositingMode cmode = new CompositingMode();
		cmode.setAlphaWriteEnable(false);
		
		assertEquals(false, cmode.isAlphaWriteEnabled());
	}

	@Test
	public void testSetBlending() {
        CompositingMode cmode = new CompositingMode ();

        cmode.setBlending (CompositingMode.MODULATE_X2);
        assertEquals (CompositingMode.MODULATE_X2, cmode.getBlending());
	}

	@Test
	public void testSetColorWriteEnable() {
        CompositingMode cmode = new CompositingMode ();
        
        cmode.setColorWriteEnable(false);
        assertEquals(false, cmode.isColorWriteEnabled());
	}

	@Test
	public void testSetDepthOffset() {
        CompositingMode cmode = new CompositingMode ();
        
        cmode.setDepthOffset       (0.1f, 0.2f);
        cmode.setDepthTestEnable   (false);
        assertEquals (0.1f , cmode.getDepthOffsetFactor(), 0.00001f);
        assertEquals (0.2f , cmode.getDepthOffsetUnits() , 0.00001f);
	}

	@Test
	public void testSetDepthTestEnable() {
        CompositingMode cmode = new CompositingMode ();

        cmode.setDepthTestEnable   (false);
        assertEquals (false, cmode.isDepthTestEnabled());
	}

	@Test
	public void testSetDepthWriteEnable() {
        CompositingMode cmode = new CompositingMode ();

        cmode.setDepthWriteEnable  (false);
        assertEquals (false, cmode.isDepthWriteEnabled());
	}

	@Test
	public void testToString() {
        CompositingMode cmode = new CompositingMode ();
        cmode.toString();
	}


}
