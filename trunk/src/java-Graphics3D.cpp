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

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_addLight
 * Signature: (Lorg/karlsland/m3g/Light;Lorg/karlsland/m3g/Transform;)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1addLight
  (JNIEnv* env, jobject obj, jobject light, jobject transform)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_bindTarget
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1bindTarget__Ljava_lang_Object_2
  (JNIEnv* env, jobject obj, jobject target)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_bindTarget
 * Signature: (Ljava/lang/Object;ZI)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1bindTarget__Ljava_lang_Object_2ZI
  (JNIEnv* env, jobject obj, jobject target, jboolean depthBufferEnable, jint hints)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_clear
 * Signature: (Lorg/karlsland/m3g/Background;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1clear
  (JNIEnv* env, jobject obj, jobject background)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getCamera
 * Signature: (Lorg/karlsland/m3g/Transform;)Lorg/karlsland/m3g/Camera;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getCamera
  (JNIEnv* env, jobject obj, jobject transform)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getDepthRangeFar
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getDepthRangeFar
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getDepthRangeNear
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getDepthRangeNear
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getHints
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getHints
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getInstance
 * Signature: ()Lorg/karlsland/m3g/Graphics3D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getInstance
  (JNIEnv* env, jclass clazz)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getLight
 * Signature: (ILorg/karlsland/m3g/Transform;)Lorg/karlsland/m3g/Light;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getLight
  (JNIEnv* env, jobject obj, jint index, jobject transform)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getLightCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getLightCount
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getProperties
 * Signature: ()Ljava/util/Hashtable;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getProperties
  (JNIEnv* env, jclass clazz)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getTarget
 * Signature: ()Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getTarget
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getViewportHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getViewportHeight
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getViewportWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getViewportWidth
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getViewportX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getViewportX
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_getViewportY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1getViewportY
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_isDepthBufferEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1isDepthBufferEnabled
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_releaseTarget
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1releaseTarget
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_render
 * Signature: (Lorg/karlsland/m3g/Node;Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1render__Lorg_karlsland_m3g_Node_2Lorg_karlsland_m3g_Transform_2
  (JNIEnv* env, jobject obj, jobject node, jobject transform)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_render
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;Lorg/karlsland/m3g/IndexBuffer;Lorg/karlsland/m3g/Appearance;Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1render__Lorg_karlsland_m3g_VertexBuffer_2Lorg_karlsland_m3g_IndexBuffer_2Lorg_karlsland_m3g_Appearance_2Lorg_karlsland_m3g_Transform_2
  (JNIEnv* env, jobject obj, jobject vertices, jobject triangles, jobject appearances, jobject transform)
{
    
}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_render
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;Lorg/karlsland/m3g/IndexBuffer;Lorg/karlsland/m3g/Appearance;Lorg/karlsland/m3g/Transform;I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1render__Lorg_karlsland_m3g_VertexBuffer_2Lorg_karlsland_m3g_IndexBuffer_2Lorg_karlsland_m3g_Appearance_2Lorg_karlsland_m3g_Transform_2I
  (JNIEnv* env, jobject obj, jobject vertices, jobject triangles, jobject appearances, jobject transform, jint scope)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_render
 * Signature: (Lorg/karlsland/m3g/World;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1render__Lorg_karlsland_m3g_World_2
  (JNIEnv* env, jobject obj, jobject world)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_resetLights
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1resetLights
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_setCamera
 * Signature: (Lorg/karlsland/m3g/Camera;Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1setCamera
  (JNIEnv* env, jobject obj, jobject camera, jobject transform)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_setDepthRange
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1setDepthRange
  (JNIEnv* env, jobject obj, jfloat, jfloat)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_setLight
 * Signature: (ILorg/karlsland/m3g/Light;Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1setLight
  (JNIEnv* env, jobject obj, jint index, jobject light, jobject transform)
{

}

/*
 * Class:     org_karlsland_m3g_Graphics3D
 * Method:    jni_setViewport
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Graphics3D_jni_1setViewport
  (JNIEnv* env, jobject obj, jint x, jint y, jint width, jint height)
{

}

