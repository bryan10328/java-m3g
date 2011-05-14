package org.karlsland.m3g.sample;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

import org.karlsland.m3g.Appearance;
import org.karlsland.m3g.Background;
import org.karlsland.m3g.Camera;
import org.karlsland.m3g.Graphics3D;
import org.karlsland.m3g.Material;
import org.karlsland.m3g.Mesh;
import org.karlsland.m3g.Node;
import org.karlsland.m3g.PolygonMode;
import org.karlsland.m3g.TriangleStripArray;
import org.karlsland.m3g.VertexArray;
import org.karlsland.m3g.VertexBuffer;
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
	        cam.lookAt (0,0,15,
	                    0,0,0,
	                    0,1,0);
	        wld.addChild (cam);
	        wld.setActiveCamera (cam);

	        Background bg = new Background ();
	        bg.setColor (0xff3f3fff);
	        wld.setBackground (bg);

	        VertexArray positions = new VertexArray (4, 3, 4);
	        float[]        position_values = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
	        positions.set (0, 4, position_values);

	        VertexArray  colors = new VertexArray (4, 4, 1);
	        byte colors_values[] = {127,127,127,127,
	        							127,0,0,127,
	        							127,127,127,127,
	        							0,0,127,127};
	        colors.set (0, 4, colors_values);

	        float scale = 1;
	        float[] bias = {0,0,0};
	        VertexBuffer vertices = new VertexBuffer ();
	        vertices.setPositions (positions, scale, bias);
	        vertices.setColors (colors);

	        int[] strips = {4};
	        int[] indices = {0,1,2,3};
	        TriangleStripArray tris = new TriangleStripArray (indices, strips);

	        PolygonMode poly = new PolygonMode ();
	        poly.setCulling (PolygonMode.CULL_NONE);

	        Material mat = new Material ();
	        mat.setVertexColorTrackingEnable (true);

	        Appearance app = new Appearance ();
	        app.setPolygonMode (poly);
	        app.setMaterial (mat);


	        Mesh mesh1 = new Mesh (vertices, tris, app);
	        wld.addChild (mesh1);

	        Mesh mesh2 = new Mesh (vertices, tris, app);
	        mesh2.translate (3,0,0);
	        wld.addChild (mesh2);

	        Mesh mesh3 = new Mesh (vertices, tris, app);
	        mesh3.translate (-3,0,0);
	        wld.addChild (mesh3);

	        mesh1.setAlignment (cam, Node.NONE,   wld, Node.NONE);
	        mesh2.setAlignment (cam, Node.ORIGIN, wld, Node.ORIGIN);
	        mesh3.setAlignment (cam, Node.ORIGIN, cam, Node.ORIGIN);

	}

}
