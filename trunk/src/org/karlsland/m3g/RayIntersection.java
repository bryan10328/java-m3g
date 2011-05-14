package org.karlsland.m3g;

public class RayIntersection extends Object {

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
    	jni_initialize ();
    }

    @Override
    public void finalize () {
        jni_finalize ();
    }

    public float getDistance () {
        return jni_getDistance ();
    }

    public Node getIntersected () {
        return jni_getIntersected ();
    }

    public float getNormalX () {
        return jni_getNormalX ();
    }

    public float getNormalY () {
        return jni_getNormalY ();
    }

    public float getNormalZ () {
        return jni_getNormalZ ();
    }

    public void getRay (float[] ray) {
        jni_getRay (ray);
    }

    public int getSubmeshIndex () {
        return jni_getSubmeshIndex ();
    }

    public float getTextureS (int index) {
        return jni_getTextureS (index);
    }

    public float getTextureT (int index) {
        return jni_getTextureT (index);
    }

    @Override
    public String toString () {
        return jni_print ();
    }



}