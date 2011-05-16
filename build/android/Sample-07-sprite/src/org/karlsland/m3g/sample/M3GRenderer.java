package org.karlsland.m3g.sample;

import java.io.IOException;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

import org.karlsland.m3g.Appearance;
import org.karlsland.m3g.Background;
import org.karlsland.m3g.Camera;
import org.karlsland.m3g.CompositingMode;
import org.karlsland.m3g.Graphics3D;
import org.karlsland.m3g.Image2D;
import org.karlsland.m3g.Loader;
import org.karlsland.m3g.Sprite3D;
import org.karlsland.m3g.World;

import android.opengl.GLSurfaceView.Renderer;

public class M3GRenderer implements Renderer {
    private Graphics3D     g3d;
    private World          wld;
    
	@Override
	public void onDrawFrame(GL10 gl) {
        g3d.render (wld);
	}

	@Override
	public void onSurfaceChanged(GL10 gl, int width, int height) {
	       g3d.setViewport (0, 0, width, height);
	        Camera cam = wld.getActiveCamera ();
	        cam.setPerspective (45, width/(float)height, 0.1f, 100.f);
	}

	@Override
	public void onSurfaceCreated(GL10 gl, EGLConfig config) {
		    g3d    = Graphics3D.getInstance ();
	        wld    = new World ();
	       
	        Camera cam = new Camera ();
	        cam.lookAt (0,0,5,
	                     0,0,0,
	                     0,1,0);
	        wld.addChild (cam);
	        wld.setActiveCamera (cam);

	        Background bg = new Background ();
	        bg.setColor (0xff1f1f7f);
	        wld.setBackground (bg);

	        Image2D img = null;
	        try {
	        	img     = (Image2D)Loader.load ("/sdcard/sdcard-disk0/moe-small.png")[0];
	        } catch (IOException e) {
	        	e.printStackTrace();
	        }
	        
	        int      width  = img.getWidth ();
	        int      height = img.getHeight ();
	    
	        CompositingMode cmp = new CompositingMode ();
	        cmp.setDepthTestEnable (true);

	        Appearance app1 = new Appearance ();
	        app1.setCompositingMode (cmp);

	        Sprite3D   spr1 = new Sprite3D (true, img, app1);
	        spr1.translate (1,0,0);
	        spr1.setCrop (0, 0, -width, height);
	        wld.addChild (spr1);

	        Appearance app2 = new Appearance ();
	        app2.setCompositingMode (cmp);

	        Sprite3D   spr2 = new Sprite3D (false, img, app2);
	        spr2.translate (-1,0,0);
	        spr2.setCrop (0, 0, width, height);
	        wld.addChild (spr2);     

	}

}
