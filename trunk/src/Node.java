package org.karlsland.m3g;

abstract
public class Node extends Transformable {
    
    public final static int NONE   = 144;
    public final static int ORIGIN = 145;
    public final static int X_AXIS = 146;
    public final static int Y_AXIS = 147;
    public final static int Z_AXIS = 148;

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

    public boolean getTransformTo (Node target, Transform taransform) {
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

    public void setScope (int sceop) {
    }

}


