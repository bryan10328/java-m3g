package org.karlsland.m3g;

public class MorphingMesh extends Mesh {

    static {
        System.loadLibrary ("javam3g");
    }
    native private void         jni_initialize          (VertexBuffer base, VertexBuffer[] targets, IndexBuffer[] submeshes, Appearance[] appearances);
    native private void         jni_initialize          (VertexBuffer base, VertexBuffer[] targets, IndexBuffer submesh, Appearance appearance);
    native private void         jni_finalize            ();
    native private IndexBuffer  jni_getMorphTarget      (int index);
    native private int          jni_getMorphTargetCount ();
    native private void         jni_getWeights          (float[] weights);
    native private void         jni_setWeights          (float[] weights);
    native private void         jni_print               ();

    private VertexBuffer[] morphTargets;

    public MorphingMesh (VertexBuffer base, VertexBuffer[] targets, IndexBuffer[] submeshes, Appearance[] appearances) {
        this.vertices     = base;
        this.morphTargets = targets;
        this.submeshes    = submeshes;
        this.appearances  = appearances;
        jni_initialize (base, targets, submeshes, appearances);
    }

    public MorphingMesh (VertexBuffer base, VertexBuffer[] targets, IndexBuffer submesh, Appearance appearance) {
        this.vertices     = base;
        this.morphTargets = targets;
        this.submeshes    = new IndexBuffer[] {submesh};
        this.appearances  = new Appearance[] {appearance};
        jni_initialize (base, targets, submesh, appearance);
    }

    public void finalize () {
        jni_finalize ();
    }

    public IndexBuffer getMorphTarget (int index) {
        IndexBuffer ibuf = jni_getMorphTarget (index);
        return ibuf;
    }

    public int getMorphTargetCount () {
        int count = jni_getMorphTargetCount ();
        return count;
    }

    public void getWeights (float[] weights) {
        jni_getWeights (weights);
    }

    public void setWeights (float[] weigths) {
        jni_setWeights (weigths);
    }

    public void print () {
        jni_print ();
    }

}