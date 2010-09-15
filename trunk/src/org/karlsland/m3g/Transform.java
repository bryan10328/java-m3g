package org.karlsland.m3g;

public class Transform extends java.lang.Object {

    static {
        System.loadLibrary ("javam3g");
    }
    native private void jni_initilize  ();
    native private void jni_initilize  (Transform transform);
    native private void jni_finalize   ();
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

    public Transform () {
    }

    public Transform (Transform transform) {
    }

    public void finalize () {
    }

    public void get (float[] matrix) {
    }

    public void invert () {
    }

    public void postMultiply (Transform transform) {
    }

    public void postRotate (float angle, float ax, float ay, float az) {
    }

    public void postRotateQuat (float qx, float qy, float qz, float qw) {
    }

    public void postScale (float sx, float sy, float sz) {
    }

    public void postTranslate (float tx, float ty, float tz) {
    }

    public void set (float[] matrix) {
    }

    public void set (Transform transform) {
    }

    public void setIdentity () {
    }

    public void transform (float[] vectors) {
    }

    public void transform (VertexArray in, float[] out, boolean W) {
    }

    public void transpose () {
    }

}