package org.karlsland.m3g.test;

import static org.junit.Assert.assertArrayEquals;
import static org.junit.Assert.assertEquals;

import org.junit.Test;
import org.karlsland.m3g.AnimationTrack;
import org.karlsland.m3g.Camera;
import org.karlsland.m3g.KeyframeSequence;
import org.karlsland.m3g.Transform;

public class TestCamera {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
	@Test
	public void testInitialize() {
        Camera cam = new Camera ();
        
        float[] params = new float[4];
        assertEquals (Camera.GENERIC, cam.getProjection(params));
        
        Transform trans = new Transform ();
        assertEquals (Camera.GENERIC, cam.getProjection(trans));

        float[] matrix = new float[16];
        float[] expected = {1,0,0,0,
        						0,1,0,0,
        						0,0,1,0,
        						0,0,0,1};
        trans.get (matrix);
        assertArrayEquals(expected, matrix, 0.0001f);      
	}

	@Test
	public void testFinalize() {
        @SuppressWarnings("unused")
        Camera cam = new Camera ();
        cam = null;
        System.gc();
	}


	@Test
	public void testSetGeneric() {
        Camera    cam      = new Camera ();
        Transform trans    = new Transform ();
        float[]   expected = {1,2,3,4, 5,6,7,8, 9,10,11,12, 13,14,15,16};
        trans.set (expected);
        cam.setGeneric (trans);

        trans = new Transform ();
        cam.getProjection (trans);
        
        float[] matrix = new float[16];
        trans.get (matrix);

        assertArrayEquals (expected, matrix, 0.00001f);
	}

	@Test
	public void testSetParallel() {
        Camera    cam      = new Camera ();
        cam.setParallel (10, 1.3333f, 0.1f, 100);

        float[] params = new float[4];
        cam.getProjection (params);

        assertEquals (10.f,    params[0], 0.00001f);
        assertEquals (1.3333f, params[1], 0.00001f);
        assertEquals (0.1f,    params[2], 0.00001f);
        assertEquals (100.f,   params[3], 0.00001f);
	}

	@Test
	public void testSetPerspective() {
        Camera    cam      = new Camera ();
        cam.setPerspective (45, 1.3333f, 0.1f, 100);

        float[] params = new float[4];
        cam.getProjection (params);

        assertEquals (45.f,    params[0], 0.00001f);
        assertEquals (1.3333f, params[1], 0.00001f);
        assertEquals (0.1f,    params[2], 0.00001f);
        assertEquals (100.f,   params[3], 0.00001f);
	}

	@Test
	public void testLookAt() {
		Camera cam = new Camera();
		cam.lookAt (1,2,3,
						-3,-3,-1,
						3,3,1);
	    Transform tra = new Transform();
	    cam.getTransform (tra);
	    
	    float[] expected = {0.63375f, 0.563612f, 0.529813f, 1.f,
	    						-0.724286f, 0.191868f, 0.662266f, 2.f,
	    						0.271607f, -0.803447f, 0.529813f, 3.f,
	    						0.f, 0.f, 0.f, 1.f};
	    
	    float[] matrix = new float[16];
	    tra.get (matrix);
	    
	    // 適当に呼び出した時のlookAt関数の値を再度チェックしただけなので
	    // 信頼性は低い
	    assertArrayEquals(expected, matrix, 0.0001f);
	}

	@Test
	public void testToString() {
        Camera    cam      = new Camera ();
        cam.toString();
	}

	@Test
	public void testAddAnimationTrack () {
		KeyframeSequence keySeq1 = new KeyframeSequence(2, 1, KeyframeSequence.LINEAR);
		AnimationTrack   anim1   = new AnimationTrack(keySeq1, AnimationTrack.FAR_DISTANCE);
		KeyframeSequence keySeq2 = new KeyframeSequence(2, 1, KeyframeSequence.LINEAR);
		AnimationTrack   anim2   = new AnimationTrack(keySeq2, AnimationTrack.FIELD_OF_VIEW);
		KeyframeSequence keySeq3 = new KeyframeSequence(2, 1, KeyframeSequence.LINEAR);
		AnimationTrack   anim3   = new AnimationTrack(keySeq3, AnimationTrack.NEAR_DISTANCE);
		Camera cam = new Camera();
	
		cam.addAnimationTrack(anim1);
		cam.addAnimationTrack(anim2);
		cam.addAnimationTrack(anim3);
		
		assertEquals(3    , cam.getAnimationTrackCount());
		assertEquals(anim1, cam.getAnimationTrack(0));
		assertEquals(anim2, cam.getAnimationTrack(1));
		assertEquals(anim3, cam.getAnimationTrack(2));
	}


}
