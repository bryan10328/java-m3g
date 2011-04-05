package org.karlsland.m3g.test;

import static org.junit.Assert.*;

import org.junit.Test;
import org.karlsland.m3g.Material;

public class TestMaterial {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
	@Test
	public void testInitialize() {
		Material mat = new Material();
	
		assertEquals (false     , mat.isVertexColorTrackingEnabled());
		assertEquals (0x00333333, mat.getColor(Material.AMBIENT));
		assertEquals (0xffcccccc, mat.getColor(Material.DIFFUSE));
		assertEquals (0x00000000, mat.getColor(Material.EMISSIVE));
		assertEquals (0x00000000, mat.getColor(Material.SPECULAR));
		assertEquals (0         , mat.getShininess(), 0.00001f);
	}

	@Test
	public void testFinalize() {
		@SuppressWarnings("unused")
		Material mat = new Material();
		mat = null;
		System.gc();
	}

	@Test
	public void testSetColor() {
        Material mat = new Material ();

        mat.setColor (Material.AMBIENT , 0x12345678);
        mat.setColor (Material.DIFFUSE , 0x34567890);
        mat.setColor (Material.EMISSIVE, 0x567890ab);
        mat.setColor (Material.SPECULAR, 0x7890abcd);

        assertEquals (0x00345678, mat.getColor(Material.AMBIENT));
        assertEquals (0x34567890, mat.getColor(Material.DIFFUSE));
        assertEquals (0x007890ab, mat.getColor(Material.EMISSIVE));
        assertEquals (0x0090abcd, mat.getColor(Material.SPECULAR));
	}

	@Test
	public void testSetShininess() {
		Material mat = new Material ();
		
		mat.setShininess (10.f);
        assertEquals (10.f       , mat.getShininess(), 0.00001f);
	}

	@Test
	public void testSetVertexColorTrackingEnable() {
		Material mat = new Material ();

		mat.setVertexColorTrackingEnable (true);
        assertEquals (true      , mat.isVertexColorTrackingEnabled());
	}

	@Test
	public void testToString() {
		Material mat = new Material ();
		mat.toString();
	}


}
