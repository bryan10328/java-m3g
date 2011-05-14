package org.karlsland.m3g;

public class Log extends java.lang.Object {
    static {
        System.loadLibrary ("m3g");
        System.loadLibrary ("java-m3g");
    }
    native private static String  jni_getErrorString ();
    
    private Log () {
        // コンストラクタは呼び出し禁止
        // このクラスがインスタンス化されることはない.
    }

	public static String getErrorString() {
	    return jni_getErrorString();
	}
    
    
}
