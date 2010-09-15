package org.karlsland.m3g;

public class KeyframeSequence {
    
    public final static int CONSTANT = 192;
    public final static int LINEAR   = 176;
    public final static int LOOP     = 193;
    public final static int SLERP    = 177;
    public final static int SPLINE   = 178;
    public final static int SQUAD    = 179;
    public final static int STEP     = 180;

    static {
        System.loadLibrary ("m3g");
    }
    native private void jni_initialize           ();
    native private void jni_finalize             ();
    native private int  jni_getComponentCount    ();
    native private int  jni_getDuration          ();
    native private int  jni_getInterpolationType ();
    native private int  jni_getKeyframe          (int index, float[] value);
    native private int  jni_getKeyframeCount     ();
    native private int  jni_getRepeatMode        ();
    native private int  jni_getValidRangeFirst   ();
    native private int  jni_getValidRangeLast    ();
    native private int  jni_setDuration          (int duration);
    native private int  jni_setKeyframe          (int index, int time, float[] value);
    native private void jni_setRepeateMode       (int mode);
    native private void jni_setvalidRange        (int first, int last);

    public KeyframeSequence () {
    }

    public void finalize () {
    }

    public int getComponentCount () {
        return 0;
    }

    public int getDuration () {
        return 0;
    }

    public int getInterpolationType () {
        return 0;
    }

    public int getKeyframe (int index, float[] value) {
        return 0;
    }

    public int getKeyframeCount () {
        return 0;
    }

    public int getRepeatMode () {
        return 0;
    }

    public int getValidRangeFirst () {
        return 0;
    }

    public int getValidRangeLast () {
        return 0;
    }

    public int setDuration (int duration) {
        return 0;
    }

    public int setKeyframe (int index, int time, float[] value) {
        return 0;
    }

    public void setRepeatMode (int mdoe) {
    }

    public void setValidRange (int first, int last) {
    }
    

}