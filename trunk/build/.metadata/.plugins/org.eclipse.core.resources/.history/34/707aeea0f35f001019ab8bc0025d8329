package org.karlsland.m3g.test;
import static org.junit.Assert.assertEquals;

import org.junit.Test;
import org.karlsland.m3g.Group;


public class TestGroup {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
	@Test
	public void testInitialize() {
	     Group grp = new Group ();
	     assertEquals (0, grp.getChildCount());
	}

	@Test
	public void testFinalize() {
	     @SuppressWarnings("unused")
	     Group grp = new Group ();
	     grp = null;
	     System.gc();
	}

	@Test
	public void testAddChild() {
		Group grp   = new Group();
		Group node1 = new Group();
		Group node2 = new Group();
		grp.addChild(node1);
		grp.addChild(node2);
		
		assertEquals(2    , grp.getChildCount());
		assertEquals(node1, grp.getChild(0));
		assertEquals(node2, grp.getChild(1));
		assertEquals(grp  , node1.getParent());
		assertEquals(grp  , node2.getParent());
	}

	@Test
	public void testRemoveChild() {
		Group grp   = new Group();
		Group node1 = new Group();
		Group node2 = new Group();
		grp.addChild(node1);
		grp.addChild(node2);
		grp.removeChild(node1);
		
		assertEquals(1, grp.getChildCount());
		assertEquals(node2, grp.getChild(0));
	}

	@Test
	public void testToString() {
		Group grp   = new Group();
		grp.toString();
	}
	

}
