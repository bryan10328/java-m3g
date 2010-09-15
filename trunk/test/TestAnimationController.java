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


}