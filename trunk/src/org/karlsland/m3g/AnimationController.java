package org.karlsland.m3g;


public class AnimationController extends Object3D {

    static {
        System.loadLibrary ("m3g");
        System.loadLibrary ("java-m3g");
    }
    native private void   jni_initialize                ();
    native private void   jni_finalize                  ();
    native private int    jni_getActiveIntervalEnd      ();
    native private int    jni_getActiveIntervalStart    ();
    native private float  jni_getPosition               (float worldTime);
    native private int    jni_getRefWorldTime           ();
    native private float  jni_getSpeed                  ();
    native private float  jni_getWeight                 ();
    native private void   jni_setActiveInterval         (int   start, int end);
    native private void   jni_setPosition               (float sequenceTime, int worldTime);
    native private void   jni_setSpeed                  (float speed, int worldTime);
    native private void   jni_setWeight                 (float weight);
    native private String jni_print                     ();


     public AnimationController () {
         jni_initialize ();
     }

     public void finalize () {
         jni_finalize ();
     }

    public int getActiveIntervalEnd () {
        int end = jni_getActiveIntervalEnd();
        return end;
    }

    public int getActiveIntervalStart () {
        int start = jni_getActiveIntervalStart();
        return start;
    }

    public float getPosition (float worldTime) {
        float time = jni_getPosition (worldTime);
        return time;
    }

    public int getRefWorldTime () {
        int time = jni_getRefWorldTime ();
        return time;
    }

    public float getSpeed () {
        float speed = jni_getSpeed ();
        return speed;
    }

    public float getWeight () {
        float weight = jni_getWeight ();
        return weight;
    }

    public void setActiveInterval (int start, int end) {
        jni_setActiveInterval (start, end);
    }

    public void setPosition (float sequenceTime, int worldTime) {
        jni_setPosition (sequenceTime, worldTime);
    }

    public void setSpeed (float speed, int worldTime) {
        jni_setSpeed (speed, worldTime);
    }

    public void setWeight (float weight) {
        jni_setWeight (weight);
    }

    @Override     
    public String toString () {
        String str = jni_print ();
        return str;
    }
   
}