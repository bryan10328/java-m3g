package org.karlsland.m3g;
import java.util.*;

/**
 * Graphics3Dクラス.
 * 注意: - このクラスは直接newできない。getInstance()を使う。
 *       - immediateモードは実装していない。将来的にも実装しない。
 *       - 現状ではchildrenを持つ必要が無い.
 */
public class Graphics3D extends java.lang.Object {
    
    public final static int ANTIALIAS  = 2;
    public final static int DITHER     = 4;
    public final static int OVERWRITE  = 16;
    public final static int TRUE_COLOR = 8;

    static {
        System.loadLibrary ("javam3g");
    }
    native private void    jni_initialize           ();
    native private void    jni_finalize             ();
    native private int     jni_addLight             (Light light, Transform transform);
    native private void    jni_bindTarget           (java.lang.Object target);
    native private void    jni_bindTarget           (java.lang.Object target, boolean depthBufferEnable, int hints);
    native private void    jni_clear                (Background background);
    native private Camera  jni_getCamera            (Transform  transform);
    native private float   jni_getDepthRangeFar     ();
    native private float   jni_getDepthRangeNear    ();
    native private int     jni_getHints             ();
    native private static Graphics3D jni_getInstance();
    native private Light   jni_getLight             (int index, Transform transform);
    native private int     jni_getLightCount        ();
    native private static java.util.Hashtable jni_getProperties ();
    native private java.lang.Object jni_getTarget   ();
    native private int     jni_getViewportHeight    ();
    native private int     jni_getViewportWidth     ();
    native private int     jni_getViewportX         ();
    native private int     jni_getViewportY         ();
    native private boolean jni_isDepthBufferEnabled ();
    native private void    jni_releaseTarget        ();
    native private void    jni_render               (Node         node, Transform transform);
    native private void    jni_render               (VertexBuffer vertices, IndexBuffer triangles, Appearance appearance, Transform transform);
    native private void    jni_render               (VertexBuffer vertices, IndexBuffer triangles, Appearance appearacne, Transform transform, int scope);
    native private void    jni_render               (World        world);
    native private void    jni_resetLights          ();
    native private void    jni_setCamera            (Camera  camera, Transform  transform);
    native private void    jni_setDepthRange        (float   near  , float far);
    native private void    jni_setLight             (int     index , Light light, Transform transform);
    native private void    jni_setViewport          (int     x     , int   y    , int       width    , int height);
    native private void    jni_print                ();

    private long        nativePointer;
    private Camera      activeCamera;
    private List<Light> lights;
    private java.lang.Object target;

    // 注意: このコンストラクタはC++側から呼ばれる。
    //       private宣言しているのでJava側からは呼べない。
    private Graphics3D () {
        this.nativePointer = 0;
        this.activeCamera  = null;
        this.lights        = new ArrayList<Light> ();
        this.target        = null;
        System.out.println ("Java: Graphics3D initialized.");
    }

    public void finalize () {
        // do nothing.
    }


    // 以下M3Gで定義された関数

    public int addLight (Light light, Transform transform) {
        this.lights.add (light);
        int index = jni_addLight (light, transform);
        return index;
    }

    public void bindTarget (java.lang.Object target) {
        this.target = target;
        jni_bindTarget (target);
    }

    public void bindTarget (java.lang.Object target, boolean depthBuffer, int hints) {
        this.target = target;
        jni_bindTarget (target, depthBuffer, hints);
    }

    public void clear (Background background) {
        jni_clear (background);
    }

    public Camera getCamera (Transform transform) {
        Camera camera = jni_getCamera (transform);
        return camera;
    }

    public float getDepthRangeFar () {
        float far = jni_getDepthRangeFar ();
        return far;
    }

    public float getDepthRangeNear () {
        float near = jni_getDepthRangeNear ();
        return near;
    }

    public int getHints () {
        int hints = jni_getHints ();
        return hints;
    }

    public static Graphics3D getInstance () {
        Graphics3D g3d = jni_getInstance ();
        return g3d;
    }

    public Light getLight (int index, Transform transform) {
        Light light = jni_getLight (index, transform);
        return light;
    }

    public int getLightCount () {
        int count = jni_getLightCount ();
        return count;
    }

    public static java.util.Hashtable getProperties () {
        java.util.Hashtable hashTable = jni_getProperties ();
        return hashTable;
    }

    public java.lang.Object getTarget () {
        java.lang.Object target = jni_getTarget ();
        return target;
    }

    public int getViewportHeight () {
        int height = jni_getViewportHeight ();
        return height;
    }

    public int getViewportWidth () {
        int width = jni_getViewportWidth ();
        return width;
    }

    public int getViewportX () {
        int x = jni_getViewportX ();
        return x;
    }

    public int getViewportY () {
        int y = jni_getViewportY ();
        return y;
    }

    public boolean isDepthBufferEnabled () {
        boolean enabled = jni_isDepthBufferEnabled ();
        return enabled;
    }

    public void releaseTarget () {
        this.target = null;
        jni_releaseTarget ();
    }

    public void render (Node node, Transform transform) {
        jni_render (node, transform);
    }

    public void render (VertexBuffer vertices, IndexBuffer triangles, Appearance appearance, Transform transform) {
        jni_render (vertices, triangles, appearance, transform);
    }

    public void render (VertexBuffer vertices, IndexBuffer triangles, Appearance appearance, Transform transform, int scope) {
        jni_render (vertices, triangles, appearance, transform, scope);
    }

    public void render (World world) {
        jni_render (world);
    }

    public void resetLights () {
        this.lights.clear ();
        jni_resetLights ();
    }

    public void setCamera (Camera camera, Transform transform) {
        this.activeCamera = camera;
        jni_setCamera (camera, transform);
    }

    public void setDepthRange (float near, float far) {
        jni_setDepthRange (near, far);
    }

    public void setLight (int index, Light light, Transform transform) {
        jni_setLight (index, light, transform);
    }

    public void setViewport (int x, int y, int width, int height) {
        jni_setViewport (x, y, width, height);
    }

    public void print () {
        jni_print ();
    }

}