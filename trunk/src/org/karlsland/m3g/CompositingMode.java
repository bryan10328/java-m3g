package org.karlsland.m3g;

public class CompositingMode extends Object3D {

    public final static int ALPHA       = 64;
    public final static int ALPHA_ADD   = 65;
    public final static int MODULATE    = 66;
    public final static int MODULATE_X2 = 67;
    public final static int REPLACE     = 68;

    native private void    jni_initialize           ();
    native private void    jni_finalize             ();
    native private float   jni_getAlphaThreshold    ();
    native private int     jni_getBlending          ();
    native private float   jni_getDepthOffsetFactor ();
    native private float   jni_getDepthOffsetUnits  ();
    native private boolean jni_isAlphaWriteEnable   ();
    native private boolean jni_isColorWriteEnable   ();
    native private boolean jni_isDepthTestEnabled   ();
    native private boolean jni_isDepthWriteEnabled  ();
    native private void    jni_setAlphaThreshold    (float   threshold);
    native private void    jni_setAlphaWriteEnable  (boolean enable);
    native private void    jni_setBlending          (int     mode  );
    native private void    jni_setColorWriteEnable  (boolean enable);
    native private void    jni_setDepthOffset       (float   factor, float units);
    native private void    jni_setDepthTestEnable   (boolean enable);
    native private void    jni_setDepthWriteEnable  (boolean enable);
    native private String  jni_print                ();

    public CompositingMode () {
    	jni_initialize ();
    }

    @Override
    protected void finalize () {
        jni_finalize ();
    }

    public float getAlphaThreshold () {
        return jni_getAlphaThreshold ();
    }

    public int getBlending () {
        return jni_getBlending ();
    }

    public float getDepthOffsetFactor () {
        return jni_getDepthOffsetFactor ();
    }

    public float getDepthOffsetUnits () {
        return jni_getDepthOffsetUnits ();
    }

    public boolean isAlphaWriteEnabled () {
        return jni_isAlphaWriteEnable ();
    }

    public boolean isColorWriteEnabled () {
        return jni_isColorWriteEnable ();
    }

    public boolean isDepthTestEnabled () {
        return jni_isDepthTestEnabled ();
    }

    public boolean isDepthWriteEnabled () {
        return jni_isDepthWriteEnabled ();
    }

    public void setAlphaThreshold (float threshold) {
        jni_setAlphaThreshold (threshold);
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

    public String toString () {
        return jni_print ();
    }


}
