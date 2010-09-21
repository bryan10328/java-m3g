import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.karlsland.m3g.*;

public class TestTransform {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestTransform.class);
    }

    @Test
    public void testInitialize () {
        Transform tra1 = new Transform ();
        Transform tra2 = new Transform (tra1);
    }

    @Test
    public void testGetterSettter () {
        Transform trans1 = new Transform ();
        
        float[] expected = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
        trans1.set (expected);

        float[] matrix = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        trans1.get (matrix);

        for (int i = 0; i < 16; i++) {
            assertEquals (expected[i], matrix[i], 0.00001);
        }

        Transform trans2 = new Transform (trans1);
        trans2.get (matrix);

        for (int i = 0; i < 16; i++) {
            assertEquals (expected[i], matrix[i], 0.00001);
        }
        
    }

    @Test
    public void testInvert () {
        Transform trans = new Transform ();
        float[]   origin   = {1,0,0,1, 0,1,0,1, 0,0,1,1, 0,0,0,2};
        float[]   expected = {1,0,0,-0.5f, 0,1,0,-0.5f, 0,0,1,-0.5f, 0,0,0,0.5f};

        trans.set (origin);
        trans.invert ();

        float[] matrix = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        trans.get (matrix);

        for (int i = 0; i < 16; i++) {
            assertEquals (expected[i], matrix[i], 0.00001);
        }
        
    }

    @Test
    public void testPostMultiply () {
        Transform trans1 = new Transform ();
        Transform trans2 = new Transform ();
        float[] matrix1  = {1,0,0,1, 0,1,0,1, 0,0,1,1, 0,0,0,1};
        float[] matrix2  = {1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1};
        float[] expected = {2,2,2,2, 2,2,2,2, 2,2,2,2, 1,1,1,1};
        trans1.set (matrix1);
        trans2.set (matrix2);

        trans1.postMultiply (trans2);

        float[] matrix  = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        trans1.get (matrix);

        for (int i = 0; i < 16; i++) {
            assertEquals (expected[i], matrix[i], 0.00001);
        }

    }

    @Test
    public void testPostRotate () {
        Transform trans = new Transform ();
        trans.postRotate (45, 1, 1, 0);
        
        System.out.println ("Hello");
        trans.print ();
        System.out.println ("Hello");

        float[] expected = {0.853553f,0.146447f,0.5f,0f, 0.146447f,0.853553f,-0.5f,0, -0.5f,0.5f,0.707107f,0, 0,0,0,1};
        float[] matrix   = {0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,999};
        trans.get (matrix);

        for (int i = 0; i < 16; i++) {
            assertEquals (expected[i], matrix[i], 0.0001f);
        }
    }

    @Test
    public void testPostRotateQuat () {
        Transform trans = new Transform ();
        // Quaternion (45, 1, 1, 0)
        trans.postRotateQuat (0.270598f,0.270598f,0, 0.92388f);

        float[] expected = {0.853553f,0.146447f,0.5f,0f, 0.146447f,0.853553f,-0.5f,0, -0.5f,0.5f,0.707107f,0, 0,0,0,1};
        float[] matrix   = {0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,999};
        trans.get (matrix);

        for (int i = 0; i < 16; i++) {
            assertEquals (expected[i], matrix[i], 0.0001f);
        }
    }

    @Test
    public void testPostScale () {
        Transform trans = new Transform ();
        trans.postScale (100, 200, 300);   // 後で変更

        float[] expected = {100,0,0,0, 0,200,0,0, 0,0,300,0, 0,0,0,1};
        float[] matrix   = {0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0};
        trans.get (matrix);

        for (int i = 0; i < 16; i++) {
            assertEquals (expected[i], matrix[i], 0.0001f);
        }
    }

    @Test
    public void testPostTranslate () {
        Transform trans = new Transform ();
        trans.postTranslate (100, 200, 300);   // 後で変更

        float[] expected = {1,0,0,100, 0,1,0,200, 0,0,1,300, 0,0,0,1};
        float[] matrix   = {0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,999};
        trans.get (matrix);

        for (int i = 0; i < 16; i++) {
            assertEquals (expected[i], matrix[i], 0.0001f);
        }
    }

    @Test
    public void testSetIdentity () {
        Transform trans = new Transform ();
        float[] expected = {1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1};
        float[] matrix   = {0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0};
        trans.get (matrix);

        for (int i = 0; i < 16; i++) {
            assertEquals (expected[i], matrix[i], 0.0001f);
        }

        expected = new float[]{1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1};
        trans.set (expected);

        trans.get (matrix);
        for (int i = 0; i < 16; i++) {
            assertEquals (expected[i], matrix[i], 0.0001f);
        }

        expected = new float[]{1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1};
        trans.setIdentity ();
        trans.get (matrix);

        for (int i = 0; i < 16; i++) {
            assertEquals (expected[i], matrix[i], 0.0001f);
        }

    }

    @Test
    public void testTransform1 () {
        Transform trans = new Transform ();
        float[] matrix   = {1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1};
        trans.set (matrix);

        float[] vector   = {1,2,3,4};
        float[] expected = {10,10,10,10};

        trans.transform (vector);

        for (int i = 0; i < 4; i++) {
            assertEquals (expected[i], vector[i], 0.0001f);
        }
    }

    // TODO: このテストはVertexArrayを作るまで保留
    @Test
    public void testTransform2 () {

        VertexArray varry = new VertexArray (2, 3, 4);
        float[] values = {1,2,3, 4,5,6};
        varry.set (0, 2, values);

        Transform trans = new Transform ();
        float[] matrix = {1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1};
        trans.set (matrix);
        
        float[] out = {1,2,3, 4,5,6};

        trans.transform (varry, out, true);

        float[] expected = {100,200,300, 400,500,600};
        for (int i = 0; i < 4; i++) {
//            assertEquals (expected[i], out[i], 0.0001f);
        }

    }

    @Test
    public void testTranspose () {
        Transform trans = new Transform ();
        float[] matrix   = {1,2,3,4, 5,6,7,8, 9,10,11,12, 13,14,15,16};
        trans.set (matrix);
        trans.transpose ();
        trans.get (matrix);

        float[] expected = {1,5,9,13, 2,6,10,14, 3,7,11,15, 4,8,12,16};

        for (int i = 0; i < 16; i++) {
            assertEquals (expected[i], matrix[i], 0.0001f);
        }



    }

}