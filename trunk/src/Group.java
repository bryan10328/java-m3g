package org.karlsland.m3g;

public class Group extends Node {

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