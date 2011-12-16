package org.karlsland.m3g.sample;

import java.io.IOException;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

import org.karlsland.m3g.Background;
import org.karlsland.m3g.Camera;
import org.karlsland.m3g.Graphics3D;
import org.karlsland.m3g.Group;
import org.karlsland.m3g.Light;
import org.karlsland.m3g.Loader;
import org.karlsland.m3g.Object3D;
import org.karlsland.m3g.World;

import android.opengl.GLSurfaceView.Renderer;
import android.util.Log;

public class M3GRenderer implements Renderer {
	  private Graphics3D     g3d;
	  private World          wld;
	  private int            worldTime;
	    

	public void onDrawFrame(GL10 gl) {
		worldTime = (worldTime + 80) % 40000;
		wld.animate(worldTime);
        g3d.render(wld);
        Log.i("Seplma-12-loader", "time="+worldTime);
    	
	}

	

	public void onSurfaceChanged(GL10 gl, int width, int height) {
        g3d.setViewport (0, 0, width, height);
        Camera cam = wld.getActiveCamera ();
        cam.setPerspective (45, width/(float)height, 0.1f, 100.f);
	}


	public void onSurfaceCreated(GL10 gl, EGLConfig config) {
	        g3d    = Graphics3D.getInstance ();
	        wld    = new World ();
	        worldTime = 0;
	        
	        Object3D[] objs = null;
	        try {
	            //objs = Loader.load ("/sdcard/sdcard-disk0/simple.m3g");
	            //objs = Loader.load ("/sdcard/sdcard-disk0/mahosyojo.m3g");
	            objs = Loader.load ("/sdcard/sdcard-disk0/mahosyojo-with-sexy-walking.m3g");
	        } catch (IOException e) {
	            System.out.println ("Can't load file.");
	            System.exit (0);
	        }
	        
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
	        cam.lookAt(-10, 10, 10, -3, 0, 0, 0, 1, 0);
	        cam.setTranslation(0, 0, 0);
	        cam.setOrientation(0, 0, 0, 0);
	        cam.setScale(1, 1, 1);

	        Background bg = wld.getBackground ();
	        if (bg == null) {
	            bg = new Background ();
	            wld.setBackground (bg);
	        }
	        bg.setColor (0xff3f7fff);

	        for (int i = 0; i < objs.length; i++) {
	            if (objs[i] instanceof Light) {
	                Light lgh = (Light)objs[i];
	                Group grp = (Group)lgh.getParent();
	                	grp.removeChild(lgh);
	            }
	        }
	}

	
}



