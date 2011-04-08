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
        

        Camera cam = new Camera ();
        cam.translate (0,0,5);
        wld.addChild (cam);
        wld.setActiveCamera (cam);

        Image2D img = (Image2D)(Loader.load ("mizugi.png")[0]);
        int width    = img.getWidth();
        int height   = img.getHeight();
        Background bg  = new Background ();
        bg.setImage (img);
        //bg.setCrop (0,0,width,height);
        bg.setColor (0xffff0000);
        bg.setImageMode (Background.REPEAT, Background.REPEAT);
        bg.setCrop (-width,-height,width*2,height*2);
        wld.setBackground (bg);

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
            worldTime = worldTime + 5;
            wld.animate (worldTime);
            drawer.display();
        }

    }


}