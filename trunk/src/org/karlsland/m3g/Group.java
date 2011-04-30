package org.karlsland.m3g;
import java.util.ArrayList;
import java.util.List;

public class Group extends Node {

    native private void    jni_initialize    ();
    native private void    jni_finalize      ();
    native private void    jni_addChild      (Node child);
    native private Node    jni_getChild      (int  index);
    native private int     jni_getChildCount ();
    native private boolean jni_pick          (int  scope, float x, float y, Camera camera, RayIntersection ri);
    native private boolean jni_pick          (int  scope, float ox, float oy, float oz, float dx, float dy, float dz, RayIntersection ri);
    native private void    jni_removeChild   (Node child);
    native private String  jni_print         ();

    private List<Node> children;

    public Group () {
       if (this.getClass() == Group.class) {
        	jni_initialize ();
        }
  	   this.children = new ArrayList<Node>();
    }
    
    @Override
    protected void finalize () {
        jni_finalize ();
    }

    public void addChild (Node child) {
        jni_addChild (child);
        children.add (child);
        child.setParent (this);
    }

    public Node getChild (int index) {
        return jni_getChild (index);
    }

    public int getChildCount () {
        return jni_getChildCount ();
    }

    public boolean pick (int scope, float x, float y, Camera camera, RayIntersection ri) {
        return jni_pick (scope, x, y, camera, ri);
    }

    public boolean pick (int scope, float ox, float oy, float oz, float dx, float dy, float dz, RayIntersection ri) {
        return jni_pick (scope, ox, oy, oz, dx, dy, dz, ri);
    }

    public void removeChild (Node child) {
        jni_removeChild (child);
        children.remove (child);
    }

    @Override
    public String toString () {
        return jni_print ();
    }

}