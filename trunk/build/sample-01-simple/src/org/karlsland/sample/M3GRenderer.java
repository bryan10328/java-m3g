package org.karlsland.sample;


import javax.media.opengl.GLAutoDrawable;
import javax.media.opengl.GLEventListener;

import org.karlsland.m3g.Appearance;
import org.karlsland.m3g.Camera;
import org.karlsland.m3g.Graphics3D;
import org.karlsland.m3g.Material;
import org.karlsland.m3g.Mesh;
import org.karlsland.m3g.TriangleStripArray;
import org.karlsland.m3g.VertexArray;
import org.karlsland.m3g.VertexBuffer;
import org.karlsland.m3g.World;

public class M3GRenderer implements GLEventListener {

	
	private Graphics3D g3d;
	private World      wld;
	
	@Override
	public void init(GLAutoDrawable arg0) {
        // 初期化処理
        this.g3d    = Graphics3D.getInstance ();
        this.wld    = new World ();
        
        Camera cam = new Camera ();
        cam.translate (0,0,5);
        wld.addChild (cam);
        wld.setActiveCamera (cam);

        VertexArray positions = new VertexArray (4, 3, 2);
        short[]  position_values = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
        positions.set (0, 4, position_values);
        
        VertexBuffer vertices = new VertexBuffer ();
        float scale = 1;
        float[] bias = {0,0,0};
        vertices.setPositions (positions, scale, bias);
        
        int[] indices = {0,1,2,3};
        int[] strips = {4};
        TriangleStripArray tris = new TriangleStripArray (indices, strips);

        Material mat = new Material ();
        mat.setColor (Material.DIFFUSE, 0xff7f7fff);
  
        Appearance app = new Appearance ();
        app.setMaterial (mat);
        
        Mesh mesh = new Mesh (vertices, tris, app);
        wld.addChild (mesh);
	}

	@Override
	public void display(GLAutoDrawable arg0) {
        g3d.render (wld);
	}

	@Override
	public void displayChanged(GLAutoDrawable arg0, boolean arg1, boolean arg2) {
		// TODO Auto-generated method stub

	}

	@Override
	public void reshape(GLAutoDrawable drawable, int x, int y, int width, int height) {
        g3d.setViewport (x, y, width, height);
        Camera cam = wld.getActiveCamera ();
        cam.setPerspective (45, width/(float)height, 0.1f, 100.f);
	}
	
	public void keyboard (int key) {
	       System.out.println (key+"のキーが押された");
	       if (key == 'q') {
	           System.exit (0);
	       }
	}

}
