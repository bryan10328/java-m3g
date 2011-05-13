package org.karlsland.m3g;
import java.util.List;

/**
 * Graphics3Dクラス.
 * 注意: - このクラスは直接newできない。getInstance()を使う。
 *       - immediateモードは実装していない。将来的にも実装しない。
 *       - 現状ではchildrenを持つ必要が無い.
 */
public class Graphics3D extends Object {
    
    public final static int ANTIALIAS  = 2;
    public final static int DITHER     = 4;
    public final static int OVERWRITE  = 16;
    public final static int TRUE_COLOR = 8;

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
    native private String  jni_print                ();

    private Camera           activeCamera;
    private List<Light>      lights;
    private java.lang.Object target;

    /**
     * 呼び出し禁止。インスタンス化はgetInstance()で行う。
     */
    private Graphics3D () {
    }


    // 以下M3Gで定義された関数

    /**
     * イミーディエイトモードは実装されていない。
     */
    public int addLight (Light light, Transform transform) {
        int index = jni_addLight (light, transform);
        this.lights.add (light);
        return index;
    }

    /**
     * イミーディエイトモードは実装されていない。
     */
    public void bindTarget (java.lang.Object target) {
        jni_bindTarget (target);
        this.target = target;
    }

    /**
     * ターゲットのバインド/リリースは実装されていない。
     */
    public void bindTarget (java.lang.Object target, boolean depthBuffer, int hints) {
        jni_bindTarget (target, depthBuffer, hints);
        this.target = target;
    }

    /**
     * イミーディエイトモードは実装されていない。
     */
    public void clear (Background background) {
        jni_clear (background);
    }

    /**
     * イミーディエイトモードは実装されていない。
     */
    public Camera getCamera (Transform transform) {
        return jni_getCamera (transform);
    }

    /**
     * イミーディエイトモードは実装されていない。
     */
    public float getDepthRangeFar () {
        return jni_getDepthRangeFar ();
    }

    /**
     * イミーディエイトモードは実装されていない。
     */
    public float getDepthRangeNear () {
        return jni_getDepthRangeNear ();
    }

    public int getHints () {
        return  jni_getHints ();
    }

    public static Graphics3D getInstance () {
        return jni_getInstance ();
    }

    /**
     * イミーディエイトモードは実装されていない。
     */
    public Light getLight (int index, Transform transform) {
        return jni_getLight (index, transform);
    }

    /**
     * イミーディエイトモードは実装されていない。
     */
    public int getLightCount () {
        return jni_getLightCount ();
    }

    public static java.util.Hashtable getProperties () {
        return jni_getProperties ();
    }

    /**
     * ターゲットのバインド/リリースは実装されていない。
     */
    public java.lang.Object getTarget () {
        return jni_getTarget ();
    }

    /**
     * イミーディエイトモードは実装されていない。
     */
    public int getViewportHeight () {
        return jni_getViewportHeight ();
    }

    /**
     * イミーディエイトモードは実装されていない。
     */
    public int getViewportWidth () {
        return jni_getViewportWidth ();
    }

    /**
     * イミーディエイトモードは実装されていない。
     */
    public int getViewportX () {
        return jni_getViewportX ();
    }

    /**
     * イミーディエイトモードは実装されていない。
     */
    public int getViewportY () {
        return jni_getViewportY ();
    }

    public boolean isDepthBufferEnabled () {
        return jni_isDepthBufferEnabled ();
    }

    /**
     * ターゲットのバインド/リリースは実装されていない。
     */
    public void releaseTarget () {
        jni_releaseTarget ();
        this.target = null;
     }

    /**
     * イミーディエイトモードは実装されていない。
     */
    public void render (Node node, Transform transform) {
        jni_render (node, transform);
    }

    /**
     * イミーディエイトモードは実装されていない。
     */
    public void render (VertexBuffer vertices, IndexBuffer triangles, Appearance appearance, Transform transform) {
        jni_render (vertices, triangles, appearance, transform);
    }

    /**
     * イミーディエイトモードは実装されていない。
     */
    public void render (VertexBuffer vertices, IndexBuffer triangles, Appearance appearance, Transform transform, int scope) {
        jni_render (vertices, triangles, appearance, transform, scope);
    }

    public void render (World world) {
        jni_render (world);
    }

    /**
     * イミーディエイトモードは実装されていない。
     */
    public void resetLights () {
        jni_resetLights ();
        this.lights.clear ();
        }

    /**
     * イミーディエイトモードは実装されていない。
     */
    public void setCamera (Camera camera, Transform transform) {

        jni_setCamera (camera, transform);
        this.activeCamera = camera;
        }

    /**
     * イミーディエイトモードは実装されていない。
     */
    public void setDepthRange (float near, float far) {
        jni_setDepthRange (near, far);
    }

    /**
     * イミーディエイトモードは実装されていない。
     */
    public void setLight (int index, Light light, Transform transform) {
        jni_setLight (index, light, transform);
    }

    public void setViewport (int x, int y, int width, int height) {
        jni_setViewport (x, y, width, height);
    }

    @Override
    public String toString () {
        return jni_print ();
    }

}