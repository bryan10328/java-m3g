package org.karlsland.m3g;

public class KeyframeSequence {
    
    public final static int CONSTANT = 192;
    public final static int LINEAR   = 176;
    public final static int LOOP     = 193;
    public final static int SLERP    = 177;
    public final static int SPLINE   = 178;
    public final static int SQUAD    = 179;
    public final static int STEP     = 180;

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