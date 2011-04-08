package org.karlsland.m3g.test;

import static org.junit.Assert.assertEquals;

import org.junit.Test;
import org.karlsland.m3g.AnimationTrack;
import org.karlsland.m3g.KeyframeSequence;
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

	@Test
	public void testAddAnimationTrack () {
		KeyframeSequence keySeq1 = new KeyframeSequence(2, 1, KeyframeSequence.LINEAR);
		AnimationTrack   anim1   = new AnimationTrack(keySeq1, AnimationTrack.ALPHA);
		KeyframeSequence keySeq2 = new KeyframeSequence(2, 3, KeyframeSequence.LINEAR);
		AnimationTrack   anim2   = new AnimationTrack(keySeq2, AnimationTrack.AMBIENT_COLOR);
		KeyframeSequence keySeq3 = new KeyframeSequence(2, 3, KeyframeSequence.LINEAR);
		AnimationTrack   anim3   = new AnimationTrack(keySeq3, AnimationTrack.DIFFUSE_COLOR);
		KeyframeSequence keySeq4 = new KeyframeSequence(2, 3, KeyframeSequence.LINEAR);
		AnimationTrack   anim4   = new AnimationTrack(keySeq4, AnimationTrack.EMISSIVE_COLOR);
		KeyframeSequence keySeq5 = new KeyframeSequence(2, 1, KeyframeSequence.LINEAR);
		AnimationTrack   anim5   = new AnimationTrack(keySeq5, AnimationTrack.SHININESS);
		KeyframeSequence keySeq6 = new KeyframeSequence(2, 3, KeyframeSequence.LINEAR);
		AnimationTrack   anim6   = new AnimationTrack(keySeq6, AnimationTrack.SPECULAR_COLOR);
		Material mat = new Material();
	
		mat.addAnimationTrack(anim1);
		mat.addAnimationTrack(anim2);
		mat.addAnimationTrack(anim3);
		mat.addAnimationTrack(anim4);
		mat.addAnimationTrack(anim5);
		mat.addAnimationTrack(anim6);

		assertEquals(6    , mat.getAnimationTrackCount());
		assertEquals(anim1, mat.getAnimationTrack(0));
		assertEquals(anim2, mat.getAnimationTrack(1));
		assertEquals(anim3, mat.getAnimationTrack(2));
		assertEquals(anim4, mat.getAnimationTrack(3));
		assertEquals(anim5, mat.getAnimationTrack(4));
		assertEquals(anim6, mat.getAnimationTrack(5));
	}
}
