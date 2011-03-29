package org.karlsland.m3g.test;

import static org.junit.Assert.*;
import org.junit.Test;
import org.karlsland.m3g.Node;

public class TestNode {

	@Test
	public void testInitialize() {
		ConcreteNode node = new ConcreteNode();
		node.initialize();
		
        assertEquals (1.f      , node.getAlphaFactor(), 0.0001f);
        assertEquals (null     , node.getParent());
        assertEquals (-1       , node.getScope());
        assertEquals (true     , node.isPickingEnabled());
        assertEquals (true     , node.isRenderingEnabled());
        assertEquals (null     , node.getAlignmentReference (Node.Z_AXIS));
        assertEquals (Node.NONE, node.getAlignmentTarget    (Node.Z_AXIS));
        assertEquals (null     , node.getAlignmentReference (Node.Y_AXIS));
        assertEquals (Node.NONE, node.getAlignmentTarget    (Node.Y_AXIS));
	}

	
	@Test
	public void testFinalize() {
		ConcreteNode node = new ConcreteNode();
		node.initialize();
		node = null;
		System.gc();
	}


	@Test
	public void testSetAlignment() {
		ConcreteNode node = new ConcreteNode();
		ConcreteNode zRef = new ConcreteNode();
		ConcreteNode yRef = new ConcreteNode();
		node.initialize();
		zRef.initialize();
		yRef.initialize();
		
		node.setAlignment(zRef, Node.ORIGIN, yRef, Node.ORIGIN);
		
		assertEquals(zRef       , node.getAlignmentReference(Node.Z_AXIS));
		assertEquals(Node.ORIGIN, node.getAlignmentTarget   (Node.Z_AXIS));
		assertEquals(yRef       , node.getAlignmentReference(Node.Y_AXIS));
		assertEquals(Node.ORIGIN, node.getAlignmentTarget   (Node.Y_AXIS));
	}

	@Test
	public void testSetAlphaFactor() {
		ConcreteNode node = new ConcreteNode();
		node.initialize();

		node.setAlphaFactor(0.1f);
		assertEquals(0.1f, node.getAlphaFactor(), 0.0001f);
	}

	@Test
	public void testSetPickingEnable() {
		ConcreteNode node = new ConcreteNode();
		node.initialize();
		
		node.setPickingEnable(false);
		assertEquals(false, node.isPickingEnabled());
	}

	@Test
	public void testSetRenderingEnable() {
		ConcreteNode node = new ConcreteNode();
		node.initialize();
		
		node.setRenderingEnable(false);
		assertEquals(false, node.isRenderingEnabled());
	}

	@Test
	public void testSetScope() {
		ConcreteNode node = new ConcreteNode();
		node.initialize();
		
		node.setScope(0x12345678);
		assertEquals(0x12345678, node.getScope());
	}

	@Test
	public void testSetParent() {
		ConcreteNode node1 = new ConcreteNode();
		ConcreteNode node2 = new ConcreteNode();
		node1.initialize();
		node2.initialize();
		
		node1.setParent(node2);
		assertEquals(node1, node2.getParent());
	}
	
	@Test
	public void testToString() {
		ConcreteNode node = new ConcreteNode();
		node.initialize();

		node.toString();
	}


}
