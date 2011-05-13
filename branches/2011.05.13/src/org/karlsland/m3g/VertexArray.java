package org.karlsland.m3g;


public class VertexArray extends Object3D {

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

    @Override
    protected void finalize () {
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
        return jni_getComponentCount ();
    }

    public int getComponentType () {
        return jni_getComponentType ();
    }

    public int getVertexCount () {
        return jni_getVertexCount ();
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
        return jni_print ();
    }

    public void print_raw_data () {
        jni_print_raw_data ();
    }

}
