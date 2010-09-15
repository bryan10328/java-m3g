package org.karlsland.m3g;

public class Graphics3D extends Object {
    
    public final static int ANTIALIAS  = 2;
    public final static int DITHER     = 4;
    public final static int OVERWRITE  = 16;
    public final static int TRUE_COLOR = 8;

    static {
        System.loadLibrary ("m3g");
    }
    native private void    jni_initialize           ();
    native private void    jni_finalize             ();
    native private int     jni_addLight             (Light light, Transform transform);
    native private void    jni_bindTarget           (java.lang.Object target);
    native private void    jni_bindTarget           (java.lang.Object target, boolean depthBuffer, int hints);
    native private void    jni_clear                (Background background);
    native private Camera  jni_getCamera            (Transform transform);
    native private float   jni_getDepthRangeFar     ();
    native private float   jni_getDepthRangeNear    ();
    native private int     jni_getHints             ();
    native private static Graphics3D jni_getInstance();
    native private Light   jni_getLight             (int index, Transform transform);
    native private int     jni_getLightCount        ();
    native private java.util.Hashtable jni_getProperties ();
    native private java.lang.Object jni_getTarget        ();
    native private int     jni_getViewportHeight    ();
    native private int     jni_getViewportWidth     ();
    native private int     jni_getViewportX         ();
    native private int     jni_getViewportY         ();
    native private boolean jni_isDepthBufferEnabled ();
    native private void    jni_releaseTarget        ();
    native private void    jni_render               (Node node, Transform transform);
    native private void    jni_render               (VertexBuffer vertices, IndexBuffer triangles, Appearance appearance, Transform transform);
    native private void    jni_render               (VertexBuffer vertices, IndexBuffer triangles, Appearance appearacne, Transform transform, int scope);
    native private void    jni_render               (World world);
    native private void    jni_resetLights          ();
    native private void    jni_setCamera            (Camera camera, Transform transform);
    native private void    jni_setDepthRange        (float near, float far);
    native private void    jni_setLight             (int index, Light light, Transform transform);
    native private void    jni_setViewport          (int x, int y, int width, int height);

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

    public void render (VertexBuffer vertices, IndexBuffer triangles, Appearance appearance, Transform transform, int scope) {
    }

    public void render (World world) {
    }

    public void resetLights () {
    }

    public void setCamera (Camera camera, Transform transform) {
    }

    public void setDepthRange (float near, float far) {
    }

    public void setLight (int index, Light light, Transform transform) {
    }

    public void setViewport (int x, int y, int width, int height) {
    }


}