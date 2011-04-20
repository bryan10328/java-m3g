package org.karlsland.m3g;


public class Background extends Object3D {

    public final static int BORDER = 32;
    public final static int REPEAT = 33;

    native private void    jni_initialize          ();
    native private void    jni_finalize            ();
    native private int     jni_getColor            ();
    native private int     jni_getCropHeight       ();
    native private int     jni_getCropWidth        ();
    native private int     jni_getCropX            ();
    native private int     jni_getCropY            ();
    native private Image2D jni_getImage            ();
    native private int     jni_getImageModeX       ();
    native private int     jni_getImageModeY       ();
    native private boolean jni_isColorClearEnabled ();
    native private boolean jni_isDepthClearEnabled ();
    native private void    jni_setColor            (int ARGB);
    native private void    jni_setColorClearEnable (boolean enable);
    native private void    jni_setCrop             (int cropX, int cropY, int width, int height);
    native private void    jni_setDepthClearEnable (boolean enable);
    native private void    jni_setImage            (Image2D image);
    native private void    jni_setImageMode        (int modeX, int modeY);
    native private String  jni_print               ();

    private Image2D image;

    public Background () {
        this.image = null;
    	jni_initialize ();
   }

     @Override
    protected void finalize () {
        jni_finalize ();
    }

    public int getColor () {
        int color = jni_getColor ();
        return color;
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

    public int getImageModeX () {
        int mode = jni_getImageModeX ();
        return mode;
    }

    public int getImageModeY () {
        int mode = jni_getImageModeY ();
        return mode;
    }

    public boolean isColorClearEnabled () {
        boolean enabled = jni_isColorClearEnabled ();
        return enabled;
    }

    public boolean isDepthClearEnabled () {
        boolean enabled = jni_isDepthClearEnabled ();
        return enabled;
    }

    public void setColor (int ARGB) {
        jni_setColor (ARGB);
    }

    public void setColorClearEnable (boolean enable) {
        jni_setColorClearEnable (enable);
    }

    public void setCrop (int cropX, int cropY, int width, int height) {
        jni_setCrop (cropX, cropY, width, height);
    }

    public void setDepthClearEnable (boolean enable) {
        jni_setDepthClearEnable (enable);
    }

    public void setImage (Image2D image) {
        this.image = image;
        jni_setImage (image);
    }

    public void setImageMode (int modeX, int modeY) {
        jni_setImageMode (modeX, modeY);
    }

    @Override
    public String toString () {
        String str = jni_print ();
        return str;
    }

}


