package org.karlsland.m3g.test;

import static org.junit.Assert.*;

import org.junit.Test;
import org.karlsland.m3g.Image2D;

public class TestImage2D {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
	@Test
	public void testImage2DInitialize1() {
        Image2D img = new Image2D (Image2D.RGBA, 48, 32);
        assertEquals (Image2D.RGBA, img.getFormat());
        assertEquals (48          , img.getWidth());
        assertEquals (32          , img.getHeight());
        assertEquals (true        , img.isMutable());
	}

	@Test
	public void testImage2DInitialize2() {
        byte[]  pixels = new byte[16*96*3];
        Image2D img    = new Image2D (Image2D.RGB, 16, 96, pixels);
        assertEquals (Image2D.RGB , img.getFormat());
        assertEquals (16          , img.getWidth());
        assertEquals (96          , img.getHeight());
        assertEquals (false       , img.isMutable());
	}

	@Test
	public void testImage2DInitialize3() {
        byte[]  pixels  = new byte[4*4*1]; // パレットのインデックス
        byte[]  palette = new byte[256*3]; // RGB,RGB,RGB,...
        pixels = new byte[]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
        Image2D img     = new Image2D (Image2D.RGB, 4, 4, pixels, palette);
        assertEquals (Image2D.RGB , img.getFormat());
        assertEquals (4           , img.getWidth());
        assertEquals (4           , img.getHeight());
        assertEquals (false       , img.isMutable());
	}

	@Test
	public void testFinalize() {
        @SuppressWarnings("unused")
		Image2D img = new Image2D (Image2D.RGBA, 48, 32);
        img = null;
        System.gc();
	}

	@Test
	public void testSet() {
        byte[] pixels = new byte[16*16*1];
        for (int y = 0; y < 16; y++) {
            for (int x = 0; x < 16; x++) {
                pixels[y*16+x] = (byte)((x+y)*8);
            }
        }
        Image2D img = new Image2D (Image2D.LUMINANCE, 16, 16);
        
        img.set (0, 0, 16, 16, pixels);
        img.writePng ("simple-image.png");
        
        // 目で見て確認.
	}

	@Test
	public void testToString() {
        Image2D img = new Image2D (Image2D.LUMINANCE, 16, 16);
        img.toString();
	}


}
