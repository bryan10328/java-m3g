package org.karlsland.m3g.test;

import static org.junit.Assert.*;

import org.junit.Test;
import org.karlsland.m3g.KeyframeSequence;

public class TestKeyframeSequence {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
	@Test
	public void testInitialize() {
        KeyframeSequence keySeq = new KeyframeSequence (4, 3, KeyframeSequence.SPLINE);
        
        assertEquals (4, keySeq.getKeyframeCount());
        assertEquals (3, keySeq.getComponentCount());
        assertEquals (KeyframeSequence.SPLINE, keySeq.getInterpolationType());
	}

	@Test
	public void testFinalize() {
        @SuppressWarnings("unused")
		KeyframeSequence keySeq = new KeyframeSequence (4, 3, KeyframeSequence.SPLINE);
        keySeq = null;
        System.gc();
	}


	@Test
	public void testSetDuration() {
		KeyframeSequence keySeq = new KeyframeSequence (4, 3, KeyframeSequence.SPLINE);
		keySeq.setDuration(100);

        assertEquals (100, keySeq.getDuration());
	}

	@Test
	public void testSetKeyframe() {
		KeyframeSequence keySeq = new KeyframeSequence (4, 3, KeyframeSequence.SPLINE);
		keySeq.setKeyframe(0, 100, new float[]{1,2,3});
		keySeq.setKeyframe(1, 200, new float[]{4,5,6});
		float[] value = new float[3];
		
		assertEquals(100, keySeq.getKeyframe(0, value));
		assertEquals(1, value[0], 0.00001f);
		assertEquals(2, value[1], 0.00001f);
		assertEquals(3, value[2], 0.00001f);
		assertEquals(200, keySeq.getKeyframe(1, value));
		assertEquals(4, value[0], 0.00001f);
		assertEquals(5, value[1], 0.00001f);
		assertEquals(6, value[2], 0.00001f);
	}

	@Test
	public void testSetRepeatMode() {
		KeyframeSequence keySeq = new KeyframeSequence (4, 3, KeyframeSequence.SPLINE);
        keySeq.setRepeatMode (KeyframeSequence.LOOP);

        assertEquals (KeyframeSequence.LOOP, keySeq.getRepeatMode());
	}

	@Test
	public void testSetValidRange() {
		KeyframeSequence keySeq = new KeyframeSequence (4, 3, KeyframeSequence.SPLINE);
        keySeq.setValidRange (1, 3);
      
        assertEquals (1, keySeq.getValidRangeFirst());
        assertEquals (3, keySeq.getValidRangeLast());
	}

	@Test
	public void testToString() {
		KeyframeSequence keySeq = new KeyframeSequence (4, 3, KeyframeSequence.SPLINE);
		keySeq.toString();
	}


}
