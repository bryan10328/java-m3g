package org.karlsland.m3g;

public class World extends Group {
    
    static {
        System.loadLibrary ("javam3g");
    }
    native private void       jni_initialize      ();
    native private void       jni_finalize        ();
    native private Camera     jni_getActiveCamera ();
    native private Background jni_getBackground   ();
    native private void       jni_setActiveCamera (Camera camera);
    native private void       jni_setBackground   (Background background);
    native private String     jni_print           ();

    private Camera     activeCamera;
    private Background background;

    public World () {
        super (0);
        activeCamera = null;
        background   = null;
        jni_initialize ();
    }

    public void finalize () {
        jni_finalize ();
    }

    public Camera getActiveCamera () {
        Camera cam = jni_getActiveCamera ();
        return cam;
    }

    public Background getBackground () {
        Background bg = jni_getBackground ();
        return bg;
    }

    public void setActiveCamera (Camera camera) {
        this.activeCamera = camera;
        jni_setActiveCamera (camera);
    }

    public void setBackground (Background background) {
        this.background = background;
        jni_setBackground (background);
    }

    @Override
    public String toString () {
        String str = jni_print ();
        return str;
    }


}