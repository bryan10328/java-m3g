import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.karlsland.m3g.*;

public class TestObject3D {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestObject3D.class);
    }

    @Test
    public void testUserID () {
        Group grp = new Group ();

        grp.setUserID (100);
        int id = grp.getUserID ();
        assertEquals (100, id);
    }

    @Test
    public void testUserObject () {
        Group grp1 = new Group ();
        grp1.setUserID (100);
        Group grp2 = new Group ();
        grp2.setUserObject (grp1);

        Group grp3 = (Group)(grp2.getUserObject());

        assertEquals (100, grp3.getUserID());
    }

    @Test
    public void testDuplicate () {
        Group grp1 = new Group ();
        Group grp2 = new Group ();
        grp1.addChild (grp2);
        Group grp3 = (Group)grp1.duplicate ();

        assertEquals  (1, grp3.getChildCount());
        assertNotSame (grp2, grp3.getChild(0));
    }



}
