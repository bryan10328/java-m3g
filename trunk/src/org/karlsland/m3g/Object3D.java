package org.karlsland.m3g;


abstract 
public class Object3D extends java.lang.Object {

    protected long entity;

    static {
        System.loadLibrary ("javam3g");
    }
    native private void             jni_initialize             ();
    native private void             jni_finalize               ();
    native private void             jni_addAnimationTrack      (AnimationTrack animationTrack);
    native private int              jni_animate                (int worldTime);
    native private Object3D         jni_duplicate              ();
    native private Object3D         jni_find                   (int userID);
    native private AnimationTrack   jni_getAnimationTrack      (int index);
    native private int              jni_getAnimationTrackCount ();
    native private int              jni_getReferences          (Object3D[] references);
    native private int              jni_getUserID              ();
    native private java.lang.Object jni_getUserObject          ();
    native private void             jni_removeAnimationTrack   (AnimationTrack animationTrack);
    native private void             jni_setUserID              (int userID);
    native private void             jni_setUserObject          (java.lang.Object userObject);
    native private void             jni_print                  ();

    public Object3D () {
        entity = 0;
        jni_initialize ();
    }

    public void finalize () {
        jni_finalize ();
    }

    public void addAnimationTrack (AnimationTrack animationTrack) {
        jni_addAnimationTrack (animationTrack);
    }

    public int animate (int time) {
        int valid = jni_animate (time);
        return valid;
    }

    public Object3D duplicate () {
        Object3D obj = jni_duplicate ();
        return obj;
    }

    public Object3D find (int userID) {
        Object3D obj = jni_find (userID);
        return obj;
    }

    public AnimationTrack getAnimationTrack (int index) {
        AnimationTrack track = jni_getAnimationTrack (index);
        return track;
    }

    public int getAnimationTrackCount () {
        int count = jni_getAnimationTrackCount ();
        return count;
    }


    public int getReferences (Object3D[] references) {
        int num = jni_getReferences (references);
        return num;
    }

    public int getUserID () {
        int id = jni_getUserID ();
        return id;
    }

    public java.lang.Object getUserObject () {
        java.lang.Object obj = jni_getUserObject ();
        return obj;
    }

    public void removeAnimationTrack (AnimationTrack animationTrack) {
        jni_removeAnimationTrack (animationTrack);
    }

    public void setUserID (int userID) {
        jni_setUserID (userID);
    }

    public void setUserObject (java.lang.Object userObject) {
        jni_setUserObject (userObject);
    }

    public void print () {
        jni_print ();
    }
    
}

