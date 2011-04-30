package org.karlsland.m3g;

public class PolygonMode extends Object3D {
    
    public final static int CULL_BACK    = 160;
    public final static int CULL_FRONT   = 161;
    public final static int CULL_NONE    = 162;
    public final static int SHADE_FLAT   = 164;
    public final static int SHADE_SMOOTH = 165;
    public final static int WINDING_CCW  = 168;
    public final static int WINDING_CW   = 169;

    native private void    jni_initialize ();
    native private void    jni_finalize   ();
    native private int     jni_getCulling ();
    native private int     jni_getShading ();
    native private int     jni_getWinding ();
    native private boolean jni_isLocalCameraLightingEnabled   ();
    native private boolean jni_isPerspectiveCorrectionEnabled ();
    native private boolean jni_isTwoSidedLightingEnabled      ();
    native private void    jni_setCulling                     (int     mode);
    native private void    jni_setLocalCameraLightingEnable   (boolean enable);
    native private void    jni_setPerspectiveCorrectionEnable (boolean enable);
    native private void    jni_setShading                     (int     mode);
    native private void    jni_setTwoSidedLightingEnable      (boolean enable);
    native private void    jni_setWinding                     (int     mdoe);
    native private String  jni_print                          ();

    public PolygonMode () {
    	jni_initialize ();
    }

    @Override
    protected void finalize () {
        jni_finalize ();
    }

    public int getCulling () {
        return jni_getCulling ();
    }

    public int getShading () {
        return jni_getShading ();
    }

    public int getWinding () {
        return jni_getWinding ();
    }

    public boolean isLocalCameraLightingEnabled () {
        return jni_isLocalCameraLightingEnabled ();
    }

    public boolean isPerspectiveCorrectionEnabled () {
        return jni_isPerspectiveCorrectionEnabled ();
    }

    public boolean isTwoSidedLightingEnabled () {
        return jni_isTwoSidedLightingEnabled ();
    }

    public void setCulling (int mode) {
        jni_setCulling (mode);
    }

    public void setLocalCameraLightingEnable (boolean enable) {
        jni_setLocalCameraLightingEnable (enable);
    }

    public void setPerspectiveCorrectionEnable (boolean enable) {
        jni_setPerspectiveCorrectionEnable (enable);
    }

    public void setShading (int mode) {
        jni_setShading (mode);
    }

    public void setTwoSidedLightingEnable (boolean enable) {
        jni_setTwoSidedLightingEnable (enable);
    }

    public void setWinding (int mode) {
        jni_setWinding (mode);
    }

    @Override
    public String toString () {
        return jni_print ();
    }

}