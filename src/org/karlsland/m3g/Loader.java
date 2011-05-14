package org.karlsland.m3g;


public class Loader extends Object {
    
    native private static Object3D[] jni_load (byte[] data, int offset);
    native private static Object3D[] jni_load (java.lang.String name);

    /**
     * コンストラクタは呼び出し禁止。このクラスがインスタンス化されることは決してない.
     */
    private Loader () {
    }

    public static Object3D[] load (byte[] data, int offset) throws java.io.IOException {
        return jni_load (data, offset);
    }

    public static Object3D[] load (java.lang.String name) throws java.io.IOException { 
        return jni_load (name);
    }

}

