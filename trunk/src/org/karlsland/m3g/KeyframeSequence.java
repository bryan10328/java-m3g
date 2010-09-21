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
        System.loadLibrary ("javam3g");
    }
    native private void jni_initialize           (int numKeyframes, int numComponents, int interpolation);
    native private void jni_finalize             ();
    native private int  jni_getComponentCount    ();
    native private int  jni_getDuration          ();
    native private int  jni_getInterpolationType ();
    native private int  jni_getKeyframe          (int index, float[] value);
    native private int  jni_getKeyframeCount     ();
    native private int  jni_getRepeatMode        ();
    native private int  jni_getValidRangeFirst   ();
    native private int  jni_getValidRangeLast    ();
    native private void jni_setDuration          (int duration);
    native private void jni_setKeyframe          (int index, int time, float[] value);
    native private void jni_setRepeateMode       (int mode);
    native private void jni_setValidRange        (int first, int last);
    native private void jni_print                ();

    public KeyframeSequence (int numKeyframes, int numComponents, int interpolation) {
        jni_initialize (numKeyframes, numComponents, interpolation);
    }

    public void finalize () {
        jni_finalize ();
    }

    public int getComponentCount () {
        int count = jni_getComponentCount ();
        return count;
    }

    public int getDuration () {
        int duration = jni_getDuration ();
        return duration;
    }

    public int getInterpolationType () {
        int type = jni_getInterpolationType ();
        return type;
    }

    public int getKeyframe (int index, float[] value) {
        int time = jni_getKeyframe (index, value);
        return time;
    }

    public int getKeyframeCount () {
        int count = jni_getKeyframeCount ();
        return count;
    }

    public int getRepeatMode () {
        int mode = jni_getRepeatMode ();
        return mode;
    }

    public int getValidRangeFirst () {
        int first = jni_getValidRangeFirst ();
        return first;
    }

    public int getValidRangeLast () {
        int last = jni_getValidRangeLast ();
        return last;
    }

    public void setDuration (int duration) {
        jni_setDuration (duration);
    }

    public void setKeyframe (int index, int time, float[] value) {
        jni_setKeyframe (index, time, value);
    }

    public void setRepeatMode (int mode) {
        jni_setRepeateMode (mode);
    }

    public void setValidRange (int first, int last) {
        jni_setValidRange (first, last);
    }
    
    public void print () {
        jni_print ();
    }

}