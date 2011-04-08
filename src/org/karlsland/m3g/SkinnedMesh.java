package org.karlsland.m3g;
import java.util.*;


public class SkinnedMesh extends Mesh {

    static {
        System.loadLibrary ("m3g");
        System.loadLibrary ("java-m3g");
    }
    native private void   jni_initialize       (VertexBuffer vertices, IndexBuffer[] submeshes, Appearance[] appearances, Group skeleton);
    native private void   jni_initialize       (VertexBuffer vertices, IndexBuffer submesh, Appearance appearance, Group skeleton);
    native private void   jni_finalize         ();
    native private void   jni_addTransform     (Node bone, int weight, int firstVertex, int numVertices);
    native private void   jni_getBoneTransform (Node bone, Transform transform);
    native private int    jni_getBoneVertices  (Node bone, int[] indices, float[] weights);
    native private Group  jni_getSkeleton      ();
    native private String jni_print            ();

    private Group         skeleton;

    public SkinnedMesh (VertexBuffer vertices, IndexBuffer[] submeshes, Appearance[] appearances, Group skeleton) {
        super (vertices, submeshes, appearances);
        this.skeleton    = skeleton;
        if (this.getClass() == SkinnedMesh.class) {
            jni_initialize (vertices, submeshes, appearances, skeleton);        	
        }
    }

    public SkinnedMesh (VertexBuffer vertices, IndexBuffer submesh, Appearance appearance, Group skeleton) {
        super (vertices, submesh, appearance);
        this.skeleton    = skeleton;
        if (this.getClass() == SkinnedMesh.class) {
            jni_initialize (vertices, submesh, appearance, skeleton);        	
        }
    }

    protected void initialize (VertexBuffer vertices, IndexBuffer[] submeshes, Appearance[] appearances, Group skeleton) {
    	jni_initialize (vertices, submeshes, appearances, skeleton);
    }
    
    protected void initialize (VertexBuffer vertices, IndexBuffer submesh, Appearance appearance, Group skeleton) {
    	jni_initialize (vertices, submesh, appearance, skeleton);
    }

    @Override
    protected void finalize () {
        jni_finalize ();
    }

    public void addTransform (Node bone, int weight, int firstVertex, int numVertices) {
        jni_addTransform (bone, weight, firstVertex, numVertices);
    }

    public void getBoneTransform (Node bone, Transform transform) {
        jni_getBoneTransform (bone, transform);
    }

    public int getBoneVertices (Node bone, int[] indices, float[] weights) {
        int num = jni_getBoneVertices (bone, indices, weights);
        return num;
    }

    public Group getSkeleton () {
        Group skeleton = jni_getSkeleton ();
        return skeleton;
    }

    @Override
    public String toString () {
        String str = jni_print ();
        return str;
    }

}