package org.karlsland.m3g;

public class Transform extends java.lang.Object {

    protected long nativePointer;

    static {
        System.loadLibrary ("javam3g");
    }
    native private void jni_initialize     ();
    native private void jni_initialize     (Transform transform);
    native private void jni_finalize       ();
    native private void jni_get            (float[] matrix);
    native private void jni_invert         ();
    native private void jni_postMultiply   (Transform transform);
    native private void jni_postRotate     (float angle, float ax, float ay, float az);
    native private void jni_postRotateQuat (float qx, float qy, float qz, float qw);
    native private void jni_postScale      (float sx, float sy, float sz);
    native private void jni_postTranslate  (float tx, float ty, float tz);
    native private void jni_set            (float[] matrix);
    native private void jni_set            (Transform transform);
    native private void jni_setIdentity    ();
    native private void jni_transform      (float[] vectors);
    native private void jni_transform      (VertexArray in, float[] out, boolean W);
    native private void jni_transpose      ();
    native private void jni_print          ();


    public Transform () {
        nativePointer = 0;
        jni_initialize ();
    }

    public Transform (Transform transform) {
        jni_initialize (transform);
    }

    public void finalize () {
        jni_finalize ();
    }

    public void get (float[] matrix) {
        jni_get (matrix);
    }

    public void invert () {
        jni_invert ();
    }

    public void postMultiply (Transform transform) {
        jni_postMultiply (transform);
    }

    public void postRotate (float angle, float ax, float ay, float az) {
        jni_postRotate (angle, ax, ay, az);
    }

    public void postRotateQuat (float qx, float qy, float qz, float qw) {
        jni_postRotateQuat (qx, qy, qz, qw);
    }

    public void postScale (float sx, float sy, float sz) {
        jni_postScale (sx, sy, sz);
    }

    public void postTranslate (float tx, float ty, float tz) {
        jni_postTranslate (tx, ty, tz);
    }

    public void set (float[] matrix) {
        jni_set (matrix);
    }

    public void set (Transform transform) {
        jni_set (transform);
    }

    public void setIdentity () {
        jni_setIdentity ();
    }

    public void transform (float[] vectors) {
        jni_transform (vectors);
    }

    public void transform (VertexArray in, float[] out, boolean W) {
        jni_transform (in, out, W);
    }

    public void transpose () {
        jni_transpose ();
    }

    public void print () {
        jni_print ();
    }
}