package org.karlsland.m3g;
import java.util.Arrays;
import java.util.List;


public class Mesh extends Node {

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
       if (this.getClass() == Mesh.class) {
    	   jni_initialize(vertices, submeshes, appearances);
       }
    }

    public Mesh (VertexBuffer vertices, IndexBuffer submesh, Appearance appearance) {
       this.vertices    = vertices;
       this.submeshes   = Arrays.asList (submesh);
       this.appearances = Arrays.asList (appearance);
    	if (this.getClass() == Mesh.class) {
            jni_initialize (vertices, submesh, appearance);        	
        }
    }

    @Override
    protected void finalize () {
        jni_finalize ();
    }

    public Appearance getAppearance (int index) {
        return jni_getAppearance (index);
    }

    public IndexBuffer getIndexBuffer (int index) {
        return jni_getIndexBuffer (index);
    }

    public int getSubmeshCount () {
        return jni_getSubmeshCount ();
    }

    public VertexBuffer getVertexBuffer () {
        return jni_getVertexBuffer ();
    }
    
    public void setAppearance (int index, Appearance appearance) {
        jni_setAppearance (index, appearance);
        this.appearances.set (index, appearance);
     }

    @Override
    public String toString () {
        return  jni_print ();
    }

}
    