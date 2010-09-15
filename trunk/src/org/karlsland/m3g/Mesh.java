package org.karlsland.m3g;


public class Mesh extends Node {

    static {
        System.loadLibrary ("m3g");
    }
    native private void         jni_initialize      (VertexBuffer vertices, IndexBuffer[] submeshes, Appearance[] appearances);
    native private void         jni_initialize      (VertexBuffer vertices, IndexBuffer submeshes, Appearance appearances);
    native private void         jni_finalize        ();
    native private Appearance   jni_getAppearance   ();
    native private IndexBuffer  jni_getIndexBuffer  ();
    native private int          jni_getSubmeshCount ();
    native private VertexBuffer jni_getVertexBuffer ();
    native private void         jni_setAppearance   ();


    public Mesh (VertexBuffer vertices, IndexBuffer[] submeshes, Appearance[] appearances) {
    }

    public Mesh (VertexBuffer vertices, IndexBuffer submesh, Appearance apperance) {
    }

    public void finalize () {
    }

    public Appearance getAppearance (int index) {
        return null;
    }

    public IndexBuffer getIndexBuffer (int index) {
        return null;
    }

    public int getSubmeshCount () {
        return 0;
    }

    public VertexBuffer getVertexBuffer () {
        return null;
    }

    public void setAppearane (int index, Appearance appearance) {
    }

}
    