import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.junit.Ignore;
import org.karlsland.m3g.*;

public class TestWorld {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestWorld.class);
    }

    @Test
    public void testInitialize () {
        World wld = new World ();

        assertEquals (null, wld.getBackground());
        assertEquals (null, wld.getActiveCamera());
    }

    @Test
    public void testGetterSetter () {
        World      wld = new World ();
        Camera     cam = new Camera ();
        Background bg  = new Background ();

        wld.setBackground (bg);
        wld.setActiveCamera (cam);

        assertEquals (bg, wld.getBackground());
        assertEquals (cam, wld.getActiveCamera());
    }
}