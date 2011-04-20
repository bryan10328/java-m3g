package org.karlsland.m3g.sample;

import java.io.IOException;

import javax.media.opengl.GLAutoDrawable;
import javax.media.opengl.GLEventListener;

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

public class M3GRenderer implements GLEventListener {

    private Graphics3D     g3d;
    private World          wld;
    
    
	@Override
	public void display(GLAutoDrawable arg0) {
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
	        cam.translate (0,0,5);
	        wld.addChild (cam);
	        wld.setActiveCamera (cam);

	        VertexArray positions = new VertexArray (4, 3, 2);
	        short[]  positionValues = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
	        positions.set (0, 4, positionValues);

	        VertexArray colors = new VertexArray (4, 3, 1);
	        byte colorValues[] = {127,127,127, 127,127,127, 127,127,127, 127,127,127};
	        colors.set (0, 4, colorValues);

	        VertexArray texCoords = new VertexArray (4, 2, 2);
	        short texCoordValues[] = {1,0, 1,1, 0,0, 0,1};
	        texCoords.set (0, 4, texCoordValues);

	        float scale = 1;
	        float[] bias = {0,0,0};
	        VertexBuffer vertices = new VertexBuffer ();
	        vertices.setPositions (positions, scale, bias);
	        vertices.setColors (colors);
	        vertices.setTexCoords (0, texCoords, scale, bias);
	        vertices.setTexCoords (1, texCoords, scale, bias);
	        
	        int[] strips  = {3,3};
	        int[] indices = {0,1,2, 2,1,3};

	        
	        TriangleStripArray tris = new TriangleStripArray (indices, strips);

	        Image2D img0 = null;
	        try {
	        	img0 = (Image2D)(Loader.load ("res/yumemi.png")[0]);
	        } catch (IOException e) {
	        	e.printStackTrace();
	        }
        	Texture2D tex0 = new Texture2D (img0);

	        Image2D img1 = null;
	        try {
	        	img1 = (Image2D)(Loader.load ("res/onnanoko.png")[0]);
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
