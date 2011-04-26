package org.karlsland.m3g.sample;



import javax.media.opengl.GLAutoDrawable;
import javax.media.opengl.GLEventListener;

import org.karlsland.m3g.AnimationController;
import org.karlsland.m3g.AnimationTrack;
import org.karlsland.m3g.Appearance;
import org.karlsland.m3g.Background;
import org.karlsland.m3g.Camera;
import org.karlsland.m3g.Graphics3D;
import org.karlsland.m3g.Group;
import org.karlsland.m3g.KeyframeSequence;
import org.karlsland.m3g.SkinnedMesh;
import org.karlsland.m3g.TriangleStripArray;
import org.karlsland.m3g.VertexArray;
import org.karlsland.m3g.VertexBuffer;
import org.karlsland.m3g.World;

public class M3GRenderer implements GLEventListener {

    private GLAutoDrawable drawer;
    private Graphics3D     g3d;
    private World          wld;
    private int            worldTime;

    public void init(GLAutoDrawable drawable) {

        // 初期化処理
        this.drawer = drawable;
        this.g3d    = Graphics3D.getInstance ();
        this.wld    = new World ();
        this.worldTime = 0;
        
        Camera cam = new Camera ();
        cam.translate (0,10,50);
        wld.addChild (cam);
        wld.setActiveCamera (cam);

        Background bg = new Background ();
        bg.setColor (0xff7f7f7f);
        wld.setBackground (bg);

        KeyframeSequence keyframe_sequence = new KeyframeSequence (3, 4, KeyframeSequence.SLERP);
        float[][] keyframe_orientation = {{0,0, 0.382683f, 0.92388f},
                                           {0,0,-0.382683f, 0.92388f},
                                           {0,0, 0.382683f, 0.92388f}};
        keyframe_sequence.setKeyframe   (0, 0,   keyframe_orientation[0]);
        keyframe_sequence.setKeyframe   (1, 100, keyframe_orientation[1]);
        keyframe_sequence.setKeyframe   (2, 200, keyframe_orientation[2]);
        keyframe_sequence.setRepeatMode (KeyframeSequence.LOOP);
        keyframe_sequence.setValidRange (0, 2);
        keyframe_sequence.setDuration   (200);
        
        AnimationController animation_controller = new AnimationController ();
        AnimationTrack      animation_track      = new AnimationTrack (keyframe_sequence, AnimationTrack.ORIENTATION);
        animation_track.setController (animation_controller);


        VertexArray positions = new VertexArray (42, 3, 2);
        positions.set (0, 42, Data.xyz);

        float scale  = 0.001f;
        float[] bias = {0,0,0};
        VertexBuffer vertices = new VertexBuffer ();
        vertices.setPositions (positions, scale, bias);
  
        int[] strips = {42};
        TriangleStripArray tris = new TriangleStripArray (0, strips);

        Appearance app = new Appearance ();

        Group bone0 = new Group ();
        Group bone1 = new Group ();
        bone1.translate (0,10,0);
        bone0.addChild (bone1);
  
        SkinnedMesh mesh = new SkinnedMesh (vertices, tris, app, bone0);
        wld.addChild (mesh);

        mesh.addTransform (bone0, 10, 0, 18);
        mesh.addTransform (bone0, 8 , 18, 2 );
        mesh.addTransform (bone0, 6 , 20, 2 );
        mesh.addTransform (bone0, 4 , 22, 2 );
        mesh.addTransform (bone0, 2 , 24, 2 );
        mesh.addTransform (bone1, 2 , 18, 2 );
        mesh.addTransform (bone1, 4 , 20, 2 );
        mesh.addTransform (bone1, 6 , 22, 2 );
        mesh.addTransform (bone1, 8 , 24, 2 );
        mesh.addTransform (bone1, 10, 26, 16);

        //mesh.addTransform (bone0, 1, 0, 21);
        //mesh.addTransform (bone1, 1, 21, 21);

        bone1.postRotate (90, 0,0,1);
        bone1.addAnimationTrack (animation_track);

    }
 
    public void reshape(GLAutoDrawable drawable,
                        int x, int y, 
                        int width, int height) {
        // 描画領域変更処理
        g3d.setViewport (x, y, width, height);
        Camera cam = wld.getActiveCamera ();
        cam.setPerspective (45, width/(float)height, 0.1f, 100.f);
    }
 
	public void display(GLAutoDrawable drawable) {
		// 描画処理
		wld.animate(worldTime);
		g3d.render(wld);
	}
	
 
    public void displayChanged(GLAutoDrawable drawable,
                               boolean modeChanged,
                               boolean deviceChanged) {
        // 
    }

    public void update (char key) {

        System.out.println (key+"のキーが押された");
        if (key == 'q') {
            System.exit (0);
        }
        else if (key == ' ') {
            System.out.println ("main: time = " + worldTime + "\n");
            worldTime = worldTime + 10;
        }

        drawer.display();
    }

}