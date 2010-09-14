package org.karlsland.m3g;

public class World extends Group {
    
    static {
        System.loadLibrary ("m3g");
    }
    native private void       jni_intialize       ();
    native private void       jni_finalize        ();
    native private Camera     jni_getActiveCamera ();
    native private Background jni_getBackground   ();
    native private void       jni_setActiveCamera (Camera camera);
    native private void       jni_setBackground   (Background background);


    public World () {
    }

    public void finalize () {
    }

    public Camera getActiveCamera () {
        return null;
    }

    public Background getBackground () {
        return null;
    }

    public void setActiveCamera (Camera camera) {
    }

    public void setBackground (Background background) {
    }



}