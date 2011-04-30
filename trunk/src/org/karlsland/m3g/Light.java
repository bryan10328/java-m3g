package org.karlsland.m3g;

public class Light extends Node {

    public final static int AMBIENT     = 128;
    public final static int DIRECTIONAL = 129;
    public final static int OMNI        = 130;
    public final static int SPOT        = 131;

    native private void   jni_initialize              ();
    native private void   jni_finalize                ();
    native private int    jni_getColor                ();
    native private float  jni_getConstantAttenuation  ();
    native private float  jni_getIntensity            ();
    native private float  jni_getLinearAttenuation    ();
    native private int    jni_getMode                 ();
    native private float  jni_getQuadraticAttenuation ();
    native private float  jni_getSpotAngle            ();
    native private float  jni_getSpotExponent         ();
    native private void   jni_setAttenuation          (float constant, float linear, float quadratic);
    native private void   jni_setColor                (int   RGB);
    native private void   jni_setIntensity            (float intensity);
    native private void   jni_setMode                 (int   mode);
    native private void   jni_setSpotAngle            (float angle);
    native private void   jni_setSpotExponent         (float exponent);
    native private String jni_print                   ();

    public Light () {
    	jni_initialize ();
    }

    @Override
    protected void finalize () {
        jni_finalize ();
    }

    public int getColor () {
        return jni_getColor ();
    }

    public float getConstantAttenuation () {
        return jni_getConstantAttenuation ();
    }

    public float getIntensity () {
        return jni_getIntensity ();
    }

    public float getLinearAttenuation () {
        return jni_getLinearAttenuation ();
    }

    public int getMode () {
        return jni_getMode ();
    }

    public float getQuadraticAttenuation () {
        return jni_getQuadraticAttenuation ();
    }

    public float getSpotAngle () {
        return jni_getSpotAngle ();
    }

    public float getSpotExponent () {
        return jni_getSpotExponent ();
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

    @Override
    public String toString () {
        return jni_print ();
    }


}