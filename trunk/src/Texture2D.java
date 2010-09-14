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

    public Texture2D (Image2D image) {
    }

    public void finalize () {
    }

    public int getBlendColor () {
        return 0;
    }

    public int getBlending () {
        return 0;
    }


    public Image2D getImage () {
        return null;
    }

    public int getImageFilter () {
        return 0;
    }

    public int getLevelFilter () {
        return 0;
    }

    public int getWrappingS () {
        return 0;
    }

    public int getWrappingT () {
        return 0;
    }

    public void setBlendColor (int RGB) {
    }

    public void setBlending (int func) {
    }

    public void setFiltering (int levelFilter, int imageFilter) {
    }

    public void setImage (Image2D image) {
    }

    public void setWrapping (int wrapS, int wrapT) {
    }

    
}