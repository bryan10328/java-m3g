import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.junit.Ignore;
import org.karlsland.m3g.*;

public class TestBackground {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestBackground.class);
    }

    @Test
    public void testInitialize () {
        Background bg = new Background ();

        assertEquals (true,              bg.isColorClearEnabled());
        assertEquals (true,              bg.isDepthClearEnabled());
        assertEquals (0x00000000,        bg.getColor());
        assertEquals (null,              bg.getImage());
        assertEquals (Background.BORDER, bg.getImageModeX());
        assertEquals (Background.BORDER, bg.getImageModeY());
    }

    @Test
    public void testGetterSetter () {
        Background bg = new Background ();
        Image2D img = new Image2D (Image2D.RGBA, 64, 64);

        bg.setColor            (0x12345678);
        bg.setColorClearEnable (false);
        bg.setDepthClearEnable (false);
        bg.setImage            (img);
        bg.setCrop             (1,2,3,4);
        bg.setImageMode        (Background.REPEAT, Background.REPEAT);

        assertEquals (false,             bg.isColorClearEnabled());
        assertEquals (false,             bg.isDepthClearEnabled());
        assertEquals (0x12345678,        bg.getColor());
        assertEquals (img,               bg.getImage());
        assertEquals (Background.REPEAT, bg.getImageModeX());
        assertEquals (Background.REPEAT, bg.getImageModeY());
        assertEquals (1,                 bg.getCropX());
        assertEquals (2,                 bg.getCropY());
        assertEquals (3,                 bg.getCropWidth());
        assertEquals (4,                 bg.getCropHeight());
    }


}