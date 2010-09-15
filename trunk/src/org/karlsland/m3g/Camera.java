package org.karlsland.m3g;

public class Camera extends Node {

    public final static int GENERIC     = 48;
    public final static int PARALLEL    = 49;
    public final static int PERSPECTIVE = 50;

    static {
        System.loadLibrary ("m3g");
    }
    native private void jni_initialzie     ();
    native private void jni_finalize       ();
    native private int  jni_getProjection  (float[] params);
    native private int  jni_getProjection  (Transform transform);
    native private void jni_setGeneric     (Transform transform);
    native private void jni_setParallel    (float fovy, float aspectRatio, float near, float far);
    native private void jni_setPerspective (float fovy, float aspectRatio, float near, float far);


    public Camera () {
    }

    public void finalize () {
    }

    public int getProjection (float[] params) {
        return 0;
    }

    public int getProjection (Transform transform) {
        return 0;
    }

    public void setGeneric (Transform transform) {
    }

    public void setParallel (float fovy, float aspectRatio, float near, float far) {
    }

    public void setPerspective (float fovy, float aspectRatio, float near, float far) {
    }

}
