package org.karlsland.m3g;

public class Material extends Object3D {

    public final static int AMBIENT  = 1024;
    public final static int DIFFUSE  = 2048;
    public final static int EMISSIVE = 4096;
    public final static int SPECULAR = 8192;

    public Material () {
    }

    public void finalize () {
    }

    public int getColor (int target) {
        return 0;
    }

    public float getShininsess () {
        return 0;
    }

    public boolean isVertexColorTrackingEnabled () {
        return false;
    }

    public void setColor (int target, int ARGB) {
    }

    public void setShininess (float shininess) {
    }

    public void setVetexXColorTrackingEnable (boolean enable) {
    }


}