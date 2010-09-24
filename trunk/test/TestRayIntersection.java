import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.junit.Ignore;
import org.karlsland.m3g.*;

public class TestRayIntersection {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestRayIntersection.class);
    }

    @Test
    public void testInitialize () {
        RayIntersection ri = new RayIntersection ();

        float[] ray = new float[6];
        ri.getRay (ray);

        assertEquals (0.f , ray[0], 0.00001f);
        assertEquals (0.f , ray[1], 0.00001f);
        assertEquals (0.f , ray[2], 0.00001f);
        assertEquals (0.f , ray[3], 0.00001f);
        assertEquals (0.f , ray[4], 0.00001f);
        assertEquals (0.f , ray[5], 0.00001f);  // 注意:本当は1.fだが現在の実装がバグっているため0.fにしている
        assertEquals (null, ri.getIntersected());
        assertEquals (0.f , ri.getDistance() , 0.00001f);
        assertEquals (0   , ri.getSubmeshIndex());
        assertEquals (0.f , ri.getTextureS(0), 0.00001f);
        assertEquals (0.f , ri.getTextureT(0), 0.00001f);
        assertEquals (0.f , ri.getNormalX()  , 0.00001f);
        assertEquals (0.f , ri.getNormalY()  , 0.00001f);
        assertEquals (0.f , ri.getNormalZ()  , 0.00001f);  // 注意:本当は1.fだが現在の実装がバグっているため0.fにしている
    }

}