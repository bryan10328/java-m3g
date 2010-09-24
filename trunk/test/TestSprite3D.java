import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.junit.Ignore;
import org.karlsland.m3g.*;

public class TestSprite3D {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestSprite3D.class);
    }

    @Test
    public void testInitialize () {
        Image2D    img = new Image2D  (Image2D.RGB, 16, 32);
        Appearance app = new Appearance ();
        Sprite3D   spr = new Sprite3D (true, img, app);
        
        assertEquals (true, spr.isScaled());
        assertEquals (img , spr.getImage());
        assertEquals (app , spr.getAppearance());
        assertEquals (0   , spr.getCropX());
        assertEquals (0   , spr.getCropY());
        assertEquals (16  , spr.getCropWidth());
        assertEquals (32  , spr.getCropHeight());
    }


    @Test
    public void testGetterSetter () {
        Image2D    img = new Image2D  (Image2D.RGB, 16, 32);
        Appearance app = new Appearance ();
        Sprite3D   spr = new Sprite3D (true, img, app);
        Image2D    img2 = new Image2D  (Image2D.RGB, 32, 64);
        Appearance app2 = new Appearance ();

        spr.setImage (img2);
        spr.setAppearance (app2);

        assertEquals (true, spr.isScaled());
        assertEquals (img2, spr.getImage());
        assertEquals (app2, spr.getAppearance());
        assertEquals (0   , spr.getCropX());
        assertEquals (0   , spr.getCropY());
        assertEquals (32  , spr.getCropWidth());
        assertEquals (64  , spr.getCropHeight());
    }
}