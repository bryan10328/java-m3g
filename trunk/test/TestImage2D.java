import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.karlsland.m3g.*;

public class TestImage2D {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestImage2D.class);
    }

    @Test
    public void testInitialize () {
        Image2D img0 = new Image2D (Image2D.RGBA, 48, 32);
        assertEquals (Image2D.RGBA, img0.getFormat());
        assertEquals (48          , img0.getWidth());
        assertEquals (32          , img0.getHeight());
        assertEquals (true        , img0.isMutable());

        byte[]  pixels1 = new byte[16*96*3];
        Image2D img1    = new Image2D (Image2D.RGB, 16, 96, pixels1);
        assertEquals (Image2D.RGB , img1.getFormat());
        assertEquals (16          , img1.getWidth());
        assertEquals (96          , img1.getHeight());
        assertEquals (false       , img1.isMutable());

        // パレットを使うコンストラクタは未実装。
        // 実装され次第コメントイン
        //byte[]  pixels2  = new byte[4*4*1]; // パレットのインデックス
        //byte[]  palette2 = new byte[256*3]; // RGB,RGB,RGB,...
        //pixels2 = new byte[]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
        //Image2D img2     = new Image2D (Image2D.RGB, 4, 4, pixels2, palette2);
        //assertEquals (Image2D.RGB , img2.getFormat());
        //assertEquals (4           , img2.getWidth());
        //assertEquals (4           , img2.getHeight());
        //assertEquals (false       , img2.isMutable());

        // 注意:
        // Image2D (int format, java.lang.Objct image)
        // はまだ未実装。テストもなし
    }
    

    @Test
    public void testGetterSetter () {
        byte[] pixels = new byte[16*16*1];
        for (int y = 0; y < 16; y++) {
            for (int x = 0; x < 16; x++) {
                pixels[y*16+x] = (byte)((x+y)*8);
            }
        }
        Image2D img = new Image2D (Image2D.LUMINANCE, 16, 16);
        
        img.set (0, 0, 16, 16, pixels);
        img.writePng ("simple-image.png");

        // 注意: 画像を目視で確認する
    }
}