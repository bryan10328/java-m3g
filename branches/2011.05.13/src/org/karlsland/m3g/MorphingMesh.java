package org.karlsland.m3g;
import java.util.Arrays;
import java.util.List;


public class MorphingMesh extends Mesh {

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
    	super(base, submeshes, appearances);
       this.morphTargets = Arrays.asList (targets);
       jni_initialize(base, targets, submeshes, appearances);        	
    }

    public MorphingMesh (VertexBuffer base, VertexBuffer[] targets, IndexBuffer submesh, Appearance appearance) {
       super(base, submesh, appearance);
       this.morphTargets = Arrays.asList (targets);
       jni_initialize(base, targets, submesh, appearance);        	
    }

    @Override
    protected void finalize () {
        jni_finalize ();
    }

    public IndexBuffer getMorphTarget (int index) {
        return jni_getMorphTarget (index);
    }

    public int getMorphTargetCount () {
        return jni_getMorphTargetCount ();
    }

    public void getWeights (float[] weights) {
        jni_getWeights (weights);
    }

    public void setWeights (float[] weigths) {
        jni_setWeights (weigths);
    }

    @Override
    public String toString () {
        return jni_print ();
    }

}