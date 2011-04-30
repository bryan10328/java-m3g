package org.karlsland.m3g;
import java.util.Arrays;
import java.util.List;


public class VertexBuffer extends Object3D {

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
    native private String      jni_print           ();

    private VertexArray       positions;
    private VertexArray       normals;
    private VertexArray       colors;
    private List<VertexArray> texCoords;

    public VertexBuffer () {
        positions = null;
        normals   = null;
        colors    = null;
        texCoords = Arrays.asList (new VertexArray[]{null,null});
        jni_initialize();        	
    }
    
    @Override
    protected void finalize () {
        jni_finalize ();
    }

    public VertexArray getColors () {
        return jni_getColors ();
    }

    public int getDefaultColor () {
        return jni_getDefaultColor ();
    }

    public VertexArray getNormals () {
        return jni_getNormals ();
    }

    public VertexArray getPositions (float[] scaleBias) {
        return jni_getPositions (scaleBias);
    }

    public VertexArray getTexCoords (int index, float[] scaleBias) {
        return jni_getTexCoords (index, scaleBias);
    }

    public int getVertexCount () {
        return jni_getVertexCount ();
    }

    public void setColors (VertexArray colors) {
        jni_setColors (colors);
        this.colors = colors;
    }

    public void setDefaultColor (int ARGB) {
        jni_setDefaultColor (ARGB);
    }

    public void setNormals (VertexArray normals) {
        jni_setNormals (normals);
        this.normals = normals;
    }

    public void setPositions (VertexArray positions, float scale, float[] bias) {
        jni_setPositions (positions, scale, bias);
        this.positions = positions;
    }

    public void setTexCoords (int index, VertexArray texCoords, float scale, float[] bias) {
        jni_setTexCoords (index, texCoords, scale, bias);
        this.texCoords.set (index, texCoords);
    }

    @Override
    public String toString () {
        return jni_print ();
    }

}