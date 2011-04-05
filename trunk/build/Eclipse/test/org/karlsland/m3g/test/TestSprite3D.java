package org.karlsland.m3g.test;

import static org.junit.Assert.*;

import org.junit.Test;
import org.karlsland.m3g.Appearance;
import org.karlsland.m3g.Image2D;
import org.karlsland.m3g.Sprite3D;

public class TestSprite3D {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
	@Test
	public void testInitialize() {
        Image2D    img = new Image2D  (Image2D.RGB, 16, 32);
        Appearance app = new Appearance ();
        Sprite3D   spr = new Sprite3D (true, img, app);
        
        assertEquals (true, spr.isScaled());
        assertEquals (img , spr.getImage());
        assertEquals (app , spr.getAppearance());
        assertEquals (0   , spr.getCropX());
        assertEquals (0   , spr.getCropY());
        assertEquals (16  , spr.getCropWidth());
        assertEquals (32  , spr.getCropHeight());
	}

	@Test
	public void testFinalize() {
        Image2D    img = new Image2D  (Image2D.RGB, 16, 32);
        Appearance app = new Appearance ();
        @SuppressWarnings("unused")
		Sprite3D   spr = new Sprite3D (true, img, app);
        spr = null;
        System.gc();
	}

	@Test
	public void testSetAppearance() {
        Image2D    img  = new Image2D  (Image2D.RGB, 16, 32);
        Appearance app1 = new Appearance ();
        Appearance app2 = new Appearance ();
        Sprite3D   spr  = new Sprite3D (true, img, app1);

        spr.setAppearance (app2);
        assertEquals (app2, spr.getAppearance());
        
        spr.setAppearance (null);
        assertEquals (null, spr.getAppearance());
	}

	@Test
	public void testSetCrop() {
        Image2D    img = new Image2D  (Image2D.RGB, 16, 32);
        Appearance app = new Appearance ();
        Sprite3D   spr = new Sprite3D (true, img, app);

        spr.setCrop  (1,2,3,4);
        assertEquals (1.f, spr.getCropX()     , 0.0001f);
        assertEquals (2.f, spr.getCropY()     , 0.0001f);
        assertEquals (3.f, spr.getCropWidth() , 0.0001f);
        assertEquals (4.f, spr.getCropHeight(), 0.0001f);
	}

	@Test
	public void testSetImage() {
        Image2D    img1 = new Image2D  (Image2D.RGB, 16, 32);
        Image2D    img2 = new Image2D  (Image2D.RGB, 16, 32);
        Appearance app  = new Appearance ();
        Sprite3D   spr  = new Sprite3D (true, img1, app);

        spr.setImage(img2);
        assertEquals (img2, spr.getImage());
        
        spr.setImage (null);
        assertEquals (null, spr.getImage());
	}


	@Test
	public void testToString() {
        Image2D    img = new Image2D  (Image2D.RGB, 16, 32);
        Appearance app = new Appearance ();
		Sprite3D   spr = new Sprite3D (true, img, app);
       spr.toString();
	}



}
