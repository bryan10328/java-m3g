package org.karlsland.m3g;
import java.util.*;


public class Mesh extends Node {

    static {
        System.loadLibrary ("m3g");
        System.loadLibrary ("java-m3g");
    }
    native private void         jni_initialize      (VertexBuffer vertices, IndexBuffer[] submeshes, Appearance[] appearances);
    native private void         jni_initialize      (VertexBuffer vertices, IndexBuffer submesh, Appearance appearance);
    native private void         jni_finalize        ();
    native private Appearance   jni_getAppearance   (int index);
    native private IndexBuffer  jni_getIndexBuffer  (int index);
    native private int          jni_getSubmeshCount ();
    native private VertexBuffer jni_getVertexBuffer ();
    native private void         jni_setAppearance   (int index, Appearance appearance);
    native private String       jni_print           ();

    protected VertexBuffer      vertices;
    protected List<IndexBuffer> submeshes;
    protected List<Appearance>  appearances;


    public Mesh (VertexBuffer vertices, IndexBuffer[] submeshes, Appearance[] appearances) {
        this.vertices    = vertices;
        this.submeshes   = Arrays.asList (submeshes);
        this.appearances = Arrays.asList (appearances);
        jni_initialize (vertices, submeshes, appearances);
    }

    public Mesh (VertexBuffer vertices, IndexBuffer submesh, Appearance appearance) {
        this.vertices    = vertices;
        this.submeshes   = Arrays.asList (submesh);
        this.appearances = Arrays.asList (appearance);
        jni_initialize (vertices, submesh, appearance);
    }

    // C++側を呼び出さないためのダミーのコンストラクタ.
    // SkinnedMesh, MorphingMeshから呼ばれる。
    protected Mesh () {
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
        this.appearances.set (index, appearance);
        jni_setAppearance (index, appearance);
    }

    @Override
    public String toString () {
        String str = jni_print ();
        return str;
    }

}
    