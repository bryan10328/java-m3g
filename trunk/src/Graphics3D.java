package org.karlsland.m3g;

public class Graphics3D extends Object {
    
    public final static int ANTIALIAS  = 2;
    public final static int DITHER     = 4;
    public final static int OVERWRITE  = 16;
    public final static int TRUE_COLOR = 8;

    public Graphics3D () {
    }

    public void finalize () {
    }

    public int addLight (Light light, Transform transform) {
        return 0;
    }

    public void bindTarget (java.lang.Object target) {
    }

    public void bindTarget (java.lang.Object target, boolean depthBuffer, int hints) {
    }

    public void clear (Background background) {
    }

    public Camera getCamera (Transform transform) {
        return null;
    }

    public float getDepthRangeFar () {
        return 0;
    }

    public float getDepthRangeNear () {
        return 0;
    }

    public int getHints () {
        return 0;
    }

    public static Graphics3D getInstance () {
        return null;
    }

    public Light getLight (int index, Transform transform) {
        return null;
    }

    public int getLightCount () {
        return 0;
    }

    public static java.util.Hashtable getProperties () {
        return null;
    }

    public java.lang.Object getTarget () {
        return null;
    }

    public int getViewportHeight () {
        return 0;
    }

    public int getViewportWidth () {
        return 0;
    }

    public int getViewportX () {
        return 0;
    }

    public int getViewportY () {
        return 0;
    }

    public boolean isDepthBufferEnabled () {
        return false;
    }

    public void releaseTarget () {
    }

    public void render (Node node, Transform transform) {
    }

    public void render (VertexBuffer vertices, IndexBuffer triangles, Appearance appearance, Transform transform) {
    }

    public void render (VertexBuffer vertices, IndexBuffer triangles, Appearance appearance, Transform transform, int sceope) {
    }

    public void render (World world) {
    }

    public void resetLIghts () {
    }

    public void setCamera (Camera camera, Transform transform) {
    }

    public void setDepthRange (float near, float far) {
    }

    public void setLight (int index, Light light, Transform transfrom) {
    }

    public void setViewport (int x, int y, int width, int height) {
    }


}