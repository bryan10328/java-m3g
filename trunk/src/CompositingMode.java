package org.karlsland.m3g;

public class CompositingMode extends Object3D {

    public final static int ALPHA       = 64;
    public final static int ALPHA_ADD   = 65;
    public final static int MODULATE    = 66;
    public final static int MODULATE_X2 = 67;
    public final static int REPLACE     = 68;

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

    public boolean isDepthWrtiteEnalbed () {
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

    public void setDepthWrieEnable (boolean enable) {
    }



}
