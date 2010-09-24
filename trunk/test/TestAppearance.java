import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.junit.Ignore;
import org.karlsland.m3g.*;

public class TestAppearance {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestAppearance.class);
    }

    @Test
    public void testInitialize () {
        Appearance app = new Appearance ();
        
        assertEquals (0   , app.getLayer());
        assertEquals (null, app.getPolygonMode());
        assertEquals (null, app.getCompositingMode());
        assertEquals (null, app.getTexture(0));
        assertEquals (null, app.getTexture(1));
        assertEquals (null, app.getTexture(2));
        assertEquals (null, app.getTexture(3));
        assertEquals (null, app.getMaterial());
        assertEquals (null, app.getFog());
    }

    @Test
    public void testGetterSetter () {
        Appearance      app   = new Appearance ();
        PolygonMode     pmode = new PolygonMode ();
        CompositingMode cmode = new CompositingMode ();
        Image2D         img   = new Image2D (Image2D.LUMINANCE, 64, 64);
        Texture2D       tex0  = new Texture2D (img);
        Texture2D       tex1  = new Texture2D (img);
        Texture2D       tex2  = new Texture2D (img);
        Texture2D       tex3  = new Texture2D (img);
        Material        mat   = new Material ();
        Fog             fog   = new Fog ();

        app.setLayer           (1);
        app.setPolygonMode     (pmode);
        app.setCompositingMode (cmode);
        app.setTexture         (0, tex0);
        app.setTexture         (1, tex1);
        app.setTexture         (2, tex2);
        app.setTexture         (3, tex3);
        app.setMaterial        (mat);
        app.setFog             (fog);
        
        assertEquals (1    , app.getLayer());
        assertEquals (pmode, app.getPolygonMode());
        assertEquals (cmode, app.getCompositingMode());
        assertEquals (tex0 , app.getTexture(0));
        assertEquals (tex1 , app.getTexture(1));
        assertEquals (tex2 , app.getTexture(2));
        assertEquals (tex3 , app.getTexture(3));
        assertEquals (mat  , app.getMaterial());
        assertEquals (fog  , app.getFog());
        

    }

}