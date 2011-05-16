package org.karlsland.m3g.sample;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

import org.karlsland.m3g.AnimationController;
import org.karlsland.m3g.AnimationTrack;
import org.karlsland.m3g.Appearance;
import org.karlsland.m3g.Background;
import org.karlsland.m3g.Camera;
import org.karlsland.m3g.CompositingMode;
import org.karlsland.m3g.Graphics3D;
import org.karlsland.m3g.Group;
import org.karlsland.m3g.KeyframeSequence;
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
		// TODO Auto-generated method stub
	       g3d.render (wld);
	}


	public void onSurfaceChanged(GL10 gl, int width, int height) {
		// TODO Auto-generated method stub
        g3d.setViewport (0, 0, width, height);
        Camera cam = wld.getActiveCamera ();
        cam.setPerspective (45, width/(float)height, 0.1f, 100.f);
	}


	public void onSurfaceCreated(GL10 gl, EGLConfig config) {
        g3d    = Graphics3D.getInstance ();
        wld    = new World ();
       
        Camera cam = new Camera ();
        cam.lookAt (3,0,3,
                    0,0,-2,
                    0,1,0);
        wld.addChild (cam);
        wld.setActiveCamera (cam);

        
        AnimationController controller = new AnimationController ();

        KeyframeSequence keyframe_sequence = new KeyframeSequence (3, 3, KeyframeSequence.LINEAR);
        float[][] values = {{0,0,0}, {0,0,-6}, {0,0,0}};
        keyframe_sequence.setKeyframe (0, 0,   values[0]);
        keyframe_sequence.setKeyframe (1, 100, values[1]);
        keyframe_sequence.setKeyframe (2, 200, values[2]);
        keyframe_sequence.setRepeatMode (KeyframeSequence.LOOP);
        keyframe_sequence.setValidRange (0, 2);
        keyframe_sequence.setDuration (200);

        AnimationTrack animation_track = new AnimationTrack (keyframe_sequence, AnimationTrack.TRANSLATION);
        animation_track.setController (controller);

        VertexArray positions        = new VertexArray (4, 3, 2);
        short[]        position_values = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
        positions.set (0, 4, position_values);

        float   scale = 1;
        float[] bias  = {0,0,0};
        VertexBuffer vertices = new VertexBuffer ();
        vertices.setPositions (positions, scale, bias);
        vertices.setDefaultColor (0x3f7f7fff);

        int[] strips = {4};
        TriangleStripArray tris = new TriangleStripArray (0, strips);

        CompositingMode cmp = new CompositingMode ();
        cmp.setBlending (CompositingMode.ALPHA);
        cmp.setDepthWriteEnable (false);
        cmp.setAlphaThreshold (0.f);

        Material mat = new Material ();
        mat.setColor (Material.DIFFUSE, 0x4f7f7fff);

        Appearance app = new Appearance ();
        app.setCompositingMode (cmp);
        app.setMaterial (mat);

        Mesh mesh1 = new Mesh (vertices, tris, app);
        mesh1.translate (0,0,-1);

        Mesh mesh2 = new Mesh (vertices, tris, app);
        mesh2.translate (0,0,-2);

        Mesh mesh3 = new Mesh (vertices, tris, app);
        mesh3.translate (0,0,-3);

        Mesh mesh4 = new Mesh (vertices, tris, app);
        mesh4.translate (0,0,-4);

        Mesh mesh5 = new Mesh (vertices, tris, app);
        mesh5.translate (0,0,-5);


        CompositingMode cmp2 = new CompositingMode ();
        cmp2.setBlending (CompositingMode.REPLACE);

        Material mat2 = new Material ();
        mat2.setColor (Material.DIFFUSE, 0xff7f7f7f);

        Appearance app2 = new Appearance ();
        app2.setCompositingMode (cmp2);
        app2.setMaterial (mat2);

        Mesh mesh10 = new Mesh (vertices, tris, app2);
        mesh10.addAnimationTrack (animation_track);


        Group grp = new Group ();
        grp.addChild (mesh1);
        grp.addChild (mesh2);
        grp.addChild (mesh3);
        grp.addChild (mesh4);
        grp.addChild (mesh5);
        grp.addChild (mesh10);
        wld.addChild (grp);


        Background bg = new Background ();
        bg.setColor (0xff3f3f3f);
        wld.setBackground (bg);
	}

}
