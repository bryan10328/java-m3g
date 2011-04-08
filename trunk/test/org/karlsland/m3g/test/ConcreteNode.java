package org.karlsland.m3g.test;

import org.karlsland.m3g.Node;

public class ConcreteNode extends Node {
	public ConcreteNode() {
	}

	public void initialize () {
		super.initialize();
	}
	
	@Override
	protected void finalize () {
		super.finalize();
	}
}
