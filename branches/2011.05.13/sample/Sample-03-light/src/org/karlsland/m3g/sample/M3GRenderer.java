package org.karlsland.m3g.sample;

import javax.media.opengl.GLAutoDrawable;
import javax.media.opengl.GLEventListener;

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
import org.karlsland.m3g.sample.Data;


public class M3GRenderer implements GLEventListener {

    private Graphics3D     g3d;
    private World          wld;
    
	@Override
	public void display(GLAutoDrawable arg0) {
		// TODO Auto-generated method stub
	      g3d.render (wld);
	}

	@Override
	public void displayChanged(GLAutoDrawable arg0, boolean arg1, boolean arg2) {
		// TODO Auto-generated method stub

	}

	@Override
	public void init(GLAutoDrawable arg0) {
		// TODO Auto-generated method stub
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

	@Override
	public void reshape(GLAutoDrawable drawable, int x, int y, int width, int height) {
		// TODO Auto-generated method stub
	      g3d.setViewport (x, y, width, height);
	        Camera cam = wld.getActiveCamera ();
	        cam.setPerspective (45, width/(float)height, 0.1f, 100.f);
	}

    public void keyboard (char key) {

        System.out.println (key+"のキーが押された");
        if (key == 'q') {
            System.exit (0);
        }
    }
}
