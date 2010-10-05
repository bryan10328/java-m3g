package org.karlsland.m3g;
import java.util.*;


public class VertexBuffer extends Object3D {

    static {
        System.loadLibrary ("javam3g");
    }
    native private void        jni_initialize      ();
    native private void        jni_finalize        ();
    native private VertexArray jni_getColors       ();
    native private int         jni_getDefaultColor ();
    native private VertexArray jni_getNormals      ();
    native private VertexArray jni_getPositions    (float[] scaleBias);
    native private VertexArray jni_getTexCoords    (int index, float[] scaleBias);
    native private int         jni_getVertexCount  ();
    native private void        jni_setColors       (VertexArray colors);
    native private void        jni_setDefaultColor (int         ARGB);
    native private void        jni_setNormals      (VertexArray normals);
    native private void        jni_setPositions    (VertexArray positions, float scale, float[] bias);
    native private void        jni_setTexCoords    (int index, VertexArray texCoords, float scale, float[] bias);
    native private void        jni_print           ();

    private VertexArray positions;
    private VertexArray normals;
    private VertexArray colors;
    private List<VertexArray> texCoords;

    public VertexBuffer () {
        positions = null;
        normals   = null;
        colors    = null;
        texCoords = Arrays.asList (new VertexArray[]{null,null,null,null});
        jni_initialize ();
    }

    public void finalize () {
        jni_finalize ();
    }

    public VertexArray getColors () {
        VertexArray varry = jni_getColors ();
        return varry;
    }

    public int getDefaultColor () {
        int color = jni_getDefaultColor ();
        return color;
    }

    public VertexArray getNormals () {
        VertexArray normals = jni_getNormals ();
        return normals;
    }

    public VertexArray getPositions (float[] scaleBias) {
        VertexArray positions = jni_getPositions (scaleBias);
        return positions;
    }

    public VertexArray getTexCoords (int index, float[] scaleBias) {
        VertexArray texCoords = jni_getTexCoords (index, scaleBias);
        return texCoords;
    }

    public int getVertexCount () {
        int count = jni_getVertexCount ();
        return count;
    }

    public void setColors (VertexArray colors) {
        this.colors = colors;
        jni_setColors (colors);
    }

    public void setDefaultColor (int ARGB) {
        jni_setDefaultColor (ARGB);
    }

    public void setNormals (VertexArray normals) {
        this.normals = normals;
        jni_setNormals (normals);
    }

    public void setPositions (VertexArray positions, float scale, float[] bias) {
        this.positions = positions;
        jni_setPositions (positions, scale, bias);
    }

    public void setTexCoords (int index, VertexArray texCoords, float scale, float[] bias) {
        this.texCoords.set (index, texCoords);
        jni_setTexCoords (index, texCoords, scale, bias);
    }

    public void print () {
        jni_print ();
    }

}