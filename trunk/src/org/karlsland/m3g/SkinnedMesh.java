package org.karlsland.m3g;
import java.util.*;


public class SkinnedMesh extends Mesh {

    static {
        System.loadLibrary ("javam3g");
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
        super ();
        this.vertices    = vertices;
        this.submeshes   = Arrays.asList (submeshes);
        this.appearances = Arrays.asList (appearances);
        this.skeleton    = skeleton;
        jni_initialize (vertices, submeshes, appearances, skeleton);
    }

    public SkinnedMesh (VertexBuffer vertices, IndexBuffer submesh, Appearance appearance, Group skeleton) {
        super ();
        this.vertices    = vertices;
        this.submeshes   = Arrays.asList (submesh);
        this.appearances = Arrays.asList (appearance);
        this.skeleton    = skeleton;
        jni_initialize (vertices, submesh, appearance, skeleton);
    }

    public void finalize () {
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