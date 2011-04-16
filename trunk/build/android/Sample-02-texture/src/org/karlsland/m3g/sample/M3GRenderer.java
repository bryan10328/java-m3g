package org.karlsland.m3g.sample;

import java.io.IOException;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

import org.karlsland.m3g.Appearance;
import org.karlsland.m3g.Camera;
import org.karlsland.m3g.Graphics3D;
import org.karlsland.m3g.Image2D;
import org.karlsland.m3g.Loader;
import org.karlsland.m3g.Mesh;
import org.karlsland.m3g.Texture2D;
import org.karlsland.m3g.TriangleStripArray;
import org.karlsland.m3g.VertexArray;
import org.karlsland.m3g.VertexBuffer;
import org.karlsland.m3g.World;

import android.opengl.GLSurfaceView.Renderer;
import android.util.Log;

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
		// TODO Auto-generated method stub
	     g3d = Graphics3D.getInstance ();
	        wld = new World ();
	        
	        Camera cam = new Camera ();
	        cam.translate (0,0,5);
	        wld.addChild (cam);
	        wld.setActiveCamera (cam);

	        VertexArray positions = new VertexArray (4, 3, 2);
	        short[]  positionValues = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
	        positions.set (0, 4, positionValues);

	        VertexArray texCoords = new VertexArray (4, 2, 2);
	        short texCoordValues[] = {1,0, 1,1, 0,0, 0,1};
	        texCoords.set (0, 4, texCoordValues);

	        float scale = 1;
	        float[] bias = {0,0,0};
	        VertexBuffer vertices = new VertexBuffer ();
	        vertices.setPositions (positions, scale, bias);
	        vertices.setTexCoords (0, texCoords, scale, bias);
	        vertices.setTexCoords (1, texCoords, scale, bias);
	        
	        int[] strips  = {3,3};
	        int[] indices = {0,1,2, 2,1,3};

	        Log.i("Sample-02-texture", "1");
	        
	        TriangleStripArray tris = new TriangleStripArray (indices, strips);

	        Log.i("Sample-02-texture", "2");
	        Image2D img0 = null;
	        try {
	        	img0 = (Image2D)(Loader.load ("/sdcard/sdcard-disk0/yumemi.png")[0]);
	        } catch (IOException e) {
	        	Log.i("AAA", e.getMessage());
	        	e.printStackTrace();
	        }
	        Log.i("Sample-02-texture", "3");
    		Texture2D tex0 = new Texture2D (img0);

	        Image2D img1 = null;
	        try {
	        	img1 = (Image2D)(Loader.load ("/sdcard/sdcard-disk0/onnanoko.png")[0]);
	        } catch (IOException e) {
	        	e.printStackTrace();
	        }
	        
	        Texture2D tex1 = new Texture2D (img1);
	        tex1.setBlending (Texture2D.FUNC_DECAL);

	        Appearance app = new Appearance ();
	        app.setTexture (0, tex0);
	        app.setTexture (1, tex1);

	        Mesh mesh = new Mesh (vertices, tris, app);
	        mesh.translate (0,0,2);
	        wld.addChild (mesh);

	}

}
