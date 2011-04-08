import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import javax.swing.*;
import javax.media.opengl.GLAutoDrawable;
import javax.media.opengl.GLEventListener;
import javax.media.opengl.GLCanvas;



public class JavaMain {
    
    JFrame      frame;
    GLCanvas    canvas;
    M3GRenderer renderer;

   public JavaMain () {
       frame    = new JFrame ();
       canvas   = new GLCanvas ();
       renderer = new M3GRenderer ();
       canvas.addGLEventListener(renderer);
       frame.add(canvas);
       frame.setSize(300, 300);
       frame.addWindowListener(new WindowAdapter() {
               public void windowClosing(WindowEvent e) {
                   System.exit(0);
               }
           });
       frame.addKeyListener(new KeyAdapter() {
               public void keyPressed(KeyEvent e) {
                   renderer.update (e.getKeyChar());
               }
           });

       frame.setVisible(true);
    }
 
    public static void main(String[] args) {
       new JavaMain();
    }
} 
