package org.karlsland.m3g;

abstract
public class Transformable extends Object3D {
    
    
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