package org.karlsland.m3g;

public class SkinnedMesh extends Mesh {

    static {
        System.loadLibrary ("javam3g");
    }
    native private void  jni_initilize        (VertexBuffer vertices, IndexBuffer[] submeshes, Appearance[] appearances, Group skeleton);
    native private void  jni_initilize        (VertexBuffer vertices, IndexBuffer submesh, Appearance appearance, Group skeleton);
    native private void  jni_finalize         ();
    native private void  jni_addTransform     (Node bone, int weight, int firstVertex, int numVertices);
    native private void  jni_getBoneTransform (Node bone, Transform transform);
    native private int   jni_getBoneVertices  (Node bone, int[] indices, float[] weights);
    native private Group jni_getSkeleton      ();


    public SkinnedMesh (VertexBuffer vertices, IndexBuffer[] submeshes, Appearance[] appearances, Group skeleton) {
        super(vertices, submeshes, appearances);
    }

    public SkinnedMesh (VertexBuffer vertices, IndexBuffer submesh, Appearance appearance, Group skeleton) {
        super(vertices, submesh, appearance);
    }

    public void finalize () {
    }

    public void addTransform (Node bone, int weight, int firstVertex, int numVertices) {
    }

    public void getBoneTransform (Node bone, Transform transform) {
    }

    public int getBoneVertices (Node bone, int[] indices, float[] weights) {
        return 0;
    }

    public Group getSkeleton () {
        return null;
    }


}