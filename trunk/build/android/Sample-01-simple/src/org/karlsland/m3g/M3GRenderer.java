package org.karlsland.m3g;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

import android.opengl.GLSurfaceView.Renderer;
import android.util.Log;

public class M3GRenderer implements Renderer {

    
	private World      wld;
	private Graphics3D g3d;
	private int        frame;
	
	@Override
	public void onDrawFrame(GL10 gl) {
		if (frame++ % 100 == 0) {
			Log.println(Log.INFO, "M3GRenderer", "onDrawFrame, i="+frame);
		}
//       g3d.render (wld);
	}
	
	

	@Override
	public void onSurfaceChanged(GL10 gl, int width, int height) {
		Log.println(Log.INFO, "M3GRenderer", "onSurfaceChanged");
//        g3d.setViewport (0, 0, width, height);
//        Camera cam = wld.getActiveCamera ();
//		String s = cam.getClass().getName();
//       cam.setPerspective (45, width/(float)height, 0.1f, 100.f);
	}

	@Override
	public void onSurfaceCreated(GL10 gl, EGLConfig config) {
		Log.println(Log.INFO, "M3GRenderer", "onSurfaceCreated");
		g3d = Graphics3D.getInstance();
	    wld = new World();
		
		  	VertexArray positions         = new VertexArray (4, 3, 2);
		  	short        positions_value[] = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
		    positions.set (0, 4, positions_value);

		    float scale   = 1;
		    float[] bias = {0,0,0};
		    VertexBuffer vertices = new VertexBuffer();
		    vertices.setPositions (positions, scale, bias);
		  
		    int[] indices = {0,1,2,3};
		    int[] stripLengths = {4};

		    TriangleStripArray tris = new TriangleStripArray (indices, stripLengths);

		    Material mat = new Material();
		    mat.setColor (Material.DIFFUSE, 0xff7f7fff);

		    Appearance app = new Appearance();
		    app.setMaterial (mat);

		    Mesh mesh = new Mesh (vertices, tris, app);
		  
		    Camera cam = new Camera();
		    cam.translate (0,0,5);

		    Log.i("AAA", "cam="+cam);
		    Log.i("AAA", "wld="+wld);
		    wld.addChild (cam);
		    Log.i("AAA", "wld="+wld);
//		    wld.setActiveCamera (cam);
//		    wld.addChild (mesh);
	}

}
