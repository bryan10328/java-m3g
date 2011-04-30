package org.karlsland.m3g;

public class World extends Group {
    
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
        activeCamera = null;
        background   = null;
    	jni_initialize ();
    }


    @Override
    protected void finalize () {
        jni_finalize ();
    }

    public Camera getActiveCamera () {
        return jni_getActiveCamera ();
    }

    public Background getBackground () {
        return jni_getBackground ();
    }

    public void setActiveCamera (Camera camera) {
        jni_setActiveCamera (camera);
        this.activeCamera = camera;
    }

    public void setBackground (Background background) {
        jni_setBackground (background);
        this.background = background;
    }

    @Override
    public String toString () {
        return jni_print ();
    }


}