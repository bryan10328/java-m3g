package org.karlsland.m3g.sample;



import java.io.IOException;

import javax.media.opengl.GLAutoDrawable;
import javax.media.opengl.GLEventListener;

import org.karlsland.m3g.Appearance;
import org.karlsland.m3g.Background;
import org.karlsland.m3g.Camera;
import org.karlsland.m3g.CompositingMode;
import org.karlsland.m3g.Graphics3D;
import org.karlsland.m3g.Image2D;
import org.karlsland.m3g.Loader;
import org.karlsland.m3g.Sprite3D;
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
        cam.lookAt (0,0,5,
                     0,0,0,
                     0,1,0);
        wld.addChild (cam);
        wld.setActiveCamera (cam);

        Background bg = new Background ();
        bg.setColor (0xff1f1f7f);
        wld.setBackground (bg);

        Image2D img = null;
        try {
        	img     = (Image2D)Loader.load ("res/moe-small.png")[0];
        } catch (IOException e) {
        	e.printStackTrace();
        }
        
        int      width  = img.getWidth ();
        int      height = img.getHeight ();
    
        CompositingMode cmp = new CompositingMode ();
        cmp.setDepthTestEnable (true);

        Appearance app1 = new Appearance ();
        app1.setCompositingMode (cmp);

        Sprite3D   spr1 = new Sprite3D (true, img, app1);
        spr1.translate (1,0,0);
        spr1.setCrop (0, 0, -width, height);
        wld.addChild (spr1);

        Appearance app2 = new Appearance ();
        app2.setCompositingMode (cmp);

        Sprite3D   spr2 = new Sprite3D (false, img, app2);
        spr2.translate (-1,0,0);
        spr2.setCrop (0, 0, width, height);
        wld.addChild (spr2);
        
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
        g3d.render (wld);
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
        } else if (key == ' ') {
            System.out.println ("main: time = " + worldTime + "\n");
            worldTime = worldTime + 2;
            wld.animate (worldTime);
            drawer.display();
        }

    }


}