import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.junit.Ignore;
import org.karlsland.m3g.*;

public class TestFog {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestFog.class);
    }

    @Test
    public void testInitialize () {
        Fog fog = new Fog ();

        assertEquals (Fog.LINEAR, fog.getMode());
        assertEquals (1.f       , fog.getDensity()     , 0.00001f);
        assertEquals (0.f       , fog.getNearDistance(), 0.00001f);
        assertEquals (1.f       , fog.getFarDistance() , 0.00001f);
        assertEquals (0x00000000, fog.getColor());
    }

    @Test
    public void testGetterSetter () {
        Fog fog = new Fog ();
        
        fog.setMode     (Fog.EXPONENTIAL);
        fog.setDensity  (2);
        fog.setLinear   (10, 20);
        fog.setColor    (0x12345678);

        assertEquals (Fog.EXPONENTIAL, fog.getMode());
        assertEquals (2.f        , fog.getDensity()     , 0.00001f);
        assertEquals (10.f       , fog.getNearDistance(), 0.00001f);
        assertEquals (20.f       , fog.getFarDistance() , 0.00001f);
        assertEquals (0x00345678 , fog.getColor());
    }
}
