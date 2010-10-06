package org.karlsland.m3g;
import java.util.*;


abstract 
public class Object3D extends java.lang.Object {

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
    native private String           jni_print                  ();

    private long                 nativePointer;
    private List<AnimationTrack> animationTracks;
    private java.lang.Object     userObject;


    public Object3D () {
        nativePointer   = 0;
        animationTracks = new ArrayList<AnimationTrack> ();
        userObject      = null;
    }

    public void finalize () {
    }


    // 以下M3Gで定義された関数

    public void addAnimationTrack (AnimationTrack animationTrack) {
        animationTracks.add (animationTrack);
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
        animationTracks.remove (animationTrack);
        jni_removeAnimationTrack (animationTrack);
    }

    public void setUserID (int userID) {
        jni_setUserID (userID);
    }

    public void setUserObject (java.lang.Object userObject) {
        this.userObject = userObject;
        jni_setUserObject (userObject);
    }

    @Override
    public String toString () {
        String str = jni_print ();
        return str;
    }

}

