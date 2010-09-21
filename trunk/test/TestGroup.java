import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.karlsland.m3g.*;

public class TestGroup {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestGroup.class);
    }


    @Test
    public void testInitialize () {
        Group grp = new Group ();
        int count = grp.getChildCount();
        assertEquals (0, count);
    }

    @Test
    public void testAddChild () {
        Group grp1 = new Group ();
        Group grp2 = new Group ();
        Group grp3 = new Group ();
        grp1.addChild (grp2);
        grp1.addChild (grp3);

        int count = grp1.getChildCount ();
        assertEquals (2, count);

        grp1.removeChild (grp2);

        count = grp1.getChildCount ();
        assertEquals (1, count);

        grp1.removeChild (grp3);

        count = grp1.getChildCount ();
        assertEquals (0, count);
    }

    @Test
    public void testGetChild () {
        Group grp1 = new Group ();
        Group grp2 = new Group ();
        Group grp3 = new Group ();
        grp1.addChild (grp2);
        grp1.addChild (grp3);
        assertEquals (2, grp1.getChildCount());

        Node node2 = grp1.getChild (0);
        assertEquals (grp2, node2);

        Node node3 = grp1.getChild (1);
        assertEquals (grp3, node3);


    }

}