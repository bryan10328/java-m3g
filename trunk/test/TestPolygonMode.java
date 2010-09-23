import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.junit.Ignore;
import org.karlsland.m3g.*;

public class TestPolygonMode {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestPolygonMode.class);
    }

    @Test
    public void testInitialize () {
        PolygonMode pmode = new PolygonMode ();
        
        assertEquals (PolygonMode.CULL_BACK   , pmode.getCulling());
        assertEquals (PolygonMode.WINDING_CCW , pmode.getWinding());
        assertEquals (PolygonMode.SHADE_SMOOTH, pmode.getShading());
        assertEquals (false                   , pmode.isTwoSidedLightingEnabled());
        assertEquals (true                    , pmode.isLocalCameraLightingEnabled());
        assertEquals (true                    , pmode.isPerspectiveCorrectionEnabled());

    }

    @Test
    public void testGetterSetter () {
        PolygonMode pmode = new PolygonMode ();

        pmode.setCulling (PolygonMode.CULL_NONE);
        pmode.setWinding (PolygonMode.WINDING_CW);
        pmode.setShading (PolygonMode.SHADE_FLAT);
        pmode.setTwoSidedLightingEnable (true);
        pmode.setLocalCameraLightingEnable (false);
        pmode.setPerspectiveCorrectionEnable (false);

        assertEquals (PolygonMode.CULL_NONE  , pmode.getCulling());
        assertEquals (PolygonMode.WINDING_CW , pmode.getWinding());
        assertEquals (PolygonMode.SHADE_FLAT , pmode.getShading());
        assertEquals (true                   , pmode.isTwoSidedLightingEnabled());
        assertEquals (false                  , pmode.isLocalCameraLightingEnabled());
        assertEquals (false                  , pmode.isPerspectiveCorrectionEnabled());

        
    }
}