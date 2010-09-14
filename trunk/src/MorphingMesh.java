package org.karlsland.m3g;

public class MorphingMesh extends Mesh {

    public MorphingMesh (VertexBuffer base, VertexBuffer[] targets, IndexBuffer submeshes[], Appearance[] appearances) {
        super (base, submeshes, appearances);
    }

    public MorphingMesh (VertexBuffer base, VertexBuffer[] targets, IndexBuffer submesh, Appearance appearance) {
        super (base, submesh, appearance);
    }

    public void finalize () {
    }

    public IndexBuffer getMorphTarget (int index) {
        return null;
    }

    public int getMorphTargetCount () {
        return 0;
    }

    public void getWeights (float[] weights) {
    }

    public void setWeights (float[] weigths) {
    }

}