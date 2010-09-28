import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.junit.AfterClass;

public class TearDown {

    private static JniGlut glut;

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TearDown.class);
    } 

    @Test
    public void testDummy () {
        // 最低1つは必要
    }


    @AfterClass
    public static void testTearDown () {
        System.out.println ("Global TearDown is called.");
        System.out.println ("GC start");
        System.gc ();
        System.out.println ("GC done================================================");
    }


}