package org.karlsland.m3g;

abstract
public class Node extends Transformable {
    
    public final static int NONE   = 144;
    public final static int ORIGIN = 145;
    public final static int X_AXIS = 146;
    public final static int Y_AXIS = 147;
    public final static int Z_AXIS = 148;

    native private void    jni_initialize            ();
    native private void    jni_finalize              ();
    native private void    jni_align                 (Node reference);
    native private Node    jni_getAlignmentReference (int axis);
    native private int     jni_getAlignmentTarget    (int axis);
    native private float   jni_getAlphaFactor        ();
    native private Node    jni_getParent             ();
    native private int     jni_getScope              ();
    native private boolean jni_getTransformTo        (Node target, Transform transform);
    native private boolean jni_isPickingEnabled      ();
    native private boolean jni_isRenderingEnabled    ();
    native private void    jni_setAlignment          (Node zRef, int zTarget, Node yRef, int yTarget);
    native private void    jni_setAlphaFactor        (float alphaFactor);
    native private void    jni_setPickingEnable      (boolean enable);
    native private void    jni_setRenderingEnable    (boolean enable);
    native private void    jni_setScope              (int scope);
    native private String  jni_print                 ();

    private Node parent;
    private Node yRef;
    private Node zRef;

    protected Node () {
    	this.parent = null;
    	this.yRef   = null;
    	this.zRef   = null;
    }

    protected void initialize () {
    	jni_initialize ();
    }

    @Override
    protected void finalize () {
    	jni_finalize ();
    }
    
    public final void align (Node reference) {
        jni_align (reference);
    }

    public Node getAlignmentReference (int axis) {
        return jni_getAlignmentReference (axis);
    }

    public int getAlignmentTarget (int axis) {
        return jni_getAlignmentTarget (axis);
    }

    public float getAlphaFactor () {
        return jni_getAlphaFactor ();
    }

    public Node getParent() {
        return jni_getParent ();
    }

    public int getScope () {
        return jni_getScope ();
    }

    public boolean getTransformTo (Node target, Transform transform) {
        return jni_getTransformTo (target, transform);
    }

    public boolean isPickingEnabled () {
        return jni_isPickingEnabled ();
    }

    public boolean isRenderingEnabled () {
        return jni_isRenderingEnabled ();
    }

    public void setAlignment (Node zRef, int zTarget, Node yRef, int yTarget) {
        jni_setAlignment (zRef, zTarget, yRef, yTarget);
        this.zRef = zRef;
        this.yRef = yRef;
    }

    public void setAlphaFactor (float alphaFactor) {
        jni_setAlphaFactor (alphaFactor);
    }

    public void setPickingEnable (boolean enable) {
        jni_setPickingEnable (enable);
    }

    public void setRenderingEnable (boolean enable) {
        jni_setRenderingEnable (enable);
    }

    public void setScope (int scope) {
        jni_setScope (scope);
    }
    
    public void setParent (Node parent) {
    	this.parent = parent;
    }

    @Override
    public String toString () {
        return jni_print ();
    }
}


