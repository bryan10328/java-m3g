package org.karlsland.m3g;
import java.util.*;



public class Appearance extends Object3D {

    static {
        System.loadLibrary ("javam3g");
    }
    native private void            jni_initialize         ();
    native private void            jni_finalize           ();
    native private CompositingMode jni_getCompositingMode ();
    native private Fog             jni_getFog             ();
    native private int             jni_getLayer           ();
    native private Material        jni_getMaterial        ();
    native private PolygonMode     jni_getPolygonMode     ();
    native private Texture2D       jni_getTexture         (int index);
    native private void            jni_setCompositingMode (CompositingMode compositingMode);
    native private void            jni_setFog             (Fog fog);
    native private void            jni_setLayer           (int layer);
    native private void            jni_setMaterial        (Material material);
    native private void            jni_setPolygonMode     (PolygonMode polygonMode);
    native private void            jni_setTexture         (int index, Texture2D texture);
    native private void            jni_print              ();

    private CompositingMode compositingMode;
    private Fog             fog;
    private Material        material;
    private PolygonMode     polygonMode;
    private List<Texture2D> textures;

    public Appearance () {
        this.compositingMode = compositingMode;
        this.fog             = fog;
        this.material        = material;
        this.polygonMode     = polygonMode;
        this.textures        = Arrays.asList (new Texture2D[]{null,null,null,null});
        jni_initialize ();
    }

    public void finalize () {
        jni_finalize ();
    }

    public CompositingMode getCompositingMode () {
        CompositingMode cmode = jni_getCompositingMode ();
        return cmode;
    }

    public Fog getFog () {
        Fog fog = jni_getFog ();
        return fog;
    }

    public int getLayer () {
        int layer = jni_getLayer ();
        return layer;
    }

    public Material getMaterial () {
        Material mat = jni_getMaterial ();
        return mat;
    }

    public PolygonMode getPolygonMode () {
        PolygonMode pmode = jni_getPolygonMode ();
        return pmode;
    }

    public Texture2D getTexture (int index) {
        Texture2D tex = jni_getTexture (index);
        return tex;
    }

    public void setCompositingMode (CompositingMode compositingMode) {
        this.compositingMode = compositingMode;
        jni_setCompositingMode (compositingMode);
    }

    public void setFog (Fog fog) {
        this.fog = fog;
        jni_setFog (fog);
    }

    public void setLayer (int layer) {
        jni_setLayer (layer);
    }

    public void setMaterial (Material material) {
        this.material = material;
        jni_setMaterial (material);
    }

    public void setPolygonMode (PolygonMode polygonMode) {
        this.polygonMode = polygonMode;
        jni_setPolygonMode (polygonMode);
    }

    public void setTexture (int index, Texture2D texture) {
        this.textures.set(index, texture);
        jni_setTexture (index, texture);
    }

    public void print () {
        jni_print ();
    }



}