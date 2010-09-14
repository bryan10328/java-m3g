package org.karlsland.m3g;

public class SkinnedMesh extends Mesh {

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