package org.karlsland.m3g;



public class Loader extends Object {
    
    static {
        System.loadLibrary ("m3g");
    }
    native private void jni_initilize ();
    native private void jni_finalize ();
    native private Object3D[] jni_load (byte[] data, int offset);
    native private Object3D[] jni_load (java.lang.String name);


    public static Object3D[] load (byte[] data, int offset) {
        return null;
    }

    public static Object3D[] load (java.lang.String name) {
        return null;
    }

}

