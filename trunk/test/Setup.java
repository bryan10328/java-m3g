import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.junit.BeforeClass;

public class Setup {

    private static JniGlut glut;

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(Setup.class);
    } 

    @Test
    public void testDummy () {
        // 最低1つは必要
    }

    @BeforeClass
    public static void testSetup () {
        System.out.println ("Global Setup is called.========================================");
        glut = new JniGlut ();
        glut.init ();
    }



}