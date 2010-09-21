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
        // 当分保留
    }




}
