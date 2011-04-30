package org.karlsland.m3g;

abstract
public class IndexBuffer extends Object3D {
    
    native private void   jni_finalize      ();
    native private int    jni_getIndexCount ();
    native private void   jni_getIndices    (int[] indices);
    native private String jni_print         ();

    protected IndexBuffer () {
    }
    
    @Override
    protected void finalize () {
    	jni_finalize ();
    }

    public int getIndexCount () {
        return jni_getIndexCount ();
    }

    public void getIndices (int[] indices) {
        jni_getIndices (indices);
    }

    @Override
    public String toString () {
        return jni_print ();
    }


}