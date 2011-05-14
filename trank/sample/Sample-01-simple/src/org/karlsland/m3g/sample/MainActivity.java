package org.karlsland.m3g.sample;

import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

import javax.media.opengl.GLCanvas;
import javax.swing.JFrame;

public class MainActivity {
	static   JFrame     frame;
	static   GLCanvas   canvas;
	static   M3GRenderer renderer;
	
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		      frame    = new JFrame ();
		      canvas   = new GLCanvas ();
		      renderer = new M3GRenderer ();
		      canvas.addGLEventListener(renderer);
		      frame.add(canvas);
		      frame.setSize(300, 300);
		      frame.addWindowListener(new WindowAdapter() {
		              public void windowClosing(WindowEvent e) {
		                  System.exit(0);
		              }
		          });
		     frame.addKeyListener(new KeyAdapter() {
		              public void keyPressed(KeyEvent e) {
		                  renderer.keyboard (e.getKeyChar());
		              }
		          });
		      frame.setVisible(true);

	}

}
