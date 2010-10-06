import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.karlsland.m3g.*;
import java.io.*;

public class TestLoader {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestLoader.class);
    }

    @Test
    public void testLoadImage2D () {
        Object3D[] objs = Loader.load ("simple.png");
        assertEquals (1, objs.length);
    }

    @Test
    public void testLoadM3G () {
        Object3D[] objs = Loader.load ("simple.m3g");
        assertEquals (12, objs.length);
    }

    @Test
    public void testLoadM3GFromMemory () {
        FileInputStream fin = null;
        int    size = 0;
        byte[] data = null;
        try {
            fin  = new FileInputStream ("simple.m3g");
            System.out.println ("availabale = " + fin.available());
            size = fin.available ();
            data = new byte[size];
            fin.read (data);
            fin.close ();
        } catch (IOException e) {
        } finally {
        }

        Object3D[] objs = Loader.load (data, 0);
        assertEquals (12, objs.length);
    }



}