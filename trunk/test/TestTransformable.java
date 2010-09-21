import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.karlsland.m3g.*;

public class TestTransformable {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestTransformable.class);
    }

    @Test
    public void testInitialize () {
        Transformable trans = new Group ();

        float[] angleAxis = new float[4];
        float[] scale     = new float[3];
        float[] translation = new float[3];
        Transform t       = new Transform ();

        trans.getScale       (scale);
        trans.getTranslation (translation);
        trans.getOrientation (angleAxis);
        trans.getTransform   (t);

        assertEquals (0, angleAxis[0], 0.00001f);
        assertEquals (0, angleAxis[1], 0.00001f);  // 仕様書ではundefined.
        assertEquals (0, angleAxis[2], 0.00001f);  // 仕様書ではundefined.
        assertEquals (0, angleAxis[3], 0.00001f);  // 仕様書ではundefined.
        assertEquals (1, scale[0], 0.00001f);
        assertEquals (1, scale[1], 0.00001f);
        assertEquals (1, scale[2], 0.00001f);
        assertEquals (0, translation[0], 0.00001f);
        assertEquals (0, translation[1], 0.00001f);
        assertEquals (0, translation[2], 0.00001f);

        float[] matrix = new float[16];
        t.get (matrix);
        float[] expected = {1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1};
        
        for (int i = 0; i < 16; i++) {
            assertEquals (expected[i], matrix[i], 0.00001f);
        }

        
    }
    
    @Test
    public void testGetterSetter () {
        Transformable trans = new Group ();
        float[] angleAxis = new float[4];

        trans.postRotate (45, 1,1,0);
        trans.getOrientation (angleAxis);
        assertEquals (45, angleAxis[0], 0.00001f);
        assertEquals (0.70710678f, angleAxis[1], 0.00001f);
        assertEquals (0.70710678f, angleAxis[2], 0.00001f);
        assertEquals (0          , angleAxis[3], 0.00001f);
        
        trans.preRotate (-90, 0,0,1);
        trans.getOrientation (angleAxis);
        assertEquals (98.421051f , angleAxis[0], 0.00001f);
        assertEquals (0          , angleAxis[1], 0.00001f);
        assertEquals (0.5054495f , angleAxis[2], 0.00001f);
        assertEquals (-0.8628564f, angleAxis[3], 0.00001f);

        trans.setOrientation (45, 1,1,0);
        trans.getOrientation (angleAxis);
        assertEquals (45         , angleAxis[0], 0.00001f);
        assertEquals (0.70710678f, angleAxis[1], 0.00001f);
        assertEquals (0.70710678f, angleAxis[2], 0.00001f);
        assertEquals (0          , angleAxis[3], 0.00001f);

        
        float[] scale = new float[3];
        trans.scale (1,2,3);
        trans.getScale (scale);
        assertEquals (1, scale[0], 0.00001f);
        assertEquals (2, scale[1], 0.00001f);
        assertEquals (3, scale[2], 0.00001f);

        trans.scale (2,2,2);
        trans.getScale (scale);
        assertEquals (2, scale[0], 0.00001f);
        assertEquals (4, scale[1], 0.00001f);
        assertEquals (6, scale[2], 0.00001f);

        trans.setScale (2,2,2);
        trans.getScale (scale);
        assertEquals (2, scale[0], 0.00001f);
        assertEquals (2, scale[1], 0.00001f);
        assertEquals (2, scale[2], 0.00001f);

        float[] translation = new float[3];

        trans.translate (1,2,3);
        trans.getTranslation (translation);
        assertEquals (1, translation[0], 0.00001f);
        assertEquals (2, translation[1], 0.00001f);
        assertEquals (3, translation[2], 0.00001f);

        trans.translate (2,2,2);
        trans.getTranslation (translation);
        assertEquals (3, translation[0], 0.00001f);
        assertEquals (4, translation[1], 0.00001f);
        assertEquals (5, translation[2], 0.00001f);

        trans.setTranslation (2,2,2);
        trans.getTranslation (translation);
        assertEquals (2, translation[0], 0.00001f);
        assertEquals (2, translation[1], 0.00001f);
        assertEquals (2, translation[2], 0.00001f);

        Transform t = new Transform ();
        float[] matrix = {1,2,3,4, 5,6,7,8, 9,10,11,12, 13,14,15,16};
        t.set (matrix);
        trans.setTransform (t);

        t      = new Transform ();
        matrix = new float[16];
        trans.getCompositeTransform (t);
        t.get (matrix);

        float[] expected = {38.1716f,43.1716f,48.1716f,53.1716f, 25.8284f,28.8284f,31.8284f,34.8284f, 42.7279f,46.1421f,49.5564f,52.9706f, 13,14,15,16};
        for (int i = 0; i < 16; i++) {
            assertEquals (expected[i], matrix[i], 0.0001f);
        }
    }

}

