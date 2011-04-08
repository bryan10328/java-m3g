import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import javax.swing.*;
import javax.media.opengl.GLAutoDrawable;
import javax.media.opengl.GLEventListener;
import javax.media.opengl.GLCanvas;



public class JavaMain {
    
    JFrame      frame;
    GLCanvas    canvas;
    M3GRenderer renderer;

    class MyMouseListener extends MouseAdapter {
        @Override
        public void mouseClicked (MouseEvent e) {
            renderer.mouse (e.getX(), e.getY());
        }
    }

    class MyKeyListener extends KeyAdapter {
        @Override
        public void keyPressed (KeyEvent e) {
            renderer.keybord (e.getKeyChar());
        }
    }

    class MyWindowListener extends WindowAdapter {
        @Override
        public void windowClosing (WindowEvent e) {
            System.exit(0);
        }
    }


   public JavaMain () {

       frame    = new JFrame ();
       renderer = new M3GRenderer ();
       canvas   = new GLCanvas ();
       canvas.addGLEventListener(renderer);
       canvas.addKeyListener   (new MyKeyListener());
       canvas.addMouseListener (new MyMouseListener());
       frame.add(canvas);
       frame.setSize (600, 300);
       frame.addWindowListener(new MyWindowListener());
       frame.setVisible(true);
    }
 
    public static void main(String[] args) {
       new JavaMain();
    }
} 
