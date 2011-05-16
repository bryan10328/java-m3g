package org.karlsland.m3g;

public class Camera extends Node {

    public final static int GENERIC     = 48;
    public final static int PARALLEL    = 49;
    public final static int PERSPECTIVE = 50;

    static {
        System.loadLibrary ("m3g");
        System.loadLibrary ("java-m3g");
    }
    native private void   jni_initialize     ();
    native private void   jni_finalize       ();
    native private int    jni_getProjection  (float[]   params);
    native private int    jni_getProjection  (Transform transform);
    native private void   jni_lookAt         (float fromX, float fromY, float fromZ,
                                              float toX  , float toY  , float toZ  ,
                                              float upX  , float upY  , float upZ  );
    native private void   jni_setGeneric     (Transform transform);
    native private void   jni_setParallel    (float fovy, float aspectRatio, float near, float far);
    native private void   jni_setPerspective (float fovy, float aspectRatio, float near, float far);
    native private String jni_print          ();

    public Camera () {
    	if (this.getClass() == Camera.class) {
            jni_initialize ();  		
    	}
    }

    protected void initialize () {
    	jni_initialize ();
    }
    
    @Override
    protected void finalize () {
        jni_finalize ();
    }

    public void lookAt (float fromX, float fromY, float fromZ,
                        float toX  , float toY  , float toZ  ,
                        float upX  , float upY  , float upZ  ) {
        jni_lookAt (fromX, fromY, fromZ, toX, toY, toZ, upX, upY, upZ);
    }

    public int getProjection (float[] params) {
        int type = jni_getProjection (params);
        return type;
    }

    public int getProjection (Transform transform) {
        int type = jni_getProjection (transform);
        return type;
    }

    public void setGeneric (Transform transform) {
        jni_setGeneric (transform);
    }

    public void setParallel (float fovy, float aspectRatio, float near, float far) {
        jni_setParallel (fovy, aspectRatio, near, far);
    }

    public void setPerspective (float fovy, float aspectRatio, float near, float far) {
        jni_setPerspective (fovy, aspectRatio, near, far);
    }

    @Override
    public String toString () {
        String str = jni_print ();
        return str;
    }

}