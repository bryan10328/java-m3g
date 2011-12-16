package org.karlsland.m3g.test;

import static org.junit.Assert.*;

import org.junit.Test;
import org.karlsland.m3g.PolygonMode;

public class TestPolygonMode {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
	@Test
	public void testInitialize() {
        System.out.println("In");
        PolygonMode pmode = new PolygonMode ();
        System.out.println("Mid");
        
        assertEquals (PolygonMode.CULL_BACK   , pmode.getCulling());
        assertEquals (PolygonMode.WINDING_CCW , pmode.getWinding());
        assertEquals (PolygonMode.SHADE_SMOOTH, pmode.getShading());
        assertEquals (false                   , pmode.isTwoSidedLightingEnabled());
        assertEquals (true                    , pmode.isLocalCameraLightingEnabled());
        assertEquals (true                    , pmode.isPerspectiveCorrectionEnabled());
        System.out.println("Out");
	}

	@Test
	public void testFinalize() {
        @SuppressWarnings("unused")
		PolygonMode pmode = new PolygonMode ();
        pmode = null;
        System.gc();
	}

	@Test
	public void testSetCulling() {
        PolygonMode pmode = new PolygonMode ();
       
        pmode.setCulling (PolygonMode.CULL_NONE);
        assertEquals (PolygonMode.CULL_NONE  , pmode.getCulling());   
	}

	@Test
	public void testSetLocalCameraLightingEnable() {
        PolygonMode pmode = new PolygonMode ();

        pmode.setLocalCameraLightingEnable (false);
        assertEquals (false                  , pmode.isLocalCameraLightingEnabled());
	}

	@Test
	public void testSetPerspectiveCorrectionEnable() {
        PolygonMode pmode = new PolygonMode ();
        
        pmode.setPerspectiveCorrectionEnable (false);
        assertEquals (false                  , pmode.isPerspectiveCorrectionEnabled());
	}

	@Test
	public void testSetShading() {
        PolygonMode pmode = new PolygonMode ();
        
        pmode.setShading (PolygonMode.SHADE_FLAT);
        assertEquals (PolygonMode.SHADE_FLAT , pmode.getShading());
	}

	@Test
	public void testSetTwoSidedLightingEnable() {
        PolygonMode pmode = new PolygonMode ();
        
        pmode.setTwoSidedLightingEnable (true);
        assertEquals (true                   , pmode.isTwoSidedLightingEnabled());
	}

	@Test
	public void testSetWinding() {
        PolygonMode pmode = new PolygonMode ();

        pmode.setWinding (PolygonMode.WINDING_CW);
        assertEquals (PolygonMode.WINDING_CW , pmode.getWinding());
	}
	
	@Test
	public void testToString() {
        PolygonMode pmode = new PolygonMode ();
        pmode.toString();
	}



}
