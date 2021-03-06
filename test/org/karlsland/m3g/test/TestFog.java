package org.karlsland.m3g.test;

import static org.junit.Assert.assertEquals;

import org.junit.Test;
import org.karlsland.m3g.AnimationTrack;
import org.karlsland.m3g.Fog;
import org.karlsland.m3g.KeyframeSequence;

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

	@Test
	public void testAddAnimationTrack () {
		KeyframeSequence keySeq1 = new KeyframeSequence(2, 3, KeyframeSequence.LINEAR);
		AnimationTrack   anim1   = new AnimationTrack(keySeq1, AnimationTrack.COLOR);
		KeyframeSequence keySeq2 = new KeyframeSequence(2, 1, KeyframeSequence.LINEAR);
		AnimationTrack   anim2   = new AnimationTrack(keySeq2, AnimationTrack.DENSITY);
		KeyframeSequence keySeq3 = new KeyframeSequence(2, 1, KeyframeSequence.LINEAR);
		AnimationTrack   anim3   = new AnimationTrack(keySeq3, AnimationTrack.NEAR_DISTANCE);
		KeyframeSequence keySeq4 = new KeyframeSequence(2, 1, KeyframeSequence.LINEAR);
		AnimationTrack   anim4   = new AnimationTrack(keySeq4, AnimationTrack.FAR_DISTANCE);
		Fog fog = new Fog();
	
		fog.addAnimationTrack(anim1);
		fog.addAnimationTrack(anim2);
		fog.addAnimationTrack(anim3);
		fog.addAnimationTrack(anim4);
		
		assertEquals(4    , fog.getAnimationTrackCount());
		assertEquals(anim1, fog.getAnimationTrack(0));
		assertEquals(anim2, fog.getAnimationTrack(1));
		assertEquals(anim3, fog.getAnimationTrack(2));
		assertEquals(anim4, fog.getAnimationTrack(3));

	}

}
