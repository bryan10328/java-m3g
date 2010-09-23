import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.junit.BeforeClass;
import org.junit.AfterClass;


public class TestSetup {

    private static JniGlut glut;

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestSetup.class);
    } 

    @Test
    public void testDummy () {
        // 最低1つは必要
    }

    @BeforeClass
    public static void testSetup () {
        glut = new JniGlut ();
        glut.init ();
    }

    @AfterClass
    public static void testTearDown () {

    }


}