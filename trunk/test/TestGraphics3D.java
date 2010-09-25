import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.junit.Ignore;
import org.karlsland.m3g.*;

public class TestGraphics3D {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestGraphics3D.class);
    }

    @Test
    public void testInitialize () {
        Graphics3D g3d1 = Graphics3D.getInstance ();
        Graphics3D g3d2 = Graphics3D.getInstance ();
        
        assertEquals (g3d1, g3d2);
    }

    @Test
    public void testSetterGetter () {
        Graphics3D g3d = Graphics3D.getInstance ();

        g3d.setViewport (1,2,100,200);
        
        assertEquals (1, g3d.getViewportX());
        assertEquals (2, g3d.getViewportY());
        assertEquals (100, g3d.getViewportWidth());
        assertEquals (200, g3d.getViewportHeight());
    }

}
