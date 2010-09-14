package org.karlsland.m3g;

public class MorphingMesh extends Mesh {

    static {
        System.loadLibrary ("m3g");
    }
    native private void         jni_initilize           (VertexBuffer base, VertexBuffer[] targets, IndexBuffer submeshes[], Appearance[] appearances);
    native private void         jni_initilize           (VertexBuffer base, VertexBuffer[] targets, IndexBuffer submesh, Appearance appearance);
    native private void         jni_finalize            ();
    native private IndexBuffer  jni_getMorphTarget      (int index);
    native private int          jni_getMorphTargetCount ();
    native private void         jni_getWeights          (float[] weights);
    native private void         jni_setWeights          (float[] weights);


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