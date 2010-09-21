package org.karlsland.m3g;

abstract
public class Transformable extends Object3D {
    
    static {
        System.loadLibrary ("javam3g");
    }
    native private void jni_initialize            ();
    native private void jni_finalize              ();
    native private void jni_getCompositeTransform (Transform transform);
    native private void jni_getOrientation        (float[] angleAxis);
    native private void jni_getScale              (float[] xyz);
    native private void jni_getTransform          (Transform transform);
    native private void jni_getTranslation        (float[] xyz);
    native private void jni_postRotate            (float angle, float ax, float ay, float az);
    native private void jni_preRotate             (float angle,  float ax, float ay, float az);
    native private void jni_scale                 (float sx, float sy, float sz);
    native private void jni_setOrientation        (float angle, float ax, float ay, float az);
    native private void jni_setScale              (float sx, float sy, float sz);
    native private void jni_setTransform          (Transform transform);
    native private void jni_setTranslation        (float tx, float ty, float tz);
    native private void jni_translate             (float tx, float ty, float tz);
    native private void jni_print                 ();


    public Transformable () {
        jni_initialize ();
    }

    public void finalize () {
        jni_finalize ();
    }
    
    public void getCompositeTransform (Transform transform) {
        jni_getCompositeTransform (transform);
    }

    public void getOrientation (float[] angleAxis) {
        jni_getOrientation (angleAxis);
    }

    public void getScale (float[] xyz) {
        jni_getScale (xyz);
    }

    public void getTransform (Transform transform) {
        jni_getTransform (transform);
    }

    public void getTranslation (float[] xyz) {
        jni_getTranslation (xyz);
    }

    public void postRotate (float angle, float ax, float ay, float az) {
        jni_postRotate (angle, ax, ay, az);
    }

    public void preRotate (float angle,  float ax, float ay, float az) {
        jni_preRotate (angle, ax, ay, az);
    }

    public void scale (float sx, float sy, float sz) {
        jni_scale (sx, sy, sz);
    }

    public void setOrientation (float angle, float ax, float ay, float az) {
        jni_setOrientation (angle, ax, ay, az);
    }

    public void setScale (float sx, float sy, float sz) {
        jni_setScale (sx, sy, sz);
    }

    public void setTransform (Transform transform) {
        jni_setTransform (transform);
    }

    public void setTranslation (float tx, float ty, float tz) {
        jni_setTranslation (tx, ty, tz);
    }

    public void translate (float tx, float ty, float tz) {
        jni_translate (tx, ty, tz);
    }

    public void print () {
        jni_print ();
    }

}