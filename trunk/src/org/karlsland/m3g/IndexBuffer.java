package org.karlsland.m3g;

abstract
public class IndexBuffer extends Object3D {
    
    static {
        System.loadLibrary ("javam3g");
    }
    native private void jni_initialize    ();
    native private void jni_finalize      ();
    native private int  jni_getIndexCount ();
    native private void jni_getIndices    (int[] indices);
    native private void jni_print         ();

    public IndexBuffer () {
        jni_initialize ();
    }

    public void finalize () {
        jni_finalize ();
    }

    public int getIndexCount () {
        int count = jni_getIndexCount ();
        return count;
    }

    public void getIndices (int[] indices) {
        jni_getIndices (indices);
    }

    public void print () {
        jni_print ();
    }


}