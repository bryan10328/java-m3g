#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "java-Graphics3D.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;


/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_addLight
 * Signature: (Lorg/karlsland/m3g/Light;Lorg/karlsland/m3g/Transform;)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1addLight
  (JNIEnv* env, jobject thiz, jobject light, jobject transform)
{
    cout << "Java-Graphics3D: addLight is called.\n";
    Graphics3D* g3d   = (Graphics3D*)getNativePointer (env, thiz);
    Light*      lgh   = (Light*)getNativePointer (env, light);
    Transform*  trans = (Transform*)getNativePointer (env, transform);
    int index = 0;
    __TRY__;
    index = g3d->addLight (lgh, *trans);
    __CATCH__;
    return index;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_bindTarget
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1bindTarget__Ljava_lang_Object_2
  (JNIEnv* env, jobject thiz, jobject target)
{
    cout << "Java-Graphics3D: bindTarget is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, thiz);
    void*       tar = (void*)getNativePointer (env, target);
    __TRY__;
    g3d->bindTarget (tar);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_bindTarget
 * Signature: (Ljava/lang/Object;ZI)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1bindTarget__Ljava_lang_Object_2ZI
  (JNIEnv* env, jobject thiz, jobject target, jboolean depthBufferEnable, jint hints)
{
    cout << "Java-Graphics3D: bindTarget is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, thiz);
    void*       tar = (void*)getNativePointer (env, target);
    __TRY__;
    g3d->bindTarget (tar, depthBufferEnable, hints);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_clear
 * Signature: (Lorg/karlsland/m3g/Background;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1clear
  (JNIEnv* env, jobject thiz, jobject background)
{
    cout << "Java-Graphics3D: clear is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, thiz);
    Background* bg = (Background*)getNativePointer (env, background);
    __TRY__;
    g3d->clear (bg);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getCamera
 * Signature: (Lorg/karlsland/m3g/Transform;)Lorg/karlsland/m3g/Camera;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getCamera
  (JNIEnv* env, jobject thiz, jobject transform)
{
    cout << "Java-Graphics3D: getCamera is called.\n";
    Graphics3D* g3d   = (Graphics3D*)getNativePointer (env, thiz);
    Transform*  trans = (Transform*)getNativePointer (env, transform);
    Camera*     cam   = NULL;
    __TRY__;
    cam = g3d->getCamera (trans);
    __CATCH__;
    return (cam != NULL) ? (jobject)cam->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getDepthRangeFar
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getDepthRangeFar
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Graphics3D: getDepthRangeFar is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, thiz);
    float far = 0;
    __TRY__;
    far = g3d->getDepthRangeFar ();
    __CATCH__;
    return far;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getDepthRangeNear
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getDepthRangeNear
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Graphics3D: getDepthRangeNear is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, thiz);
    float near = 0;
    __TRY__;
    near = g3d->getDepthRangeNear ();
    __CATCH__;
    return near;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getHints
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getHints
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Graphics3D: getHints is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, thiz);
    int hints = 0;
    __TRY__;
    hints = g3d->getHints ();
    __CATCH__;
    return hints;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getInstance
 * Signature: ()Lorg/karlsland/m3g/Graphics3D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getInstance
  (JNIEnv* env, jclass clazz)
{
    cout << "Java-Graphics3D: getInstance is called.\n";
    Graphics3D* g3d = NULL;
    __TRY__;
    g3d = Graphics3D:: getInstance ();
    __CATCH__;
    if (g3d && g3d->getExportedEntity() == NULL) {
        Java_new_Graphics3D (env, g3d);
    }
    return (g3d != NULL) ? (jobject)g3d->getExportedEntity() : (jobject)0;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getLight
 * Signature: (ILorg/karlsland/m3g/Transform;)Lorg/karlsland/m3g/Light;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getLight
  (JNIEnv* env, jobject thiz, jint index, jobject transform)
{
    cout << "Java-Graphics3D: getLight is called.\n";
    Graphics3D* g3d   = (Graphics3D*)getNativePointer (env, thiz);
    Transform*  trans = (Transform*)getNativePointer (env, transform);
    Light*      lgh   = NULL;
    __TRY__;
    lgh = g3d->getLight (index, trans);
    __CATCH__;
    return (lgh != NULL) ? (jobject)lgh->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getLightCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getLightCount
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Graphics3D: getLightCount is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, thiz);
    int count = 0;
    __TRY__;
    count = g3d->getLightCount ();
    __CATCH__;
    return count;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getProperties
 * Signature: ()Ljava/util/Hashtable;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getProperties
  (JNIEnv* env, jclass clazz)
{
    cout << "Java-Graphics3D: getProperties is called.\n";
    jclass    hash_class    = env->FindClass   ("java/util/Hashtable");
    jmethodID children_init = env->GetMethodID (hash_class, "<init>", "()V");
    jobject   hash_obj      = env->NewObject   (hash_class, children_init);
    return hash_obj;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getTarget
 * Signature: ()Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getTarget
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Graphics3D: getTarget is called.\n";
    Graphics3D* g3d    = (Graphics3D*)getNativePointer (env, thiz);
    void*       target = NULL;
    __TRY__;
    target = g3d->getTarget ();
    __CATCH__;
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getViewportHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getViewportHeight
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Graphics3D: getViewportHeight is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, thiz);
    int height = 0;
    __TRY__;
    height = g3d->getViewportHeight ();
    __CATCH__;
    return height;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getViewportWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getViewportWidth
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Graphics3D: getViewportWidth is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, thiz);
    int width = 0;
    __TRY__;
    width = g3d->getViewportWidth ();
    __CATCH__;
    return width;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getViewportX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getViewportX
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Graphics3D: getViewportX is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, thiz);
    float x = 0;
    __TRY__;
    x = g3d->getViewportX ();
    __CATCH__;
    return x;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getViewportY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getViewportY
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Graphics3D: getViewportY is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, thiz);
    float y = 0;
    __TRY__;
    y = g3d->getViewportY ();
    __CATCH__;
    return y;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_isDepthBufferEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1isDepthBufferEnabled
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Graphics3D: isDepthBufferEnabled is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, thiz);
    bool enabled = 0;
    __TRY__;
    enabled = g3d->isDepthBufferEnabled ();
    __CATCH__;
    return enabled;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_releaseTarget
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1releaseTarget
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Graphics3D: releaseTarget is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, thiz);    
    __TRY__;
    g3d->releaseTarget ();
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_render
 * Signature: (Lorg/karlsland/m3g/Node;Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1render__Lorg_karlsland_m3g_Node_2Lorg_karlsland_m3g_Transform_2
  (JNIEnv* env, jobject thiz, jobject node, jobject transform)
{
    cout << "Java-Graphics3D: render1 is called.\n";
    Graphics3D* g3d   = (Graphics3D*)getNativePointer (env, thiz);
    Node*       nod   = (Node*)getNativePointer (env, node);
    Transform*  trans = (Transform*)getNativePointer (env, transform);
    __TRY__;
    g3d->render (nod, trans);
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    __TRY__;
    deleteUsedObjects ();
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_render
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;Lorg/karlsland/m3g/IndexBuffer;Lorg/karlsland/m3g/Appearance;Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1render__Lorg_karlsland_m3g_VertexBuffer_2Lorg_karlsland_m3g_IndexBuffer_2Lorg_karlsland_m3g_Appearance_2Lorg_karlsland_m3g_Transform_2
  (JNIEnv* env, jobject thiz, jobject vertices, jobject triangles, jobject appearances, jobject transform)
{
    cout << "Java-Graphics3D: render2 is called.\n";
    Graphics3D*   g3d   = (Graphics3D*)getNativePointer (env, thiz);    
    VertexBuffer* vbuf  = (VertexBuffer*)getNativePointer (env, vertices);
    IndexBuffer*  ibuf  = (IndexBuffer*)getNativePointer (env, triangles);
    Appearance*   apps  = (Appearance*)getNativePointer (env, appearances);
    Transform*    trans = (Transform*)getNativePointer (env, transform);
    __TRY__;
    g3d->render (vbuf, ibuf, apps, trans);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_render
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;Lorg/karlsland/m3g/IndexBuffer;Lorg/karlsland/m3g/Appearance;Lorg/karlsland/m3g/Transform;I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1render__Lorg_karlsland_m3g_VertexBuffer_2Lorg_karlsland_m3g_IndexBuffer_2Lorg_karlsland_m3g_Appearance_2Lorg_karlsland_m3g_Transform_2I
  (JNIEnv* env, jobject thiz, jobject vertices, jobject triangles, jobject appearances, jobject transform, jint scope)
{
    cout << "Java-Graphics3D: render3 is called.\n";
    Graphics3D*   g3d   = (Graphics3D*)getNativePointer (env, thiz);    
    VertexBuffer* vbuf  = (VertexBuffer*)getNativePointer (env, vertices);
    IndexBuffer*  ibuf  = (IndexBuffer*)getNativePointer (env, triangles);
    Appearance*   apps  = (Appearance*)getNativePointer (env, appearances);
    Transform*    trans = (Transform*)getNativePointer (env, transform);
    __TRY__;
    g3d->render (vbuf, ibuf, apps, trans, scope);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_render
 * Signature: (Lorg/karlsland/m3g/World;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1render__Lorg_karlsland_m3g_World_2
  (JNIEnv* env, jobject thiz, jobject world)
{
    cout << "Java-Graphics3D: render4(world) is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, thiz);
    World*      wld = (World*)getNativePointer (env, world);
    __TRY__;
    g3d->render (wld);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_resetLights
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1resetLights
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Graphics3D: resetLights is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, thiz);
    __TRY__;
    g3d->resetLights ();
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_setCamera
 * Signature: (Lorg/karlsland/m3g/Camera;Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1setCamera
  (JNIEnv* env, jobject thiz, jobject camera, jobject transform)
{
    cout << "Java-Graphics3D: setCamera is called.\n";
    Graphics3D* g3d   = (Graphics3D*)getNativePointer (env, thiz);
    Camera*     cam   = (Camera*)getNativePointer (env, camera);
    Transform*  trans = (Transform*)getNativePointer (env, transform);
    __TRY__;
    g3d->setCamera (cam, *trans);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_setDepthRange
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1setDepthRange
  (JNIEnv* env, jobject thiz, jfloat near, jfloat far)
{
    cout << "Java-Graphics3D: setDepthRange is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, thiz);
    __TRY__;
    g3d->setDepthRange (near, far);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_setLight
 * Signature: (ILorg/karlsland/m3g/Light;Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1setLight
  (JNIEnv* env, jobject thiz, jint index, jobject light, jobject transform)
{
    cout << "Java-Graphics3D: setLight is called.\n";
    Graphics3D* g3d   = (Graphics3D*)getNativePointer (env, thiz);
    Light*      lgh   = (Light*)getNativePointer (env, light);
    Transform*  trans = (Transform*)getNativePointer (env, transform);
    __TRY__;
    g3d->setLight (index, lgh, *trans);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_setViewport
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1setViewport
  (JNIEnv* env, jobject thiz, jint x, jint y, jint width, jint height)
{
    cout << "Java-Graphics3D: setViewport is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, thiz);
    __TRY__;
    g3d->setViewport (x, y, width, height);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Graphics3D: print is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    g3d->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}


void Java_new_Graphics3D               (JNIEnv* env, m3g::Graphics3D* g3d)
{
    cout << "Java-Graphics3D: new java Graphics3D.\n";

    jclass   g3d_class         = env->FindClass ("org/karlsland/m3g/Graphics3D");
    jobject  g3d_obj           = env->AllocObject (g3d_class);

    jobject  g3d_entity        = env->NewGlobalRef (g3d_obj);
    setNativePointer (env, g3d_obj, g3d);
    g3d->setExportedEntity (g3d_entity);

    env->DeleteLocalRef (g3d_class);
    env->DeleteLocalRef (g3d_obj);
}


void Java_build_Graphics3D (JNIEnv* env, jobject g3d_obj, m3g::Graphics3D* bg)
{
    // nothing to do
}

