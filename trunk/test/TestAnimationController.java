import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.karlsland.m3g.*;

public class TestAnimationController {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestAnimationController.class);
    }

    @Test
    public void testInitialize () {
        AnimationController controller = new AnimationController ();
    }

    @Test
    public void testActiveInterval () {
        AnimationController controller = new AnimationController ();
        controller.setActiveInterval (10, 20);
        int start = controller.getActiveIntervalStart();
        System.out.println ("start = " + start);
        assertEquals (10, controller.getActiveIntervalStart());
        assertEquals (20, controller.getActiveIntervalEnd());
    }

}