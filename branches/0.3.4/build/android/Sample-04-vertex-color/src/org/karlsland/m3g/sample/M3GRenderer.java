package org.karlsland.m3g.sample;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

import org.karlsland.m3g.Appearance;
import org.karlsland.m3g.Camera;
import org.karlsland.m3g.CompositingMode;
import org.karlsland.m3g.Graphics3D;
import org.karlsland.m3g.Material;
import org.karlsland.m3g.Mesh;
import org.karlsland.m3g.TriangleStripArray;
import org.karlsland.m3g.VertexArray;
import org.karlsland.m3g.VertexBuffer;
import org.karlsland.m3g.World;

import android.opengl.GLSurfaceView.Renderer;

public class M3GRenderer implements Renderer {
    private Graphics3D     g3d;
    private World          wld;
    
	public void onDrawFrame(GL10 gl) {
        g3d.render (wld);
	}

	public void onSurfaceChanged(GL10 gl, int width, int height) {
        g3d.setViewport (0, 0, width, height);
        Camera cam = wld.getActiveCamera ();
        cam.setPerspective (45, width/(float)height, 0.1f, 100.f);
	}

	public void onSurfaceCreated(GL10 gl, EGLConfig config) {
        g3d    = Graphics3D.getInstance ();
        wld    = new World ();
        
        Camera cam = new Camera ();
        cam.translate (0,0,5);
        wld.addChild (cam);
        wld.setActiveCamera (cam);

        VertexArray positions       = new VertexArray (4, 3, 2);
        short[]     position_values = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
        positions.set (0, 4, position_values);

        VertexArray colors       = new VertexArray (4, 4, 1);
        byte[]      color_values = {127,-128,-128,127,  -128,127,-128,127,  -128,-128,127,127,  127,127,127,127};
        colors.set (0, 4, color_values);

        float   scale = 1;
        float[] bias  = {0,0,0};
        VertexBuffer vertices = new VertexBuffer ();
        vertices.setPositions (positions, scale, bias);
        vertices.setColors    (colors);

        int[] indices = {0,1,2,3};
        int[] strips  = {4};
        TriangleStripArray tris = new TriangleStripArray (indices, strips);

        CompositingMode cmp = new CompositingMode ();
        cmp.setBlending (CompositingMode.ALPHA);

        Material mat = new Material ();
        mat.setVertexColorTrackingEnable (true);

        Appearance app = new Appearance ();
        app.setMaterial (mat);
        app.setCompositingMode (cmp);

        Mesh mesh  = new Mesh (vertices, tris, app);
        wld.addChild (mesh);

	}

}
