package org.karlsland.m3g;

public class Light extends Node {

    public final static int AMBIENT     = 128;
    public final static int DIRECTIONAL = 129;
    public final static int OMNI        = 130;
    public final static int SPOT        = 131;

    static {
        System.loadLibrary ("javam3g");
    }
    native private void  jni_initialize              ();
    native private void  jni_finalize                ();
    native private int   jni_getColor                ();
    native private float jni_getConstantAttenuation  ();
    native private float jni_getIntensity            ();
    native private float jni_getLinearAttenuation    ();
    native private int   jni_getMode                 ();
    native private float jni_getQuadraticAttenuation ();
    native private float jni_getSpotAngle            ();
    native private float jni_getSpotExponent         ();
    native private void  jni_setAttenuation          (float constant, float linear, float quadratic);
    native private void  jni_setColor                (int   RGB);
    native private void  jni_setIntensity            (float intensity);
    native private void  jni_setMode                 (int   mode);
    native private void  jni_setSpotAngle            (float angle);
    native private void  jni_setSpotExponent         (float exponent);
    native private void  jni_print                   ();

    public Light () {
        jni_initialize ();
    }

    public void finalize () {
        jni_finalize ();
    }

    public int getColor () {
        int color = jni_getColor ();
        return color;
    }

    public float getConstantAttenuation () {
        float cons = jni_getConstantAttenuation ();
        return cons;
    }

    public float getIntensity () {
        float intensity = jni_getIntensity ();
        return intensity;
    }

    public float getLinearAttenuation () {
        float linear = jni_getLinearAttenuation ();
        return linear;
    }

    public int getMode () {
        int mode = jni_getMode ();
        return mode;
    }

    public float getQuadraticAttenuation () {
        float quad = jni_getQuadraticAttenuation ();
        return quad;
    }

    public float getSpotAngle () {
        float angle = jni_getSpotAngle ();
        return angle;
    }

    public float getSpotExponent () {
        float expo = jni_getSpotExponent ();
        return expo;
    }

    public void setAttenuation (float constant, float linear, float quadratic) {
        jni_setAttenuation (constant, linear, quadratic);
    }

    public void setColor (int RGB) {
        jni_setColor (RGB);
    }

    public void setIntensity (float intensity) {
        jni_setIntensity (intensity);
    }

    public void setMode (int mode) {
        jni_setMode (mode);
    }

    public void setSpotAngle (float angle) {
        jni_setSpotAngle (angle);
    }

    public void setSpotExponent (float exponent) {
        jni_setSpotExponent (exponent);
    }

    public void print () {
        jni_print ();
    }


}