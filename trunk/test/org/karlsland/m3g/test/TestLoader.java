package org.karlsland.m3g.test;

import static org.junit.Assert.*;

import java.io.FileInputStream;
import java.io.IOException;

import org.junit.Test;
import org.karlsland.m3g.Image2D;
import org.karlsland.m3g.Loader;
import org.karlsland.m3g.Object3D;

public class TestLoader {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
	@Test
	public void testLoadPng() {
        Object3D[] objs;
		try {
			objs = Loader.load ("res/simple.png");
			assertEquals(1, objs.length);
			assertEquals(Image2D.class, objs[0].getClass());
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	@Test
	public void testLoadJpg() {
        Object3D[] objs;
		try {
			objs = Loader.load ("res/simple.jpg");
			assertEquals(1, objs.length);
			assertEquals(Image2D.class, objs[0].getClass());
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	
	@Test
	public void testLoadM3G1() {
        Object3D[] objs;
		try {
			objs = Loader.load ("res/simple.m3g");
			assertEquals(12, objs.length);
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	@Test
	public void testLoadM3G2() {
        Object3D[] objs;
		try {
			FileInputStream fin  = new FileInputStream ("res/simple.m3g");
			int size = 0;
			byte[] data = null;
			size = fin.available ();
			data = new byte[size];
			fin.read (data);
			fin.close ();
			objs = Loader.load (data, 0);
			assertEquals(12, objs.length);
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	

}
