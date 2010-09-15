package org.karlsland.m3g;


public class VertexArray extends Object3D {

    static {
        System.loadLibrary ("javam3g");
    }
    native private void jni_intialize         (int numVertice, int numComponents, int componentSize);
    native private void jni_finalize          ();
    native private void jni_get               (int firstVertex, int numVertices, byte[] values);
    native private void jni_get               (int firstVeretx, int numVertices, short[] values);
    native private void jni_get               (int firstVeretx, int numVertices, float[] values);
    native private int  jni_getComponentCount ();
    native private int  jni_getCompoenntType  ();
    native private int  jni_getVertexCount    ();
    native private void jni_set               (int firstVertex, int numVertices, byte[] values);
    native private void jni_set               (int fristVertex, int numVertices, short[] values);
    native private void jni_set               (int fristVertex, int numVertices, float[] values);

    public VertexArray (int numVertice, int numComponents, int componentSize) {
    }

    public void finalize () {
    }

    public void get (int firstVertex, int numVertices, byte[] values) {
    }

    public void get (int firstVeretx, int numVertices, short[] values) {
    }

    public void get (int firstVeretx, int numVertices, float[] values) {
    }

    public int getComponentCount () {
        return 0;
    }

    public int getCompoenntType () {
        return 0;
    }

    public int getVertexCount () {
        return 0;
    }

    public void set (int firstVertex, int numVertices, byte[] values) {
    }

    public void set (int fristVertex, int numVertices, short[] values) {
    }

    public void set (int firstVeretx, int numVertices, float[] values) {
    }

}
