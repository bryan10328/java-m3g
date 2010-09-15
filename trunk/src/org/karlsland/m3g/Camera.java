package org.karlsland.m3g;

public class Camera extends Node {

    public final static int GENERIC     = 48;
    public final static int PARALLEL    = 49;
    public final static int PERSPECTIVE = 50;

    static {
        System.loadLibrary ("javam3g");
    }
    native private void jni_initialize     ();
    native private void jni_finalize       ();
    native private int  jni_getProjection  (float[]   params);
    native private int  jni_getProjection  (Transform transform);
    native private void jni_setGeneric     (Transform transform);
    native private void jni_setParallel    (float fovy, float aspectRatio, float near, float far);
    native private void jni_setPerspective (float fovy, float aspectRatio, float near, float far);


    public Camera () {
        jni_initialize ();
    }

    public void finalize () {
        jni_finalize ();
    }

    public int getProjection (float[] params) {
        int type = jni_getProjection (params);
        return type;
    }

    public int getProjection (Transform transform) {
        int type = jni_getProjection (transform);
        return type;
    }

    public void setGeneric (Transform transform) {
        jni_setGeneric (transform);
    }

    public void setParallel (float fovy, float aspectRatio, float near, float far) {
        jni_setParallel (fovy, aspectRatio, near, far);
    }

    public void setPerspective (float fovy, float aspectRatio, float near, float far) {
        jni_setPerspective (fovy, aspectRatio, near, far);
    }

}
