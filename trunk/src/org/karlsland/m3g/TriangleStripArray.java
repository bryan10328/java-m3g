package org.karlsland.m3g;

public class TriangleStripArray extends IndexBuffer {

    static {
        System.loadLibrary ("m3g");
    }
    native private void jni_initilize (int[] indices, int[] stripLengths);
    native private void jni_initilize (int   firstIndex, int[] stripLengths);
    native private void jni_finalize  ();


    public TriangleStripArray (int[] indices, int[] stripLengths) {
    }

    public TriangleStripArray (int firstIndex, int[] stripLengths) {
    }

}