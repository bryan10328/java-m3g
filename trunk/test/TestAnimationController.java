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

        assertEquals (0,   controller.getActiveIntervalStart());
        assertEquals (0,   controller.getActiveIntervalEnd());
        assertEquals (1.f, controller.getWeight(), 0.00001f);
        assertEquals (1.f, controller.getSpeed(), 0.00001f);
        assertEquals (0,   controller.getRefWorldTime());
        assertEquals (0.f, controller.getPosition(0), 0.00001f);
    }

    @Test
    public void testGetterSetter () {
        AnimationController controller = new AnimationController ();
        controller.setActiveInterval (10, 20);
        controller.setWeight   (3);
        controller.setSpeed    (4, 0);
        controller.setPosition (2, 1);

        assertEquals (10, controller.getActiveIntervalStart());
        assertEquals (20, controller.getActiveIntervalEnd());
        assertEquals (3.f, controller.getWeight(), 0.00001f);
        assertEquals (4.f, controller.getSpeed(), 0.00001f);
        assertEquals (1,   controller.getRefWorldTime());
        assertEquals (2.f, controller.getPosition(1), 0.00001f);
        assertEquals (6.f, controller.getPosition(2), 0.00001f);
    }

}