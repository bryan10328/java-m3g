package org.karlsland.m3g;

public class Image2D extends Object3D {

    public final static int ALPHA           = 96;
    public final static int LUMINANCE       = 97;
    public final static int LUMINANCE_ALPHA = 98;
    public final static int RGB             = 99;
    public final static int RGBA            = 100;

    static {
        System.loadLibrary ("m3g");
    }
    native private void    jni_initilize ();
    native private void    jni_finalize  ();
    native private int     jni_getFormat ();
    native private int     jni_getHeight ();
    native private int     jni_getWidth  ();
    native private boolean jni_isMutable ();
    native private void    jni_set       (int x, int y, int width, int height, byte[] image);


    public Image2D () {
    }

    public void finalize () {
    }

    public int getFormat () {
        return 0;
    }

    public int getHeight () {
        return 0;
    }

    public int getWidth () {
        return 0;
    }

    public boolean isMutable () {
        return false;
    }

    public void set (int x, int y, int width, int height, byte[] image) {
    }


}