package org.karlsland.m3g;

public class Group extends Node {

    static {
        System.loadLibrary ("m3g");
    }
    native private void    jni_initilize     ();
    native private void    jni_finalize      ();
    native private void    jni_addChild      (Node child);
    native private Node    jni_getChild      (int index);
    native private int     jni_getChildCount ();
    native private boolean jni_pick          (int scope, float x, float y, Camera camera, RayIntersection ri);
    native private boolean jni_pick          (int scope, float ox, float oy, float dx, float dy, float dz, RayIntersection ri);
    native private void    jni_removeChild   (Node child);

    public Group () {
    }

    public void finalize () {
    }

    public void addChild (Node child) {
    }

    public Node getChild (int index) {
        return null;
    }

    public int getChildCount () {
        return 0;
    }

    public boolean pick (int scope, float x, float y, Camera camera, RayIntersection ri) {
        return false;
    }

    public boolean pick (int scope, float ox, float oy, float dx, float dy, float dz, RayIntersection ri) {
        return false;
    }

    public void removeChild (Node child) {
    }


}