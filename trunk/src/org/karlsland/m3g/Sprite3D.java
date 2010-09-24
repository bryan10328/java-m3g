package org.karlsland.m3g;


public class Sprite3D extends Node {

    static {
        System.loadLibrary ("javam3g");
    }
    native private void       jni_initialize    (boolean scaled, Image2D image, Appearance appearance);
    native private void       jni_finalize      ();
    native private Appearance jni_getAppearance ();
    native private int        jni_getCropHeight ();
    native private int        jni_getCropWidth  ();
    native private int        jni_getCropX      ();
    native private int        jni_getCropY      ();
    native private Image2D    jni_getImage      ();
    native private boolean    jni_isScaled      ();
    native private void       jni_setAppearance (Appearance appearance);
    native private void       jni_setCrop       (int cropX, int cropY, int width, int height);
    native private void       jni_setImage      (Image2D image);
    native private void       jni_print         ();


    public Sprite3D (boolean scaled, Image2D image, Appearance appearance) {
        jni_initialize (scaled, image, appearance);
    }

    public void finalize () {
        jni_finalize ();
    }

    public Appearance getAppearance () {
        Appearance app = jni_getAppearance ();
        return app;
    }

    public int getCropHeight () {
        int height = jni_getCropHeight ();
        return height;
    }

    public int getCropWidth () {
        int width = jni_getCropWidth ();
        return width;
    }

    public int getCropX () {
        int x = jni_getCropX ();
        return x;
    }

    public int getCropY () {
        int y = jni_getCropY ();
        return y;
    }
    
    public Image2D getImage () {
        Image2D img = jni_getImage ();
        return img;
    }

    public boolean isScaled () {
        boolean scaled = jni_isScaled ();
        return scaled;
    }

    public void setAppearance (Appearance appearance) {
        jni_setAppearance (appearance);
    }

    public void setCrop (int cropX, int cropY, int width, int height) {
        jni_setCrop (cropX, cropY, width, height);
    }

    public void setImage (Image2D image) {
        jni_setImage (image);
    }

    public void print () {
        jni_print ();
    }

}