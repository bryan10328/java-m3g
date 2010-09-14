package org.karlsland.m3g;


abstract 
public class Object3D extends java.lang.Object {
    
    static {
        System.loadLibrary ("m3g");
    }
    native private void             jni_initilize              ();
    native private void             jni_finalize               ();
    native private void             jni_addAnimationTrack      (AnimationTrack animationTrack);
    native private int              jni_animate                (int time);
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


    public void addAnimationTrack (AnimationTrack animationTrack) {
    }

    public int animate (int time) {
        return 0;
    }

    public Object3D duplicate () {
        return null;
    }

    public Object3D find (int userID) {
        return null;
    }

    public AnimationTrack getAnimationTrack (int index) {
        return null;
    }

    public int getAnimationTrackCount () {
        return 0;
    }


    public int getReferences (Object3D[] references) {
        return 0;
    }

    public int getUserID () {
        return 0;
    }

    public java.lang.Object getUserObject () {
        return null;
    }

    public void removeAnimationTrack (AnimationTrack animationTrack) {
    }

    public void setUserID (int userID) {
    }

    public void setUserObject (java.lang.Object userObject) {
    }

    
}

