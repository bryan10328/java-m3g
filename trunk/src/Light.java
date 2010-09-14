package org.karlsland.m3g;

public class Light extends Object3D {

    public final static int AMBIENT     = 128;
    public final static int DIRECTIONAL = 129;
    public final static int OMNI        = 130;
    public final static int SPOT        = 131;

    public Light () {
    }

    public void finalize () {
    }

    public int getColor () {
        return 0;
    }

    public float getConstantAttenuation () {
        return 0;
    }

    public float getIntensity () {
        return 0;
    }

    public float getLinearAttenuation () {
        return 0;
    }

    public int getMode () {
        return 0;
    }

    public float getQuadraticAttenuation () {
        return 0;
    }

    public float getSpotAngle () {
        return 0;
    }

    public float getSpotExponent () {
        return 0;
    }

    public void setAttenuation (float constant, float linear, float quadratic) {
    }

    public void setColor (int RGB) {
    }

    public void setIntensity (float intensity) {
    }

    public void setMode (int mode) {
    }

    public void setSpotAngle (float angle) {
    }

    public void setSpotExponent (float exponent) {
    }



}