package org.karlsland.m3g;

public class Image2D extends Object3D {

    public final static int ALPHA           = 96;
    public final static int LUMINANCE       = 97;
    public final static int LUMINANCE_ALPHA = 98;
    public final static int RGB             = 99;
    public final static int RGBA            = 100;

    static {
        System.loadLibrary ("javam3g");
    }
    native private void    jni_initialize ();
    native private void    jni_finalize   ();
    native private int     jni_getFormat  ();
    native private int     jni_getHeight  ();
    native private int     jni_getWidth   ();
    native private boolean jni_isMutable  ();
    native private void    jni_set        (int x, int y, int width, int height, byte[] image);
    native private void    jni_print      ();
    native private void    jni_writePng   (java.lang.String name);

    public Image2D () {
        jni_initialize ();
    }

    public void finalize () {
        jni_finalize ();
    }

    public int getFormat () {
        int format = jni_getFormat ();
        return format;
    }

    public int getHeight () {
        int height = jni_getHeight ();
        return height;
    }

    public int getWidth () {
        int width = jni_getWidth ();
        return width;
    }

    public boolean isMutable () {
        boolean mutable = jni_isMutable ();
        return mutable;
    }

    public void set (int x, int y, int width, int height, byte[] image) {
        jni_set (x, y, width, height, image);
    }

    public void print () {
        jni_print ();
    }

    public void witePng (java.lang.String name) {
        jni_writePng (name);
    }

}