package org.karlsland.m3g;

abstract
public class Transformable extends Object3D {
    
    static {
        System.loadLibrary ("m3g");
    }
    native private void jni_initilize ();
    native private void jni_finalize ();
    native private void jni_getCompositeTransform (Transform transform);
    native private void jni_getOrientation (float[] angleAxis);
    native private void jni_getScale       (float[] xyz);
    native private void jni_getTransform   (Transform transform);
    native private void jni_getTranslation (float[] xyz);
    native private void jni_postRotate     (float angle, float ax, float ay, float az);
    native private void jni_preRotate      (float angle,  float ax, float ay, float az);
    native private void jni_scale          (float sx, float sy, float sz);
    native private void jni_setOrientation (float angle, float ax, float ay, float az);
    native private void jni_setScale       (float sx, float sy, float sz);
    native private void jni_setTransform   (Transform transform);
    native private void jni_setTranslation (float tx, float ty, float tz);
    native private void jni_translation    (float tx, float ty, float tz);

//

    public Transformable () {
    }

    public void finalize () {
    }
    
    public void getCompositeTransform (Transform transform) {
    }

    public void getOrientation (float[] angleAxis) {
    }

    public void getScale (float[] xyz) {
    }

    public void getTransform (Transform transform) {
    }

    public void getTranslation (float[] xyz) {
    }

    public void postRotate (float angle, float ax, float ay, float az) {
    }

    public void preRotate (float angle,  float ax, float ay, float az) {
    }

    public void scale (float sx, float sy, float sz) {
    }

    public void setOrientation (float angle, float ax, float ay, float az) {
    }

    public void setScale (float sx, float sy, float sz) {
    }

    public void setTransform (Transform transform) {
    }

    public void setTranslation (float tx, float ty, float tz) {
    }

    public void translation (float tx, float ty, float tz) {
    }


}