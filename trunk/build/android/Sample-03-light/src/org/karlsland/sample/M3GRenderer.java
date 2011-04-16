package org.karlsland.sample;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

import org.karlsland.m3g.Appearance;
import org.karlsland.m3g.Camera;
import org.karlsland.m3g.Graphics3D;
import org.karlsland.m3g.Light;
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
        g3d = Graphics3D.getInstance ();
        wld = new World ();
        
        Camera cam = new Camera ();
        cam.lookAt (0,20,20,
                    0,0,0,
                    0,1,0);
        wld.addChild (cam);
        wld.setActiveCamera (cam);

        VertexArray positions = new VertexArray (840, 3, 2);
        VertexArray normals   = new VertexArray (840, 3, 1);
        positions.set (0, 840, Data.positionValues);
        normals.set (0, 840, Data.normalValues);

        float scale = 1;
        float[] bias = {0,0,0};
        VertexBuffer vertices = new VertexBuffer ();
        vertices.setPositions (positions, scale, bias);
        vertices.setNormals (normals);

        int[] strips = {42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42,42};
        TriangleStripArray tris = new TriangleStripArray (0, strips);

        Material mat = new Material ();
        mat.setColor (Material.DIFFUSE, 0xffffffff);
  
        Appearance app = new Appearance ();
        app.setMaterial (mat);
        
        Mesh mesh = new Mesh (vertices, tris, app);
        wld.addChild (mesh);

        Light lgh = new Light ();
        lgh.setColor (0xffffff00);
        lgh.setIntensity (1);
        lgh.setMode (Light.OMNI);
        lgh.translate (0.f,2.f,0.f);
        lgh.postRotate (-90, 1,0,0);
        lgh.setSpotAngle (60);
        wld.addChild (lgh);
	}

}
