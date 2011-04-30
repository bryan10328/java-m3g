package org.karlsland.m3g;

public class Texture2D extends Transformable {

    public final static int FILTER_BASE_LEVEL = 208;
    public final static int FILTER_LINEAR     = 209;
    public final static int FILTER_NEAREST    = 210;
    public final static int FUNC_ADD          = 224;
    public final static int FUNC_BLEND        = 225;
    public final static int FUNC_DECAL        = 226;
    public final static int FUNC_MODULATE     = 227;
    public final static int FUNC_REPLACE      = 228;
    public final static int WRAP_CLAMP        = 240;
    public final static int WRAP_REPEAT       = 241;

    native private void    jni_initialize     (Image2D image);
    native private void    jni_finalize       ();
    native private int     jni_getBlendColor  ();
    native private int     jni_getBlending    ();
    native private Image2D jni_getImage       ();
    native private int     jni_getImageFilter ();
    native private int     jni_getLevelFilter ();
    native private int     jni_getWrappingS   ();
    native private int     jni_getWrappingT   ();
    native private void    jni_setBlendColor  (int RGB);
    native private void    jni_setBlending    (int func);
    native private void    jni_setFiltering   (int levelFilter, int imageFilter);
    native private void    jni_setImage       (Image2D image);
    native private void    jni_setWrapping    (int wrapS, int wrapT);
    native private String  jni_print          ();

    private Image2D image;

    public Texture2D (Image2D image) {
    	jni_initialize(image);
    	this.image = image;
    }

    protected void finalize () {
        jni_finalize ();
    }

    public int getBlendColor () {
        return jni_getBlendColor ();
    }

    public int getBlending () {
        return jni_getBlending ();
    }


    public Image2D getImage () {
        return jni_getImage ();
    }

    public int getImageFilter () {
        return jni_getImageFilter ();
    }

    public int getLevelFilter () {
        return jni_getLevelFilter ();
    }

    public int getWrappingS () {
        return jni_getWrappingS ();
    }

    public int getWrappingT () {
        return jni_getWrappingT ();
    }

    public void setBlendColor (int RGB) {
        jni_setBlendColor (RGB);
    }

    public void setBlending (int func) {
        jni_setBlending (func);
    }

    public void setFiltering (int levelFilter, int imageFilter) {
        jni_setFiltering (levelFilter, imageFilter);
    }

    public void setImage (Image2D image) {
        jni_setImage (image);
    }

    public void setWrapping (int wrapS, int wrapT) {
        jni_setWrapping (wrapS, wrapT);
    }

    @Override
    public String toString () {
        return jni_print ();
    }
    
}