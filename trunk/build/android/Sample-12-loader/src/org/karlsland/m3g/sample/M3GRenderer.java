package org.karlsland.m3g.sample;

import java.io.IOException;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

import org.karlsland.m3g.Background;
import org.karlsland.m3g.Camera;
import org.karlsland.m3g.Graphics3D;
import org.karlsland.m3g.Loader;
import org.karlsland.m3g.Object3D;
import org.karlsland.m3g.World;

import android.opengl.GLSurfaceView.Renderer;
import android.util.Log;

public class M3GRenderer implements Renderer {
	  private Graphics3D     g3d;
	  private World          wld;
	  private int          worldTime;
	    
	@Override
	public void onDrawFrame(GL10 gl) {
		worldTime += 10;
		wld.animate(worldTime);
        g3d.render(wld);
        Log.i("Seplma-12-loader", "time="+worldTime);
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
	        worldTime = 0;
	        
	        Log.i("AAA", "1");
	        Object3D[] objs = null;
	        try {
	            //objs = Loader.load ("/sdcard/sdcard-disk0/simple.m3g");
	            //objs = Loader.load ("/sdcard/sdcard-disk0/mahosyojo.m3g");
	            objs = Loader.load ("/sdcard/sdcard-disk0/mahosyojo-with-sexy-walking.m3g");
	        } catch (IOException e) {
	            System.out.println ("Can't load file.");
	            System.exit (0);
	        }
	        Log.i("AAA", "2");

	        
	        for (int i = 0; i < objs.length; i++) {
	            if (objs[i] instanceof World) {
	                wld = (World)objs[i];
	                System.out.println ("World = " + wld);
	                break;
	            }
	        }

	        Camera cam = wld.getActiveCamera ();
	        if (cam == null) {
	            cam = new Camera ();
	            cam.lookAt (0,0,10,
	                        0,0,0,
	                        0,1,0);
	            wld.addChild (cam);
	            wld.setActiveCamera (cam);
	        }

	        Background bg = wld.getBackground ();
	        if (bg == null) {
	            bg = new Background ();
	            wld.setBackground (bg);
	        }
	        bg.setColor (0xff3f7fff);

	}

}



