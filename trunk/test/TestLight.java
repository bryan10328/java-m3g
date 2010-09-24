import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.junit.Ignore;
import org.karlsland.m3g.*;

public class TestLight {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestLight.class);
    }

    @Test
    public void testInitialize () {
        Light lgh = new Light ();

        assertEquals (Light.DIRECTIONAL, lgh.getMode());
        assertEquals (0x00ffffff, lgh.getColor());
        assertEquals (1.f,  lgh.getIntensity()           , 0.00001f);
        assertEquals (1.f,  lgh.getConstantAttenuation() , 0.00001f);
        assertEquals (0.f,  lgh.getLinearAttenuation()   , 0.00001f);
        assertEquals (0.f,  lgh.getQuadraticAttenuation(), 0.00001f);
        assertEquals (45.f, lgh.getSpotAngle()           , 0.00001f);
        assertEquals (0.f,  lgh.getSpotExponent()        , 0.00001f);
    }

    @Test
    public void testGetterSetter () {
        Light lgh = new Light ();

        lgh.setMode         (Light.OMNI);
        lgh.setColor        (0x12345678);
        lgh.setIntensity    (100);
        lgh.setAttenuation  (1,2,3);
        lgh.setSpotAngle    (90);
        lgh.setSpotExponent (2);

        assertEquals (Light.OMNI, lgh.getMode());
        assertEquals (0x00345678, lgh.getColor());
        assertEquals (100.f, lgh.getIntensity()           , 0.00001f);
        assertEquals (1.f  , lgh.getConstantAttenuation() , 0.00001f);
        assertEquals (2.f  , lgh.getLinearAttenuation()   , 0.00001f);
        assertEquals (3.f  , lgh.getQuadraticAttenuation(), 0.00001f);
        assertEquals (90.f , lgh.getSpotAngle()           , 0.00001f);
        assertEquals (2.f  , lgh.getSpotExponent()        , 0.00001f);
    }
}