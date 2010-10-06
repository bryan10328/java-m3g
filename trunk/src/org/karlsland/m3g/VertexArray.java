package org.karlsland.m3g;


public class VertexArray extends Object3D {

    static {
        System.loadLibrary ("javam3g");
    }
    native private void   jni_initialize        (int numVertice, int numComponents, int componentSize);
    native private void   jni_finalize          ();
    native private void   jni_get               (int firstVertex, int numVertices, byte[]  values);
    native private void   jni_get               (int firstVeretx, int numVertices, short[] values);
    native private void   jni_get               (int firstVeretx, int numVertices, float[] values);
    native private int    jni_getComponentCount ();
    native private int    jni_getComponentType  ();
    native private int    jni_getVertexCount    ();
    native private void   jni_set               (int firstVertex, int numVertices, byte[]  values);
    native private void   jni_set               (int fristVertex, int numVertices, short[] values);
    native private void   jni_set               (int fristVertex, int numVertices, float[] values);
    native private String jni_print             ();
    native private void   jni_print_raw_data    ();

    public VertexArray (int numVertice, int numComponents, int componentSize) {
        jni_initialize (numVertice, numComponents, componentSize);
    }

    public void finalize () {
        jni_finalize ();
    }

    public void get (int firstVertex, int numVertices, byte[] values) {
        jni_get (firstVertex , numVertices, values);
    }

    public void get (int firstVertex, int numVertices, short[] values) {
        jni_get (firstVertex , numVertices, values);
    }

    public void get (int firstVertex, int numVertices, float[] values) {
        jni_get (firstVertex , numVertices, values);
    }

    public int getComponentCount () {
        int count = jni_getComponentCount ();
        return count;
    }

    public int getComponentType () {
        int type = jni_getComponentType ();
        return type;
    }

    public int getVertexCount () {
        int count = jni_getVertexCount ();
        return count;
    }

    public void set (int firstVertex, int numVertices, byte[] values) {
        jni_set (firstVertex, numVertices, values);
    }

    public void set (int firstVertex, int numVertices, short[] values) {
        jni_set (firstVertex, numVertices, values);
    }

    public void set (int firstVertex, int numVertices, float[] values) {
        jni_set (firstVertex, numVertices, values);
    }

    @Override
    public String toString () {
        String str = jni_print ();
        return str;
    }

    public void print_raw_data () {
        jni_print_raw_data ();
    }

}
