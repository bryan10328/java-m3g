package org.karlsland.m3g;


public class AnimationController extends Object3D {

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
     
     @Override
     protected void finalize () {
         jni_finalize ();
     }

    public int getActiveIntervalEnd () {
        return jni_getActiveIntervalEnd();
    }

    public int getActiveIntervalStart () {
        return jni_getActiveIntervalStart();
    }

    public float getPosition (float worldTime) {
        return jni_getPosition (worldTime);
    }

    public int getRefWorldTime () {
        return jni_getRefWorldTime ();
    }

    public float getSpeed () {
        return jni_getSpeed ();
    }

    public float getWeight () {
        return jni_getWeight ();
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
        return jni_print ();
    }
   
}