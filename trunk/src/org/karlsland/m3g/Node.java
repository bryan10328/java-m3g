package org.karlsland.m3g;

abstract
public class Node extends Transformable {
    
    public final static int NONE   = 144;
    public final static int ORIGIN = 145;
    public final static int X_AXIS = 146;
    public final static int Y_AXIS = 147;
    public final static int Z_AXIS = 148;

    static {
        System.loadLibrary ("m3g");
    }
    native private void    jni_initilize             ();
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

    public Node () {
    }

    public void finalize () {
    }

    public void align (Node reference) {
    }

    public Node getAlignmentReference (int axis) {
        return null;
    }

    public int getAlignmentTarget (int axis) {
        return 0;
    }


    public float getAlphaFactor () {
        return 0;
    }

    public Node getParent() {
        return null;
    }

    public int getSceope () {
        return 0;
    }

    public boolean getTransformTo (Node target, Transform transform) {
        return false;
    }

    public boolean isPickingEnabled () {
        return false;
    }

    public boolean isRenderingEnabled () {
        return false;
    }

    public void setAlignment (Node zRef, int zTarget, Node yRef, int yTarget) {
    }

    public void setAlphaFactor (float alphaFactor) {
    }


    public void setPickingEnable (boolean enable) {
    }

    public void setRenderingEnable (boolean enalbe) {
    }

    public void setScope (int scope) {
    }

}


