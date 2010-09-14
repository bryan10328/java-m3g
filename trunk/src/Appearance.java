package org.karlsland.m3g;

public class Appearance extends Object3D {

    static {
        System.loadLibrary ("m3g");
    }
    native private void            jni_initialize ();
    native private void            jni_finalize ();
    native private CompositingMode jni_getCompositingMode ();
    native private Fog             jni_getFog ();
    native private int             jni_getLayer ();
    native private Material        jni_getMaterial ();
    native private PolygonMode     jni_getPolygonMode ();
    native private Texture2D       jni_getTeture (int index);
    native private void            jni_setCompositingMode (CompositingMode compositingMode);
    native private void            jni_setFog (Fog fog);
    native private void            jni_setLayer (int layer);
    native private void            jni_setMaterial (Material material);
    native private void            jni_setPolygonMode (PolygonMode polygonMode);
    native private void            jni_setTexure (int index, Texture2D texture);

    public Appearance () {
    }

    public void finalize () {
    }

    public CompositingMode getCompositingMode () {
        return null;
    }

    public Fog getFog () {
        return null;
    }

    public int getLayer () {
        return 0;
    }

    public Material getMaterial () {
        return null;
    }

    public PolygonMode getPolygonMode () {
        return null;
    }

    public Texture2D getTexture (int index) {
        return null;
    }

    public void setCompositingMode (CompositingMode compositingMode) {
    }

    public void setFog (Fog fog) {
    }

    public void setLayer (int layer) {
    }

    public void setMaterial (Material material) {
    }

    public void setPolygonMode (PolygonMode polygonMode) {
    }

    public void setTexture (int index, Texture2D texture) {
    }


}