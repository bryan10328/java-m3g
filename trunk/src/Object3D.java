package org.karlsland.m3g;


abstract 
public class Object3D extends java.lang.Object {
    
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

