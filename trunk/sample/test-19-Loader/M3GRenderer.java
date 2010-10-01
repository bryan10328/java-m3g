import javax.media.opengl.GL;
import javax.media.opengl.GLAutoDrawable;
import javax.media.opengl.GLEventListener;
import javax.media.opengl.GLCanvas;
import org.karlsland.m3g.*;

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
        

        //objs = loader.load ("simple.m3g");
        Object3D[] objs = Loader.load ("test.m3g");
        
        for (int i = 0; i < objs.length; i++) {
        if (objs[i] instanceof World) {
            wld = (World)objs[i];
            wld.print ();
            break;
        }
        }

        Camera cam = wld.getActiveCamera ();
        if (cam == null) {
            cam = new Camera ();
            cam.lookAt (0,0,10,
                        0,0,0,
                        0,1,0);
            wld.addChild (cam);
            wld.setActiveCamera (cam);
        }

        Background bg = wld.getBackground ();
        if (bg == null) {
            bg = new Background ();
            wld.setBackground (bg);
        }
        bg.setColor (0xff3f7fff);

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
        }
        else if (key == ' ') {
            System.out.println ("main: time = " + worldTime + "\n");
            worldTime = worldTime + 2;
            wld.animate (worldTime);
        }

        drawer.display();
    }

}