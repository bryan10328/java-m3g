package org.karlsland.m3g;


public class Mesh extends Node {

    static {
        System.loadLibrary ("javam3g");
    }
    native private void         jni_initialize      (VertexBuffer vertices, IndexBuffer[] submeshes, Appearance[] appearances);
    native private void         jni_initialize      (VertexBuffer vertices, IndexBuffer submesh, Appearance appearance);
    native private void         jni_finalize        ();
    native private Appearance   jni_getAppearance   (int index);
    native private IndexBuffer  jni_getIndexBuffer  (int index);
    native private int          jni_getSubmeshCount ();
    native private VertexBuffer jni_getVertexBuffer ();
    native private void         jni_setAppearance   (int index, Appearance appearance);

    protected Mesh () {
        // nothing to do 
    }

    public Mesh (VertexBuffer vertices, IndexBuffer[] submeshes, Appearance[] appearances) {
        jni_initialize (vertices, submeshes, appearances);
    }

    public Mesh (VertexBuffer vertices, IndexBuffer submesh, Appearance appearance) {
        jni_initialize (vertices, submesh, appearance);
    }

    public void finalize () {
        jni_finalize ();
    }

    public Appearance getAppearance (int index) {
        Appearance app = jni_getAppearance (index);
        return app;
    }

    public IndexBuffer getIndexBuffer (int index) {
        IndexBuffer ibuf = jni_getIndexBuffer (index);
        return ibuf;
    }

    public int getSubmeshCount () {
        int count = jni_getSubmeshCount ();
        return count;
    }

    public VertexBuffer getVertexBuffer () {
        VertexBuffer vbuf = jni_getVertexBuffer ();
        return vbuf;
    }

    public void setAppearance (int index, Appearance appearance) {
        jni_setAppearance (index, appearance);
    }

}
    