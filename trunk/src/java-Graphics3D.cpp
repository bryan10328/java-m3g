#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1initialize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Graphics3D: initialize is called.\n";
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Graphics3D: finalize is called.\n";
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_addLight
 * Signature: (Lorg/karlsland/m3g/Light;Lorg/karlsland/m3g/Transform;)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1addLight
  (JNIEnv* env, jobject obj, jobject light, jobject transform)
{
    cout << "Java-Graphics3D: addLight is called.\n";
    // not implemented.
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_bindTarget
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1bindTarget__Ljava_lang_Object_2
  (JNIEnv* env, jobject obj, jobject target)
{
    cout << "Java-Graphics3D: bindTarget is called.\n";
    // not implemented.
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_bindTarget
 * Signature: (Ljava/lang/Object;ZI)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1bindTarget__Ljava_lang_Object_2ZI
  (JNIEnv* env, jobject obj, jobject target, jboolean depthBufferEnable, jint hints)
{
    cout << "Java-Graphics3D: bindTarget is called.\n";
    // not implemented.
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_clear
 * Signature: (Lorg/karlsland/m3g/Background;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1clear
  (JNIEnv* env, jobject obj, jobject background)
{
    cout << "Java-Graphics3D: clear is called.\n";
    // not implemented.
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getCamera
 * Signature: (Lorg/karlsland/m3g/Transform;)Lorg/karlsland/m3g/Camera;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getCamera
  (JNIEnv* env, jobject obj, jobject transform)
{
    cout << "Java-Graphics3D: getCamera is called.\n";
    // not implemented.
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getDepthRangeFar
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getDepthRangeFar
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Graphics3D: getDepthRangeFar is called.\n";
    // not implemented.
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getDepthRangeNear
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getDepthRangeNear
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Graphics3D: getDepthRangeNear is called.\n";
    // not implemented.
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getHints
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getHints
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Graphics3D: getHints is called.\n";
    // not implemented.
    return 0;
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
    Graphics3D* g3d = Graphics3D:: getInstance ();
    if (g3d->getExportedEntity() == NULL) {
        cout << "Java-Graphic3D: create Graphics3D.\n";
        jmethodID mid = env->GetMethodID (clazz, "<init>", "()V");
        cout << "Java-Graphics3D: mid = " << mid << "\n";
        jobject obj = env->NewObject (clazz, mid);
        cout << "Java-Graphics3D: obj = " << (void*)obj << "\n";
        setNativePointer (env, obj, g3d);
        jobject entity = env->NewGlobalRef (obj);
        cout << "Java-Graphics3D: entity = " << (void*)entity << "\n";
        g3d->setExportedEntity (entity);
    }
    return (g3d != NULL) ? (jobject)g3d->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getLight
 * Signature: (ILorg/karlsland/m3g/Transform;)Lorg/karlsland/m3g/Light;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getLight
  (JNIEnv* env, jobject obj, jint index, jobject transform)
{
    cout << "Java-Graphics3D: getLight is called.\n";
    // not implemented.
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getLightCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getLightCount
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Graphics3D: getLightCount is called.\n";
    // not implemented.
    return 0;
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
    // not implemented.
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getTarget
 * Signature: ()Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getTarget
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Graphics3D: getTarget is called.\n";
    // not implemented.
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getViewportHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getViewportHeight
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Graphics3D: getViewportHeight is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, obj);
    int height = g3d->getViewportHeight ();
    return height;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getViewportWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getViewportWidth
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Graphics3D: getViewportWidth is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, obj);
    int width = g3d->getViewportWidth ();
    return width;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getViewportX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getViewportX
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Graphics3D: getViewportX is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, obj);
    float x = g3d->getViewportX ();
    return x;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getViewportY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getViewportY
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Graphics3D: getViewportY is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, obj);
    float y = g3d->getViewportY ();
    return y;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_isDepthBufferEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1isDepthBufferEnabled
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Graphics3D: isDepthBufferEnabled is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, obj);
    bool enabled = g3d->isDepthBufferEnabled ();
    return enabled;
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_releaseTarget
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1releaseTarget
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Graphics3D: releaseTarget is called.\n";
    // not implemented.
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_render
 * Signature: (Lorg/karlsland/m3g/Node;Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1render__Lorg_karlsland_m3g_Node_2Lorg_karlsland_m3g_Transform_2
  (JNIEnv* env, jobject obj, jobject node, jobject transform)
{
    cout << "Java-Graphics3D: render1 is called.\n";
    // not implemented.
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_render
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;Lorg/karlsland/m3g/IndexBuffer;Lorg/karlsland/m3g/Appearance;Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1render__Lorg_karlsland_m3g_VertexBuffer_2Lorg_karlsland_m3g_IndexBuffer_2Lorg_karlsland_m3g_Appearance_2Lorg_karlsland_m3g_Transform_2
  (JNIEnv* env, jobject obj, jobject vertices, jobject triangles, jobject appearances, jobject transform)
{
    cout << "Java-Graphics3D: render2 is called.\n";
    // not implemented.
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_render
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;Lorg/karlsland/m3g/IndexBuffer;Lorg/karlsland/m3g/Appearance;Lorg/karlsland/m3g/Transform;I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1render__Lorg_karlsland_m3g_VertexBuffer_2Lorg_karlsland_m3g_IndexBuffer_2Lorg_karlsland_m3g_Appearance_2Lorg_karlsland_m3g_Transform_2I
  (JNIEnv* env, jobject obj, jobject vertices, jobject triangles, jobject appearances, jobject transform, jint scope)
{
    cout << "Java-Graphics3D: render3 is called.\n";
    // not implemented.
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_render
 * Signature: (Lorg/karlsland/m3g/World;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1render__Lorg_karlsland_m3g_World_2
  (JNIEnv* env, jobject obj, jobject world)
{
    cout << "Java-Graphics3D: render4(world) is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, obj);
    World*      wld = (World*)getNativePointer (env, world);
    g3d->render (wld);
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_resetLights
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1resetLights
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Graphics3D: resetLights is called.\n";
    // not implemented.
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_setCamera
 * Signature: (Lorg/karlsland/m3g/Camera;Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1setCamera
  (JNIEnv* env, jobject obj, jobject camera, jobject transform)
{
    cout << "Java-Graphics3D: setCamera is called.\n";
    // not implemented.
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_setDepthRange
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1setDepthRange
  (JNIEnv* env, jobject obj, jfloat, jfloat)
{
    cout << "Java-Graphics3D: setDepthRange is called.\n";
    // not implemented.
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_setLight
 * Signature: (ILorg/karlsland/m3g/Light;Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1setLight
  (JNIEnv* env, jobject obj, jint index, jobject light, jobject transform)
{
    cout << "Java-Graphics3D: setLight is called.\n";
    // not implemented.
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_setViewport
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1setViewport
  (JNIEnv* env, jobject obj, jint x, jint y, jint width, jint height)
{
    cout << "Java-Graphics3D: setViewport is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, obj);    
    g3d->setViewport (x, y, width, height);
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Graphics3D: print is called.\n";
    Graphics3D* g3d = (Graphics3D*)getNativePointer (env, obj);
    g3d->print (cout) << "\n";
}
