package org.karlsland.m3g;

public class Fog extends Object3D {

    public final static int EXPONENTIAL = 80;
    public final static int LINEAR      = 81;

    static {
        System.loadLibrary ("m3g");
    }
    native private void  jni_initialize      ();
    native private void  jni_finalize        ();
    native private int   jni_getColor        ();
    native private float jni_getDensity      ();
    native private float jni_getFarDistance  ();
    native private int   jni_getMode         ();
    native private float jni_getNearDistance ();
    native private void  jni_setColor        ();
    native private void  jni_setDensity      (float density);
    native private void  jni_setLinear       (float near, float far);
    native private void  jni_setMode         (int mode);



    public Fog () {
    }

    public void finalize () {
    }

    public int getColor () {
        return 0;
    }

    public float getDensity () {
        return 0;
    }

    public float getFarDistance () {
        return 0;
    }

    public int getMode () {
        return 0;
    }

    public float getNearDistance () {
        return 0;
    }

    public void setColor () {
    }

    public void setDensity (float density) {
    }

    public void setLinear (float near, float far) {
    }

    public void setMode (int mode) {
    }






}