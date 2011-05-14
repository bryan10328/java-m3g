package org.karlsland.m3g.test;

import static org.junit.Assert.assertEquals;

import org.junit.Test;
import org.karlsland.m3g.AnimationController;

public class TestAnimationController {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
    @Test
	public void testInitialize() {
        AnimationController ctrl = new AnimationController ();

        assertEquals (0,   ctrl.getActiveIntervalStart());
        assertEquals (0,   ctrl.getActiveIntervalEnd());
        assertEquals (1.f, ctrl.getWeight(), 0.00001f);
        assertEquals (1.f, ctrl.getSpeed(), 0.00001f);
        assertEquals (0,   ctrl.getRefWorldTime());
        assertEquals (0.f, ctrl.getPosition(0), 0.00001f);
     }

	@Test
	public void testFinalize() {
        @SuppressWarnings("unused")
		AnimationController ctrl = new AnimationController ();
        ctrl = null;
        System.gc();
	}


	@Test
	public void testSetPosition() {
		 AnimationController ctrl = new AnimationController ();
        ctrl.setPosition (2, 1);

        assertEquals (2.f, ctrl.getPosition(1), 0.00001f);
        assertEquals (3.f, ctrl.getPosition(2), 0.00001f);
	}
	
	@Test
	public void testSetSpeed() {
        AnimationController ctrl = new AnimationController ();
        ctrl.setSpeed    (4, 0);

        assertEquals (4.f, ctrl.getSpeed(), 0.00001f);
	}

	@Test
	public void testSetWeight() {
        AnimationController ctrl = new AnimationController ();
        ctrl.setWeight   (3);

        assertEquals (3.f, ctrl.getWeight(), 0.00001f);
	}
	
	@Test
	public void testSetActiveInterval() {
        AnimationController ctrl = new AnimationController ();
        ctrl.setActiveInterval(10, 20);

        assertEquals (10,   ctrl.getActiveIntervalStart());
        assertEquals (20,   ctrl.getActiveIntervalEnd());
	}
	
	@Test
	public void testToString() {
        AnimationController ctrl = new AnimationController ();
        ctrl.toString();
		
	}


}
