package org.karlsland.m3g.test;

import static org.junit.Assert.*;
import org.junit.Test;
import org.karlsland.m3g.test.ConcreteObject3D;


public class TestObject3D {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
	@Test
	public void testFinalize() {
		fail("まだ実装されていません");
	}

	@Test
	public void testObject3D() {
		ConcreteObject3D obj = new ConcreteObject3D ();
		obj.initialize();
		assertEquals(0, obj.getUserID());
	}

	@Test
	public void testAddAnimationTrack() {
		fail("まだ実装されていません");
	}

	@Test
	public void testAnimate() {
		fail("まだ実装されていません");
	}

	@Test
	public void testDuplicate() {
		fail("まだ実装されていません");
	}

	@Test
	public void testFind() {
		fail("まだ実装されていません");
	}

	@Test
	public void testGetAnimationTrack() {
		fail("まだ実装されていません");
	}

	@Test
	public void testGetAnimationTrackCount() {
		fail("まだ実装されていません");
	}

	@Test
	public void testGetReferences() {
		fail("まだ実装されていません");
	}

	@Test
	public void testGetUserID() {
		fail("まだ実装されていません");
	}

	@Test
	public void testGetUserObject() {
		fail("まだ実装されていません");
	}

	@Test
	public void testRemoveAnimationTrack() {
		fail("まだ実装されていません");
	}

	@Test
	public void testSetUserID() {
		ConcreteObject3D obj = new ConcreteObject3D ();
		obj.initialize();
		obj.setUserID(100);
		assertEquals(100, obj.getUserID());
	}

	@Test
	public void testSetUserObject() {
		fail("まだ実装されていません");
	}

	@Test
	public void testToString() {
		fail("まだ実装されていません");
	}

}
