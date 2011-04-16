package org.karlsland.m3g;
import java.util.Arrays;
import java.util.List;


public class MorphingMesh extends Mesh {

    static {
        System.loadLibrary ("m3g");
        System.loadLibrary ("java-m3g");
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
        super(base, submeshes, appearances);
        this.morphTargets = Arrays.asList (targets);
        // base, submeshes, appearancesはMeshでセットされる
        if (this.getClass() == MorphingMesh.class) {
            jni_initialize (base, targets, submeshes, appearances);        	
        }
    }

    public MorphingMesh (VertexBuffer base, VertexBuffer[] targets, IndexBuffer submesh, Appearance appearance) {
        super(base, submesh, appearance);
        this.morphTargets = Arrays.asList (targets);
        if (this.getClass() == MorphingMesh.class) {
        	jni_initialize (base, targets, submesh, appearance);
        }
    }

    protected void initialize (VertexBuffer base, VertexBuffer[] targets, IndexBuffer[] submeshes, Appearance[] appearances) {
    	jni_initialize (base, targets, submeshes, appearances);
    }
    
    protected void initialize (VertexBuffer base, VertexBuffer[] targets, IndexBuffer submesh, Appearance appearance) {
    	jni_initialize (base, targets, submesh, appearance);
    }

    @Override
    protected void finalize () {
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