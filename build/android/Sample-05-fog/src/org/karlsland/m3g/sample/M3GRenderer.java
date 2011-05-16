package org.karlsland.m3g.sample;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

import org.karlsland.m3g.AnimationController;
import org.karlsland.m3g.AnimationTrack;
import org.karlsland.m3g.Appearance;
import org.karlsland.m3g.Background;
import org.karlsland.m3g.Camera;
import org.karlsland.m3g.Fog;
import org.karlsland.m3g.Graphics3D;
import org.karlsland.m3g.Group;
import org.karlsland.m3g.KeyframeSequence;
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
        this.g3d    = Graphics3D.getInstance ();
        this.wld    = new World ();

        Camera cam = new Camera ();
        cam.lookAt (3,0,3,
                    0,0,-2,
                    0,1,0);
        wld.addChild (cam);
        wld.setActiveCamera (cam);

        AnimationController controller = new AnimationController ();

        KeyframeSequence keyframe_fog_far = new KeyframeSequence (3, 1, KeyframeSequence.LINEAR);
        float[][] frame_fog_far = {{10}, {4}, {10}};
        keyframe_fog_far.setKeyframe (0, 0,   frame_fog_far[0]);
        keyframe_fog_far.setKeyframe (1, 100, frame_fog_far[1]);
        keyframe_fog_far.setKeyframe (2, 200, frame_fog_far[2]);
        keyframe_fog_far.setRepeatMode (KeyframeSequence.LOOP);
        keyframe_fog_far.setValidRange (0, 2);
        keyframe_fog_far.setDuration (200);

        AnimationTrack animation_fog_far = new AnimationTrack (keyframe_fog_far, AnimationTrack.FAR_DISTANCE);
        animation_fog_far.setController (controller);

        VertexArray positions       = new VertexArray (4, 3, 2);
        short[]     position_values = {1,-1,0, 1,1,0, -1,-1,0, -1,1,0};
        positions.set (0, 4, position_values);

        float   scale = 1;
        float[] bias  = {0,0,0};
        VertexBuffer vertices = new VertexBuffer ();
        vertices.setPositions (positions, scale, bias);
        vertices.setDefaultColor (0xff0000ff);

        int[] strips = {4};
        TriangleStripArray tris = new TriangleStripArray (0, strips);

        Fog fog = new Fog ();
        fog.setLinear (4, 10);
        fog.setColor (0x000000ff);
        fog.addAnimationTrack (animation_fog_far);
        fog.setMode (Fog.LINEAR);

        Appearance app = new Appearance ();
        app.setFog (fog);

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

        Group grp = new Group ();
        wld.addChild (grp);
        grp.addChild (mesh1);
        grp.addChild (mesh2);
        grp.addChild (mesh3);
        grp.addChild (mesh4);
        grp.addChild (mesh5);

        Background bg = new Background ();
        bg.setColor (0xff3f3f3f);
        wld.setBackground (bg);
	}

}
