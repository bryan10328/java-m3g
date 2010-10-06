package org.karlsland.m3g;

public class Fog extends Object3D {

    public final static int EXPONENTIAL = 80;
    public final static int LINEAR      = 81;

    static {
        System.loadLibrary ("javam3g");
    }
    native private void   jni_initialize      ();
    native private void   jni_finalize        ();
    native private int    jni_getColor        ();
    native private float  jni_getDensity      ();
    native private float  jni_getFarDistance  ();
    native private int    jni_getMode         ();
    native private float  jni_getNearDistance ();
    native private void   jni_setColor        (int   RGB);
    native private void   jni_setDensity      (float density);
    native private void   jni_setLinear       (float near, float far);
    native private void   jni_setMode         (int   mode);
    native private String jni_print           ();

    public Fog () {
        jni_initialize ();
    }

    public void finalize () {
        jni_finalize ();
    }

    public int getColor () {
        int color = jni_getColor ();
        return color;
    }

    public float getDensity () {
        float density = jni_getDensity ();
        return density;
    }

    public float getFarDistance () {
        float far = jni_getFarDistance ();
        return far;
    }

    public int getMode () {
        int mode = jni_getMode ();
        return mode;
    }

    public float getNearDistance () {
        float near = jni_getNearDistance ();
        return near;
    }

    public void setColor (int RGB) {
        jni_setColor (RGB);
    }

    public void setDensity (float density) {
        jni_setDensity (density);
    }

    public void setLinear (float near, float far) {
        jni_setLinear (near, far);
    }

    public void setMode (int mode) {
        jni_setMode (mode);
    }

    @Override
    public String toString () {
        String str = jni_print ();
        return str;
    }


}