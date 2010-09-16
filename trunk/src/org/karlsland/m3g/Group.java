package org.karlsland.m3g;

public class Group extends Node {

    static {
        System.loadLibrary ("javam3g");
    }
    native private void    jni_initialize    ();
    native private void    jni_finalize      ();
    native private void    jni_addChild      (Node child);
    native private Node    jni_getChild      (int  index);
    native private int     jni_getChildCount ();
    native private boolean jni_pick          (int  scope, float x, float y, Camera camera, RayIntersection ri);
    native private boolean jni_pick          (int  scope, float ox, float oy, float dx, float dy, float dz, RayIntersection ri);
    native private void    jni_removeChild   (Node child);

    public Group () {
        jni_initialize ();
    }

    public void finalize () {
        jni_finalize ();
    }

    public void addChild (Node child) {
        jni_addChild (child);
    }

    public Node getChild (int index) {
        Node node = jni_getChild (index);
        return node;
    }

    public int getChildCount () {
        int count = jni_getChildCount ();
        return count;
    }

    public boolean pick (int scope, float x, float y, Camera camera, RayIntersection ri) {
        boolean picked = jni_pick (scope, x, y, camera, ri);
        return picked;
    }

    public boolean pick (int scope, float ox, float oy, float dx, float dy, float dz, RayIntersection ri) {
        boolean picked = jni_pick (scope, ox, oy, dx, dy, dz, ri);
        return picked;
    }

    public void removeChild (Node child) {
        jni_removeChild (child);
    }


}