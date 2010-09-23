import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.karlsland.m3g.*;

public class TestCamera {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestCamera.class);
    }

    @Test
    public void testInitialize () {
        Camera cam = new Camera ();
        
        float[] params = new float[4];
        assertEquals (Camera.GENERIC, cam.getProjection(params));
        
        Transform trans = new Transform ();
        assertEquals (Camera.GENERIC, cam.getProjection(trans));

        float[] matrix = new float[16];
        trans.get (matrix);
        assertEquals (1.f, matrix[0], 0.00001f);
        assertEquals (0.f, matrix[1], 0.00001f);
        assertEquals (0.f, matrix[2], 0.00001f);
        assertEquals (0.f, matrix[3], 0.00001f);
        assertEquals (0.f, matrix[4], 0.00001f);
        assertEquals (1.f, matrix[5], 0.00001f);
        assertEquals (0.f, matrix[6], 0.00001f);
        assertEquals (0.f, matrix[7], 0.00001f);
        assertEquals (0.f, matrix[8], 0.00001f);
        assertEquals (0.f, matrix[9], 0.00001f);
        assertEquals (1.f, matrix[10], 0.00001f);
        assertEquals (0.f, matrix[11], 0.00001f);
        assertEquals (0.f, matrix[12], 0.00001f);
        assertEquals (0.f, matrix[13], 0.00001f);
        assertEquals (0.f, matrix[14], 0.00001f);
        assertEquals (1.f, matrix[15], 0.00001f);
    }


    @Test
    public void testGeneric () {
        Camera    cam      = new Camera ();
        Transform trans    = new Transform ();
        float[]   expected = {1,2,3,4, 5,6,7,8, 9,10,11,12, 13,14,15,16};
        trans.set (expected);

        cam.setGeneric (trans);

        trans = new Transform ();
        cam.getProjection (trans);
        float[] matrix = new float[16];
        trans.get (matrix);

        for (int i = 0; i < 16; i++) {
            assertEquals (expected[i], matrix[i], 0.00001f);
        }
    }

    @Test
    public void testParallel () {
        Camera    cam      = new Camera ();
        cam.setParallel (10, 1.3333f, 0.1f, 100);

        float[] params = new float[4];
        cam.getProjection (params);

        assertEquals (10.f,    params[0], 0.00001f);
        assertEquals (1.3333f, params[1], 0.00001f);
        assertEquals (0.1f,    params[2], 0.00001f);
        assertEquals (100.f,   params[3], 0.00001f);
    }

    @Test
    public void testPerspective () {
        Camera    cam      = new Camera ();
        cam.setPerspective (45, 1.3333f, 0.1f, 100);

        float[] params = new float[4];
        cam.getProjection (params);

        assertEquals (45.f,    params[0], 0.00001f);
        assertEquals (1.3333f, params[1], 0.00001f);
        assertEquals (0.1f,    params[2], 0.00001f);
        assertEquals (100.f,   params[3], 0.00001f);
    }
}
