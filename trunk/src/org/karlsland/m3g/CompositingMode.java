package org.karlsland.m3g;

public class CompositingMode extends Object3D {

    public final static int ALPHA       = 64;
    public final static int ALPHA_ADD   = 65;
    public final static int MODULATE    = 66;
    public final static int MODULATE_X2 = 67;
    public final static int REPLACE     = 68;

    static {
        System.loadLibrary ("javam3g");
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
    native private void    jni_setAlphaThreashold   (float   threashold);
    native private void    jni_setAlphaWriteEnable  (boolean enable);
    native private void    jni_setBlending          (int     mode  );
    native private void    jni_setColorWriteEnable  (boolean enable);
    native private void    jni_setDepthOffset       (float   factor, float units);
    native private void    jni_setDepthTestEnable   (boolean enable);
    native private void    jni_setDepthWriteEnable  (boolean enable);
    native private void    jni_print                ();

    public CompositingMode () {
        jni_initialzie ();
    }

    public void finalize () {
        jni_finalize ();
    }

    public float getAlphaThreshold () {
        float th = jni_getAlphaThreshold ();
        return th;
    }

    public int getBlending () {
        int mode = jni_getBlending ();
        return mode;
    }

    public float getDepthOffsetFactor () {
        float f = jni_getDepthOffsetFactor ();
        return f;
    }

    public float getDepthOffsetUnits () {
        float u = jni_getDepthOffsetUnits ();
        return u;
    }

    public boolean isAlphaWriteEnabled () {
        boolean enabled = jni_isAlphaWriteEnable ();
        return enabled;
    }

    public boolean isColorWriteEnalbed () {
        boolean enabled = jni_isColorWriteEnable ();
        return enabled;
    }

    public boolean isDepthTestEnabled () {
        boolean enabled = jni_isDepthTestEnabled ();
        return enabled;
    }

    public boolean isDepthWriteEnabled () {
        boolean enabled = jni_isDepthWriteEnabled ();
        return enabled;
    }

    public void setAlphaThreashold (float threashold) {
        jni_setAlphaThreashold (threashold);
    }

    public void setAlphaWriteEnable (boolean enable) {
        jni_setAlphaWriteEnable (enable);
    }

    public void setBlending (int mode) {
        jni_setBlending (mode);
    }

    public void setColorWriteEnable (boolean enable) {
        jni_setColorWriteEnable (enable);
    }

    public void setDepthOffset (float factor, float units) {
        jni_setDepthOffset (factor, units);
    }

    public void setDepthTestEnable (boolean enable) {
        jni_setDepthTestEnable (enable);
    }

    public void setDepthWriteEnable (boolean enable) {
        jni_setDepthWriteEnable (enable);
    }

    public void print () {
        jni_print ();
    }


}
