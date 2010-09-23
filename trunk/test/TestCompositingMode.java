import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.junit.Ignore;
import org.karlsland.m3g.*;

public class TestCompositingMode {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestCompositingMode.class);
    }

    @Test
    public void testInitialize () {
        CompositingMode cmode = new CompositingMode ();

        assertEquals (CompositingMode.REPLACE, cmode.getBlending());
        assertEquals (0.f , cmode.getAlphaThreshold()   , 0.00001f);
        assertEquals (0.f , cmode.getDepthOffsetFactor(), 0.00001f);
        assertEquals (0.f , cmode.getDepthOffsetUnits() , 0.00001f);
        assertEquals (true, cmode.isDepthTestEnabled());
        assertEquals (true, cmode.isAlphaWriteEnabled());
        assertEquals (true, cmode.isColorWriteEnabled());
        assertEquals (true, cmode.isDepthWriteEnabled());
    }

    @Test
    public void testGetterSetter () {
        CompositingMode cmode = new CompositingMode ();

        cmode.setBlending (CompositingMode.MODULATE_X2);
        cmode.setAlphaThreshold    (0.5f);
        cmode.setDepthOffset       (0.1f, 0.2f);
        cmode.setDepthTestEnable   (false);
        cmode.setAlphaWriteEnable  (false);
        cmode.setColorWriteEnable  (false);
        cmode.setDepthWriteEnable  (false);

        assertEquals (CompositingMode.MODULATE_X2, cmode.getBlending());
        assertEquals (0.5f , cmode.getAlphaThreshold()   , 0.00001f);
        assertEquals (0.1f , cmode.getDepthOffsetFactor(), 0.00001f);
        assertEquals (0.2f , cmode.getDepthOffsetUnits() , 0.00001f);
        assertEquals (false, cmode.isDepthTestEnabled());
        assertEquals (false, cmode.isAlphaWriteEnabled());
        assertEquals (false, cmode.isColorWriteEnabled());
        assertEquals (false, cmode.isDepthWriteEnabled());

    }
    

}