package org.karlsland.m3g;

abstract
public class Node extends Transformable {
    
    public final static int NONE   = 144;
    public final static int ORIGIN = 145;
    public final static int X_AXIS = 146;
    public final static int Y_AXIS = 147;
    public final static int Z_AXIS = 148;

    static {
        System.loadLibrary ("javam3g");
    }
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

    public Node () {
    }

    public void finalize () {
    }

    public final void align (Node reference) {
        jni_align (reference);
    }

    public Node getAlignmentReference (int axis) {
        Node node = jni_getAlignmentReference (axis);
        return node;
    }

    public int getAlignmentTarget (int axis) {
        int target = jni_getAlignmentTarget (axis);
        return target;
    }

    public float getAlphaFactor () {
        float alpha = jni_getAlphaFactor ();
        return alpha;
    }

    public Node getParent() {
        Node node = jni_getParent ();
        return node;
    }

    public int getScope () {
        int scope = jni_getScope ();
        return scope;
    }

    public boolean getTransformTo (Node target, Transform transform) {
        boolean enable = jni_getTransformTo (target, transform);
        return enable;
    }

    public boolean isPickingEnabled () {
        boolean enable = jni_isPickingEnabled ();
        return enable;
    }

    public boolean isRenderingEnabled () {
        boolean enable = jni_isRenderingEnabled ();
        return enable;
    }

    public void setAlignment (Node zRef, int zTarget, Node yRef, int yTarget) {
        this.zRef = zRef;
        this.yRef = yRef;
        jni_setAlignment (zRef, zTarget, yRef, yTarget);
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

    public void setParent (Node node) {
        parent = node;
    }

    @Override
    public String toString () {
        String str = jni_print ();
        return str;
    }
}


