package org.karlsland.m3g;

abstract
public class IndexBuffer extends Object3D {
    
    static {
        System.loadLibrary ("m3g");
        System.loadLibrary ("java-m3g");
    }
    native private void   jni_initialize    ();
    native private void   jni_finalize      ();
    native private int    jni_getIndexCount ();
    native private void   jni_getIndices    (int[] indices);
    native private String jni_print         ();

    public IndexBuffer () {
    }

    public void finalize () {
    }

    public int getIndexCount () {
        int count = jni_getIndexCount ();
        return count;
    }

    public void getIndices (int[] indices) {
        jni_getIndices (indices);
    }

    @Override
    public String toString () {
        String str = jni_print ();
        return str;
    }


}