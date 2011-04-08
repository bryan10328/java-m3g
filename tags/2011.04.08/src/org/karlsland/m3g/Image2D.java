package org.karlsland.m3g;

public class Image2D extends Object3D {

    public final static int ALPHA           = 96;
    public final static int LUMINANCE       = 97;
    public final static int LUMINANCE_ALPHA = 98;
    public final static int RGB             = 99;
    public final static int RGBA            = 100;

    static {
        System.loadLibrary ("m3g");
        System.loadLibrary ("java-m3g");
    }
    native private void    jni_initialize (int format, int width, int height);
    native private void    jni_initialize (int format, int width, int height, byte[] iamge);
    native private void    jni_initialize (int format, int width, int height, byte[] iamge, byte[] palette);
    native private void    jni_initialize (int format, java.lang.Object image);
    native private void    jni_finalize   ();
    native private int     jni_getFormat  ();
    native private int     jni_getHeight  ();
    native private int     jni_getWidth   ();
    native private boolean jni_isMutable  ();
    native private void    jni_set        (int x, int y, int width, int height, byte[] image);
    native private String  jni_print      ();
    native private void    jni_writePng   (java.lang.String name);

    public Image2D (int format, int width, int height) {
    	if (this.getClass() == Image2D.class) {
            jni_initialize (format, width, height);    		
    	}
    }
    
    public Image2D (int format, int width, int height, byte[] image) {
    	if (this.getClass() == Image2D.class) {
        jni_initialize (format, width, height, image);
    	}
    }

    public Image2D (int format, int width, int height, byte[] image, byte[] palette) {
    	if (this.getClass() == Image2D.class) {
        jni_initialize (format, width, height, image, palette);
    	}
    }

    public Image2D (int format, java.lang.Object image) {
    	if (this.getClass() == Image2D.class) {
        jni_initialize (format, image);
    	}
    }


    protected void initialize (int format, int width, int height) {
    	jni_initialize (format, width, height);
    }

    protected void initialize (int format, int width, int height, byte[] image) {
    	jni_initialize (format, width, height, image);
    }

    protected void initialize (int format, int width, int height, byte[] image, byte[] palette) {
    	jni_initialize (format, width, height, image, palette);
    }

    protected void initialize (int format, java.lang.Object image) {
    	jni_initialize (format, image);
    }

    @Override
    protected void finalize () {
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

    @Override
    public String toString () {
        String str = jni_print ();
        return str;
    }

    public void writePng (java.lang.String name) {
        jni_writePng (name);
    }

}