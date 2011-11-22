package org.karlsland.m3g.sample;

import java.io.IOException;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

import org.karlsland.m3g.Appearance;
import org.karlsland.m3g.Background;
import org.karlsland.m3g.Camera;
import org.karlsland.m3g.Graphics3D;
import org.karlsland.m3g.Image2D;
import org.karlsland.m3g.Loader;
import org.karlsland.m3g.Material;
import org.karlsland.m3g.Mesh;
import org.karlsland.m3g.TriangleStripArray;
import org.karlsland.m3g.VertexArray;
import org.karlsland.m3g.VertexBuffer;
import org.karlsland.m3g.World;

import android.opengl.GLSurfaceView.Renderer;

public class M3GRenderer implements Renderer {
	private Graphics3D g3d;
	private World      wld;
	private int        cropX;
	

	public void onDrawFrame(GL10 gl) {
		cropX = cropX + 5;
    	Background bg = wld.getBackground();
    	bg.setCrop(cropX, 0, 512, 512);
       g3d.render (wld);
	}


	public void onSurfaceChanged(GL10 gl, int width, int height) {
	      g3d.setViewport (0, 0, width, height);
	        Camera cam = wld.getActiveCamera ();
	        cam.setPerspective (45, width/(float)height, 0.1f, 100.f);
	}


	public void onSurfaceCreated(GL10 gl, EGLConfig config) {
        g3d = Graphics3D.getInstance();
        wld = new World();
        cropX = 0;

        VertexArray positions         = new VertexArray (4, 3, 2);
        short        positions_value[] = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
        positions.set (0, 4, positions_value);

        float scale   = 1;
        float[] bias = {0,0,0};
        VertexBuffer vertices = new VertexBuffer();
        vertices.setPositions (positions, scale, bias);
      
        int[] strips = {4};
        int[] indices = {0,1,2,3};

        TriangleStripArray tris = new TriangleStripArray (indices, strips);

        Material mat = new Material();
        mat.setColor (Material.DIFFUSE, 0xff7f7fff);

        Appearance app = new Appearance();
        app.setMaterial (mat);

        Mesh mesh = new Mesh (vertices, tris, app);
      
        Camera cam = new Camera();
        cam.translate (0,0,20);
        wld.addChild (cam);
        wld.setActiveCamera (cam);
        wld.addChild (mesh);

        Image2D    img = null;
        try {
        	img = (Image2D)(Loader.load("/sdcard/sdcard-disk0/music-is.png")[0]);
        } catch (IOException e) {
        	e.printStackTrace();
        	System.exit(0);
        }
        
        Background bg  = new Background();
        bg.setColor (0xff3f8f1f);
        bg.setImage (img);
        bg.setCrop  (0, 0, 512, 512);
        bg.setImageMode (Background.REPEAT, Background.BORDER);
        wld.setBackground (bg);
	}

}
