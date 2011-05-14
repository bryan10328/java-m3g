package org.karlsland.m3g;
import java.util.Arrays;
import java.util.List;



public class Appearance extends Object3D {

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
    native private String          jni_print              ();

    private CompositingMode compositingMode;
    private Fog             fog;
    private Material        material;
    private PolygonMode     polygonMode;
    private List<Texture2D> textures;

    public Appearance () {
        this.compositingMode = null;
        this.fog             = null;
        this.material        = null;
        this.polygonMode     = null;
        this.textures        = Arrays.asList (new Texture2D[]{null,null});
        jni_initialize ();
    }

    @Override
    protected void finalize () {
        jni_finalize ();
    }

    public CompositingMode getCompositingMode () {
        return jni_getCompositingMode ();
    }

    public Fog getFog () {
        return jni_getFog ();
    }

    public int getLayer () {
        return jni_getLayer ();
    }

    public Material getMaterial () {
        return jni_getMaterial ();
    }

    public PolygonMode getPolygonMode () {
        return jni_getPolygonMode ();
    }

    public Texture2D getTexture (int index) {
        return jni_getTexture (index);
    }

    public void setCompositingMode (CompositingMode compositingMode) {
        jni_setCompositingMode (compositingMode);
        this.compositingMode = compositingMode;
    }

    public void setFog (Fog fg) {
        jni_setFog (fg);
        this.fog = fg;
    }

    public void setLayer (int layer) {
        jni_setLayer (layer);
    }

    public void setMaterial (Material mat) {
        jni_setMaterial (mat);
        this.material = mat;
    }

    public void setPolygonMode (PolygonMode polyMode) {
        jni_setPolygonMode (polyMode);
        this.polygonMode = polyMode;
    }

    public void setTexture (int index, Texture2D texture) {
        jni_setTexture (index, texture);
        this.textures.set(index, texture);
    }

    @Override
    public String toString () {
        return jni_print ();
    }



}