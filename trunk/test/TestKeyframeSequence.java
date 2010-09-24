import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.junit.Ignore;
import org.karlsland.m3g.*;

public class TestKeyframeSequence {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestKeyframeSequence.class);
    }

    @Test
    public void testInitialize () {
        KeyframeSequence key_seq = new KeyframeSequence (4, 3, KeyframeSequence.SPLINE);
        
        assertEquals (4, key_seq.getKeyframeCount());
        assertEquals (3, key_seq.getComponentCount());
        assertEquals (KeyframeSequence.SPLINE, key_seq.getInterpolationType());
    }

    @Test
    public void testSetterGetter  () {
        KeyframeSequence key_seq = new KeyframeSequence (4, 3, KeyframeSequence.SPLINE);
        
        key_seq.setDuration (100);
        key_seq.setRepeatMode (KeyframeSequence.LOOP);
        key_seq.setValidRange (1, 3);

        assertEquals (4, key_seq.getKeyframeCount());
        assertEquals (3, key_seq.getComponentCount());
        assertEquals (KeyframeSequence.SPLINE, key_seq.getInterpolationType());

        assertEquals (100, key_seq.getDuration());
        assertEquals (KeyframeSequence.LOOP, key_seq.getRepeatMode());
        assertEquals (1, key_seq.getValidRangeFirst());
        assertEquals (3, key_seq.getValidRangeLast());
    }

}
