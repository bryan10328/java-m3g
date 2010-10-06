package org.karlsland.m3g;
import java.util.*;


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
    native private String       jni_print               ();

    private List<VertexBuffer> morphTargets;

    public MorphingMesh (VertexBuffer base, VertexBuffer[] targets, IndexBuffer[] submeshes, Appearance[] appearances) {
        this.vertices     = base;
        this.morphTargets = Arrays.asList (targets);
        this.submeshes    = Arrays.asList (submeshes);
        this.appearances  = Arrays.asList (appearances);
        jni_initialize (base, targets, submeshes, appearances);
    }

    public MorphingMesh (VertexBuffer base, VertexBuffer[] targets, IndexBuffer submesh, Appearance appearance) {
        this.vertices     = base;
        this.morphTargets = Arrays.asList (targets);
        this.submeshes    = Arrays.asList (submesh);
        this.appearances  = Arrays.asList (appearance);
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

    @Override
    public String toString () {
        String str = jni_print ();
        return str;
    }

}