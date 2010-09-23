import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.junit.Ignore;
import org.karlsland.m3g.*;

public class TestMaterial {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestMaterial.class);
    }

    @Test
    public void testInitialize () {
        Material mat = new Material ();

        assertEquals (false     , mat.isVertexColorTrackingEnabled());
        assertEquals (0x00333333, mat.getColor(Material.AMBIENT));
        assertEquals (0xffcccccc, mat.getColor(Material.DIFFUSE));
        assertEquals (0x00000000, mat.getColor(Material.EMISSIVE));
        assertEquals (0x00000000, mat.getColor(Material.SPECULAR));
        assertEquals (0         , mat.getShininess(), 0.00001f);
    }

    @Test
    public void testGetterSetter () {
        Material mat = new Material ();
        
        mat.setVertexColorTrackingEnable (true);
        mat.setColor (Material.AMBIENT , 0x12345678);
        mat.setColor (Material.DIFFUSE , 0x34567890);
        mat.setColor (Material.EMISSIVE, 0x567890ab);
        mat.setColor (Material.SPECULAR, 0x7890abcd);
        mat.setShininess (1.f);

        assertEquals (true      , mat.isVertexColorTrackingEnabled());
        assertEquals (0x00345678, mat.getColor(Material.AMBIENT));
        assertEquals (0x34567890, mat.getColor(Material.DIFFUSE));
        assertEquals (0x007890ab, mat.getColor(Material.EMISSIVE));
        assertEquals (0x0090abcd, mat.getColor(Material.SPECULAR));
        assertEquals (1.f       , mat.getShininess(), 0.00001f);
    }

}
