package org.karlsland.m3g;

public class RayIntersection extends Object {

    static {
        System.loadLibrary ("m3g");
    }
    native private void  jni_initialize      ();
    native private void  jni_finalize        ();
    native private float jni_getDistance     ();
    native private Node  jni_getIntersected  ();
    native private float jni_getNormalX      ();
    native private float jni_getNormalY      ();
    native private float jni_getNormalZ      ();
    native private void  jni_getRay          (float[] ray);
    native private int   jni_getSubmeshIndex ();
    native private float jni_getTestureS     (int index);
    native private float jni_getTextureT     (int index);


    public RayIntersection () {
    }

    public void finalize () {
    }

    public float getDistance () {
        return 0;
    }

    public Node getIntersected () {
        return null;
    }

    public float getNormalX () {
        return 0;
    }

    public float getNormalY () {
        return 0;
    }

    public float getNormalZ () {
        return 0;
    }

    public void getRay (float[] ray) {

    }

    public int getSubmeshIndex () {
        return 0;
    }

    public float getTextureS (int index) {
        return 0;
    }

    public float getTextureT (int index) {
        return 0;
    }




}