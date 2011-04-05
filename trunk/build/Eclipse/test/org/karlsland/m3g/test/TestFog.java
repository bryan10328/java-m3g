package org.karlsland.m3g.test;

import static org.junit.Assert.*;

import org.junit.Test;
import org.karlsland.m3g.Fog;

public class TestFog {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
	@Test
	public void testInitilize() {
		Fog fog = new Fog();

        assertEquals (Fog.LINEAR, fog.getMode());
        assertEquals (1.f       , fog.getDensity()     , 0.00001f);
        assertEquals (0.f       , fog.getNearDistance(), 0.00001f);
        assertEquals (1.f       , fog.getFarDistance() , 0.00001f);
        assertEquals (0x00000000, fog.getColor());
	}

	@Test
	public void testFinalize() {
		@SuppressWarnings("unused")
		Fog fog = new Fog();
		fog = null;
		System.gc();
	}

	@Test
	public void testSetColor() {
		Fog fog = new Fog();
		fog.setColor(0x12345678);
        assertEquals (0x00345678, fog.getColor());
	}

	@Test
	public void testSetDensity() {
		Fog fog = new Fog();

        assertEquals (1.f       , fog.getDensity()     , 0.00001f);
	}

	@Test
	public void testSetLinear() {
		Fog fog = new Fog();
        fog.setLinear   (10, 20);
        assertEquals (10.f       , fog.getNearDistance(), 0.00001f);
        assertEquals (20.f       , fog.getFarDistance() , 0.00001f);
        }

	@Test
	public void testSetMode() {
		Fog fog = new Fog();
		fog.setMode(Fog.EXPONENTIAL);
		assertEquals (Fog.EXPONENTIAL, fog.getMode());
	}

	@Test
	public void testToString() {
		Fog fog = new Fog();
		fog.toString();
	}


}
