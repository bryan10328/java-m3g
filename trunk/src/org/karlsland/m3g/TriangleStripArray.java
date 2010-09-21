package org.karlsland.m3g;

public class TriangleStripArray extends IndexBuffer {

    static {
        System.loadLibrary ("javam3g");
    }
    native private void jni_initialize (int[] indices, int[] stripLengths);
    native private void jni_initialize (int   firstIndex, int[] stripLengths);
    native private void jni_finalize   ();
    native private void jni_print      ();


    public TriangleStripArray (int[] indices, int[] stripLengths) {
        jni_initialize (indices, stripLengths);
    }

    public TriangleStripArray (int firstIndex, int[] stripLengths) {
        jni_initialize (firstIndex, stripLengths);
    }

    public void print () {
        jni_print ();
    }

}