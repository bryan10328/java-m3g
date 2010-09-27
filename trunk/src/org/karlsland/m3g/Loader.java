package org.karlsland.m3g;


public class Loader extends java.lang.Object {
    
    protected long nativePointer;

    static {
        System.loadLibrary ("javam3g");
    }
    //native private void       jni_initialize ();
    //native private void       jni_finalize ();
    native private static Object3D[] jni_load (byte[] data, int offset);
    native private static Object3D[] jni_load (java.lang.String name);


    public static Object3D[] load (byte[] data, int offset) {
        Object3D[] objs = jni_load (data, offset);
        return objs;
    }

    public static Object3D[] load (java.lang.String name) {
        Object3D[] objs = jni_load (name);        
        return objs;
    }

}

