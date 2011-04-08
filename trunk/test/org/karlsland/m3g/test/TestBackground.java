package org.karlsland.m3g.test;

import static org.junit.Assert.assertEquals;

import org.junit.Test;
import org.karlsland.m3g.AnimationTrack;
import org.karlsland.m3g.Background;
import org.karlsland.m3g.Image2D;
import org.karlsland.m3g.KeyframeSequence;
import org.karlsland.m3g.Object3D;

public class TestBackground {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
	@Test
	public void testInitialize() {
		Background bg = new Background();

		assertEquals (true,              bg.isColorClearEnabled());
		assertEquals (true,              bg.isDepthClearEnabled());
		assertEquals (0x00000000,        bg.getColor());
		assertEquals (null,              bg.getImage());
		assertEquals (Background.BORDER, bg.getImageModeX());
		assertEquals (Background.BORDER, bg.getImageModeY());
	}

	@Test
	public void testFinalize() {
		@SuppressWarnings("unused")
		Background bg = new Background();
		bg = null;
		System.gc();
	}


	@Test
	public void testSetColor() {
		Background bg = new Background();

		bg.setColor(0x12345678);
		assertEquals (0x12345678,        bg.getColor());
	}

	@Test
	public void testSetDepthClearEnable() {
		Background bg = new Background();

		bg.setDepthClearEnable(true);
		assertEquals(true, bg.isDepthClearEnabled());
	}

	@Test
	public void testSetColorClearEnable() {
		Background bg = new Background();

		bg.setColorClearEnable(true);
		assertEquals(true, bg.isColorClearEnabled());
	}

	@Test
	public void testSetCrop() {
		Background bg = new Background();
		bg.setCrop(1, 2, 3, 4);
		
		assertEquals (1,  bg.getCropX());
		assertEquals (2,  bg.getCropY());
		assertEquals (3,  bg.getCropWidth());
		assertEquals (4,  bg.getCropHeight());
	}

	@Test
	public void testSetImage() {
		Image2D    img = new Image2D (Image2D.RGB, 16, 16);
		Background bg  = new Background();
		
		bg.setImage(img);
		assertEquals(img, bg.getImage());
	}

	@Test
	public void testSetImageMode() {
		Background bg  = new Background();
		bg.setImageMode(Background.REPEAT, Background.REPEAT);
		
		assertEquals (Background.REPEAT, bg.getImageModeX());
		assertEquals (Background.REPEAT, bg.getImageModeY());
	}
	
	@Test
	public void testToString() {
		Background bg = new Background();
		bg.toString();
	}

	@Test
	public void testAddAnimationTrack () {
		KeyframeSequence keySeq1 = new KeyframeSequence(2, 1, KeyframeSequence.LINEAR);
		AnimationTrack   anim1   = new AnimationTrack(keySeq1, AnimationTrack.ALPHA);
		KeyframeSequence keySeq2 = new KeyframeSequence(2, 3, KeyframeSequence.LINEAR);
		AnimationTrack   anim2   = new AnimationTrack(keySeq2, AnimationTrack.COLOR);
		KeyframeSequence keySeq3 = new KeyframeSequence(2, 4, KeyframeSequence.LINEAR);
		AnimationTrack   anim3   = new AnimationTrack(keySeq3, AnimationTrack.CROP);
		Background bg = new Background();
	
		bg.addAnimationTrack(anim1);
		bg.addAnimationTrack(anim2);
		bg.addAnimationTrack(anim3);
		
		assertEquals(3    , bg.getAnimationTrackCount());
		assertEquals(anim1, bg.getAnimationTrack(0));
		assertEquals(anim2, bg.getAnimationTrack(1));
		assertEquals(anim3, bg.getAnimationTrack(2));
	}
	
	@Test
	public void testGetReferences() {
		Image2D    img = new Image2D (Image2D.RGB, 16, 16);
		Background bg  = new Background();
		bg.setImage(img);

		Object3D[]          references = {null};  
	 	int n = bg.getReferences(references);

	 	assertEquals(1  , n);
	 	assertEquals(img, references[0]);
	}

}
