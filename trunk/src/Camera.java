package org.karlsland.m3g;

public class Camera extends Node {

    public final static int GENERIC     = 48;
    public final static int PARALLEL    = 49;
    public final static int PERSPECTIVE = 50;

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
