package org.karlsland.m3g;

public class RayIntersection extends java.lang.Object {

    protected long nativePointer;

    static {
        System.loadLibrary ("java-m3g");
    }
    native private void   jni_initialize      ();
    native private void   jni_finalize        ();
    native private float  jni_getDistance     ();
    native private Node   jni_getIntersected  ();
    native private float  jni_getNormalX      ();
    native private float  jni_getNormalY      ();
    native private float  jni_getNormalZ      ();
    native private void   jni_getRay          (float[] ray);
    native private int    jni_getSubmeshIndex ();
    native private float  jni_getTextureS     (int index);
    native private float  jni_getTextureT     (int index);
    native private String jni_print           ();

    public RayIntersection () {
        nativePointer = 0;
        jni_initialize ();
    }

    public void finalize () {
        jni_finalize ();
    }

    public float getDistance () {
        float dist = jni_getDistance ();
        return dist;
    }

    public Node getIntersected () {
        Node intersected = jni_getIntersected ();
        return intersected;
    }

    public float getNormalX () {
        float x = jni_getNormalX ();
        return x;
    }

    public float getNormalY () {
        float y = jni_getNormalY ();
        return y;
    }

    public float getNormalZ () {
        float z = jni_getNormalZ ();
        return z;
    }

    public void getRay (float[] ray) {
        jni_getRay (ray);
    }

    public int getSubmeshIndex () {
        int index = jni_getSubmeshIndex ();
        return index;
    }

    public float getTextureS (int index) {
        float s = jni_getTextureS (index);
        return s;
    }

    public float getTextureT (int index) {
        float t = jni_getTextureT (index);
        return t;
    }

    @Override
    public String toString () {
        String str = jni_print ();
        return str;
    }



}