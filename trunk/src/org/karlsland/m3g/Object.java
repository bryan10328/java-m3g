package org.karlsland.m3g;

abstract 
public class Object {
    static {
        System.loadLibrary ("m3g");
        System.loadLibrary ("java-m3g");
    }
    private long                 nativePointer;

    protected Object () {
        nativePointer   = 0;
    }
    
    /**
     * C++オブジェクトのポインターを返す。デバッグ用。
     * @return C++オブジェクトのポインター
     */
    public long getNativePointer () {
    	return nativePointer;
    }

}
