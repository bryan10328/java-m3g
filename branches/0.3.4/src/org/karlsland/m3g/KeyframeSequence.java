package org.karlsland.m3g;

public class KeyframeSequence extends Object3D {
    
    public final static int CONSTANT = 192;
    public final static int LINEAR   = 176;
    public final static int LOOP     = 193;
    public final static int SLERP    = 177;
    public final static int SPLINE   = 178;
    public final static int SQUAD    = 179;
    public final static int STEP     = 180;

    native private void   jni_initialize           (int numKeyframes, int numComponents, int interpolation);
    native private void   jni_finalize             ();
    native private int    jni_getComponentCount    ();
    native private int    jni_getDuration          ();
    native private int    jni_getInterpolationType ();
    native private int    jni_getKeyframe          (int index, float[] value);
    native private int    jni_getKeyframeCount     ();
    native private int    jni_getRepeatMode        ();
    native private int    jni_getValidRangeFirst   ();
    native private int    jni_getValidRangeLast    ();
    native private void   jni_setDuration          (int duration);
    native private void   jni_setKeyframe          (int index, int time, float[] value);
    native private void   jni_setRepeatMode        (int mode);
    native private void   jni_setValidRange        (int first, int last);
    native private String jni_print                ();

    public KeyframeSequence (int numKeyframes, int numComponents, int interpolation) {
    	jni_initialize (numKeyframes, numComponents, interpolation);
    }

    @Override
    protected void finalize () {
        jni_finalize ();
    }

    public int getComponentCount () {
        return jni_getComponentCount ();
    }

    public int getDuration () {
        return jni_getDuration ();
    }

    public int getInterpolationType () {
        return jni_getInterpolationType ();
    }

    public int getKeyframe (int index, float[] value) {
        return jni_getKeyframe (index, value);
    }

    public int getKeyframeCount () {
        return jni_getKeyframeCount ();
    }

    public int getRepeatMode () {
        return jni_getRepeatMode ();
    }

    public int getValidRangeFirst () {
        return jni_getValidRangeFirst ();
    }

    public int getValidRangeLast () {
        return jni_getValidRangeLast ();
    }

    public void setDuration (int duration) {
        jni_setDuration (duration);
    }

    public void setKeyframe (int index, int time, float[] value) {
        jni_setKeyframe (index, time, value);
    }

    public void setRepeatMode (int mode) {
        jni_setRepeatMode (mode);
    }

    public void setValidRange (int first, int last) {
        jni_setValidRange (first, last);
    }
    
    @Override
    public String toString () {
        return jni_print ();
    }

}