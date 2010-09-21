import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.karlsland.m3g.*;

public class TestNode {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestNode.class);
    }

    @Test
    public void testInitialize () {
        Node node = new Group ();
        
        assertEquals (1.f , node.getAlphaFactor(), 0.0001f);
        assertEquals (null, node.getParent());
        assertEquals (-1  , node.getScope());
        assertEquals (true, node.isPickingEnabled());
        assertEquals (true, node.isRenderingEnabled());
        assertEquals (null,      node.getAlignmentReference (Node.Z_AXIS));
        assertEquals (Node.NONE, node.getAlignmentTarget (Node.Z_AXIS));
        assertEquals (null,      node.getAlignmentReference (Node.Y_AXIS));
        assertEquals (Node.NONE, node.getAlignmentTarget (Node.Y_AXIS));
    }

    @Test 
    public void testGetterSetter () {
        Node node = new Group ();

        node.setAlphaFactor (0.5f);
        assertEquals (0.5f, node.getAlphaFactor(), 0.0001f);

        node.setPickingEnable (false);
        assertEquals (false, node.isPickingEnabled());

        node.setRenderingEnable (false);
        assertEquals (false, node.isRenderingEnabled());

        node.setScope (65536);
        assertEquals (65536, node.getScope());
    }

    @Test
    public void testAlignment () {
        Node node = new Group ();
        Node zRef = new Group ();
        Node yRef = new Group ();
        
        node.setAlignment (zRef, Node.ORIGIN, yRef, Node.ORIGIN);

        assertEquals (zRef,        node.getAlignmentReference (Node.Z_AXIS));
        assertEquals (Node.ORIGIN, node.getAlignmentTarget (Node.Z_AXIS));
        assertEquals (yRef,        node.getAlignmentReference (Node.Y_AXIS));
        assertEquals (Node.ORIGIN, node.getAlignmentTarget (Node.Y_AXIS));
    }
}
