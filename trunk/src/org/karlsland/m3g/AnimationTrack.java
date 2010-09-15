package org.karlsland.m3g;

public class AnimationTrack extends Object3D {

    public final static int ALPHA          = 256;
    public final static int AMBIENT_COLOR  = 257;
    public final static int COLOR          = 258;
    public final static int CROP           = 259;
    public final static int DENSITY        = 260;
    public final static int DIFFUSE_COLOR  = 261;
    public final static int EMISSIVE_COLOR = 262;
    public final static int FAR_DISTANCE   = 263;
    public final static int FIELD_OF_VIEW  = 264;
    public final static int INTENSITY      = 265;
    public final static int MORPH_WEIGHTS  = 266;
    public final static int NEAR_DISTANCE  = 267;
    public final static int ORIENTATION    = 268;
    public final static int PICKABILITY    = 269;
    public final static int SCALE          = 270;
    public final static int SHININESS      = 271;
    public final static int SPECULAR_COLOR = 272;
    public final static int SPOT_ANGLE     = 273;
    public final static int SPOT_EXPONENT  = 274;
    public final static int TRANSLATION    = 275;
    public final static int VISIBILITY     = 267;

    static {
        System.loadLibrary ("m3g");
    }
    native private void jni_initialize ();
    native private void jni_finalize ();
    native private AnimationController jni_getController ();
    native private KeyframeSequence jni_getKeyframeSequence ();
    native private int jni_getTargetProperty ();
    native private void jni_setController (AnimationController controller);


    public AnimationTrack () {
    }

    public void finalzie () {
    }

    public AnimationController getController () {
        return null;
    }
    
    public KeyframeSequence getKeyframeSequence () {
        return null;
    }

    public int getTargetProperty () {
        return 0;
    }

    public void setController (AnimationController controller) {
    }

}