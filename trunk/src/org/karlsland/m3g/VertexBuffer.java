package org.karlsland.m3g;


public class VertexBuffer extends Object3D {

    static {
        System.loadLibrary ("m3g");
    }
    native private void        jni_intialize   ();
    native private void        jni_finalize    ();
    native private VertexArray jni_getColors       ();
    native private int         jni_getDefaultColor ();
    native private VertexArray jni_getNormals      ();
    native private VertexArray jni_getpositions    (float[] scaleBias);
    native private VertexArray jni_getTexCoords    (int index, float[] scaleBias);
    native private int         jni_getVertexCount  ();
    native private void        jni_setColors       (VertexArray colors);
    native private void        jni_seDefaultColor  (int ARGB);
    native private void        jni_setNormals      (VertexArray normals);
    native private void        jni_setPositions    (VertexArray positions, float scale, float[] bias);
    native private void        jni_setTexCoords    (int index, VertexArray texCoords, float scale, float[] bias);

//

    public VertexBuffer () {
    }

    public void finalize () {
    }

    public VertexArray getColors () {
        return null;
    }

    public int getDefaultColor () {
        return 0;
    }

    public VertexArray getNormals () {
        return null;
    }

    public VertexArray getpositions (float[] scaleBias) {
        return null;
    }

    public VertexArray getTexCoords (int index, float[] scaleBias) {
        return null;
    }

    public int getVertexCount () {
        return 0;
    }

    public void setColors (VertexArray colors) {
    }

    public void seDefaultColor (int ARGB) {
    }

    public void setNormals (VertexArray normals) {
    }

    public void setPositions (VertexArray positions, float scale, float[] bias) {
    }

    public void setTexCoords (int index, VertexArray texCoords, float scale, float[] bias) {
    }

}