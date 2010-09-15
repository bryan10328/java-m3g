package org.karlsland.m3g;


public class AnimationController extends Object3D {

    static {
        System.loadLibrary ("m3g");
    }
    native private void  jni_initialize ();
    native private void  jni_finalize ();
    native private int   jni_getActiveIntervalEnd ();
    native private float jni_getActiveIntervalStart ();
    native private float jni_getPosition ();
    native private int   jni_getRefWorldTime ();
    native private float jni_getSpeed ();
    native private float jni_getWeight ();
    native private void  jni_setActiveInterval (int start, int end);
    native private void  jni_setPosition (float sequenceTime, int worldTime);
    native private void  jni_setSpeed (float speed, int worldTime);
    native private void  jni_setWeight (float weight);


     public AnimationController () {
         jni_initialize ();
     }

     public void finalize () {
         jni_finalize ();
     }

    public int getActiveIntervalEnd () {
        return 0;
    }

    public int getActiveIntervalStart () {
        return 0;
    }

    public float getPosition () {
        return 0;
    }

    public int getRefWorldTime () {
        return 0;
    }

    public float getSpeed () {
        return 0;
    }

    public float getWeight () {
        return 0;
    }

    public void setActiveInterval (int start, int end) {
    }

    public void setPosition (float sequenceTime, int worldTime) {
    }

    public void setSpeed (float speed, int worldTime) {
    }

    public void setWeight (float weight) {
    }
     
    
}