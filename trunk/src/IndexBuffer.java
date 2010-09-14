package org.karlsland.m3g;

abstract
public class IndexBuffer extends Object3D {
    
    static {
        System.loadLibrary ("m3g");
    }
    native private void jni_intialize     ();
    native private void jni_finalize      ();
    native private int  jni_getIndexCount ();
    native private void jni_getIndices    (int[] indices);


    public IndexBuffer () {
    }

    public void finalize () {
    }

    public int getIndexCount () {
        return 0;
    }

    public void getIndices (int[] indices) {
    }



}