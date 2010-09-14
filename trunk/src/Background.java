package org.karlsland.m3g;


public class Background extends Object3D {

    public final static int BORDER = 32;
    public final static int REPEAT = 33;

    static {
        System.loadLibrary ("m3g");
    }
    native private void    jni_initizlie           ();
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




    public Background () {
    }

    public void finalize () {
    }

    public int getColor () {
        return 0;
    }

    public int getCropHeight () {
        return 0;
    }

    public int getCropWidth () {
        return 0;
    }

    public int getCropX () {
        return 0;
    }

    public int getCropY () {
        return 0;
    }

    public Image2D getImage () {
        return null;
    }

    public int getImageModeX () {
        return 0;
    }

    public int getImageModeY () {
        return 0;
    }

    public boolean isColorClearEnabled () {
        return false;
    }

    public boolean isDepthClearEnabled () {
        return false;
    }

    public void setColor (int ARGB) {
    }

    public void setColorClearEnable (boolean enable) {
    }

    public void setCrop (int cropX, int cropY, int width, int height) {
    }

    public void setDepthClearEnable (boolean enable) {
    }

    public void setImage (Image2D image) {
    }

    public void setImageMode (int modeX, int modeY) {
    }

}


