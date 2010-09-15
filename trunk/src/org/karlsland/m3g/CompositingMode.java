package org.karlsland.m3g;

public class CompositingMode extends Object3D {

    public final static int ALPHA       = 64;
    public final static int ALPHA_ADD   = 65;
    public final static int MODULATE    = 66;
    public final static int MODULATE_X2 = 67;
    public final static int REPLACE     = 68;

    static {
        System.loadLibrary ("m3g");
    }
    native private void    jni_initialzie           ();
    native private void    jni_finalize             ();
    native private float   jni_getAlphaThreshold    ();
    native private int     jni_getBlending          ();
    native private float   jni_getDepthOffsetFactor ();
    native private float   jni_getDepthOffsetUnits  ();
    native private boolean jni_isAlphaWriteEnable   ();
    native private boolean jni_isColorWriteEnable   ();
    native private boolean jni_isDepthTestEnabled   ();
    native private boolean jni_isDepthWriteEnabled  ();
    native private void    jni_setAlphaThreashold   (float threashold);
    native private void    jni_setAlphaWriteEnable  (boolean enable);
    native private void    jni_setBlending          (int mode);
    native private void    jni_setColorWriteEnable  (boolean enable);
    native private void    jni_setDepthOffset       (float factor, float units);
    native private void    jni_setDepthTestEnable   (boolean enable);
    native private void    jni_setDepthWriteEnable  (boolean enable);

    public CompositingMode () {
    }

    public void finalize () {
    }

    public float getAlphaThreshold () {
        return 0;
    }

    public int getBlending () {
        return 0;
    }

    public float getDepthOffsetFactor () {
        return 0;
    }

    public float getDepthOffsetUnits () {
        return 0;
    }

    public boolean isAlphaWriteEnabled () {
        return false;
    }

    public boolean isColorWriteEnalbed () {
        return false;
    }

    public boolean isDepthTestEnabled () {
        return false;
    }

    public boolean isDepthWriteEnabled () {
        return false;
    }

    public void setAlphaThreashold (float threashold) {
    }

    public void setAlphaWriteEnable (boolean enable) {
    }

    public void setBlending (int mode) {
    }

    public void setColorWriteEnable (boolean enable) {
    }

    public void setDepthOffset (float factor, float units) {
    }

    public void setDepthTestEnable (boolean enable) {
    }

    public void setDepthWriteEnable (boolean enable) {
    }



}
