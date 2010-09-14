package org.karlsland.m3g;

public class PolygonMode extends Object3D {
    
    public final static int CULL_BACK    = 160;
    public final static int CULL_FRONT   = 161;
    public final static int CULL_NONE    = 162;
    public final static int SHADE_FLAT   = 164;
    public final static int SHADE_SMOOTH = 165;
    public final static int WINDING_CCW  = 168;
    public final static int WINDING_CW   = 169;

    public PolygonMode () {
    }

    public void finalize () {
    }

    public int getCulling () {
        return 0;
    }

    public int getShding () {
        return 0;
    }

    public int getWinding () {
        return 0;
    }

    public boolean isLocalCameraLightingEnaled () {
        return false;
    }

    public boolean isPerspectiveCorrectionEnabled () {
        return false;
    }

    public boolean isTwoSidedLightingEnabled () {
        return false;
    }

    public void setCulling (int mode) {
    }

    public void setLocalCameraLightingEnable (boolean enable) {
    }

    public void setPerspectiveCorrectionEnable (boolean enable) {
    }

    public void setShading (int mdoe) {
    }

    public void setTwoSidedLightingEnable (boolean enable) {
    }

    public void setWinding (int mode) {
    }


}