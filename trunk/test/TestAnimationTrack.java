import static org.junit.Assert.*;
import junit.framework.JUnit4TestAdapter;
import org.junit.Test;
import org.karlsland.m3g.*;

public class TestAnimationTrack {

    public static junit.framework.Test suite() {
        return new JUnit4TestAdapter(TestAnimationTrack.class);
    }

    @Test
    public void testInitialize () {
        KeyframeSequence keySeq    = new KeyframeSequence (4, 3, KeyframeSequence.LINEAR);
        AnimationTrack   animTrack = new AnimationTrack (keySeq, AnimationTrack.SCALE);
        
        assertEquals (null  , animTrack.getController());
        assertEquals (keySeq, animTrack.getKeyframeSequence());
        assertEquals (AnimationTrack.SCALE, animTrack.getTargetProperty());
    }

    @Test
    public void testGetterSetter () {
        KeyframeSequence keySeq    = new KeyframeSequence (4, 3, KeyframeSequence.LINEAR);
        AnimationTrack   animTrack = new AnimationTrack (keySeq, AnimationTrack.SCALE);
        AnimationController animContr = new AnimationController ();

        animTrack.setController (animContr);

        assertEquals (animContr  , animTrack.getController());
        assertEquals (keySeq, animTrack.getKeyframeSequence());
        assertEquals (AnimationTrack.SCALE, animTrack.getTargetProperty());
    }
}