#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1initialize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_align
 * Signature: (Lorg/karlsland/m3g/Node;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1align
  (JNIEnv* env, jobject obj, jobject)
{

}


/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_getAlignmentReference
 * Signature: (I)Lorg/karlsland/m3g/Node;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Node_jni_1getAlignmentReference
  (JNIEnv* env, jobject obj, jint)
{

}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_getAlignmentTarget
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Node_jni_1getAlignmentTarget
  (JNIEnv* env, jobject obj, jint)
{

}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_getAlphaFactor
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Node_jni_1getAlphaFactor
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_getParent
 * Signature: ()Lorg/karlsland/m3g/Node;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Node_jni_1getParent
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_getScope
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Node_jni_1getScope
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_getTransformTo
 * Signature: (Lorg/karlsland/m3g/Node;Lorg/karlsland/m3g/Transform;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Node_jni_1getTransformTo
  (JNIEnv* env, jobject obj, jobject target, jobject transform)
{

}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_isPickingEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Node_jni_1isPickingEnabled
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_isRenderingEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Node_jni_1isRenderingEnabled
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_setAlignment
 * Signature: (Lorg/karlsland/m3g/Node;ILorg/karlsland/m3g/Node;I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1setAlignment
  (JNIEnv* env, jobject obj, jobject, jint, jobject, jint)
{

}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_setAlphaFactor
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1setAlphaFactor
  (JNIEnv* env, jobject obj, jfloat alpha)
{

}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_setPickingEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1setPickingEnable
  (JNIEnv* env, jobject obj, jboolean enable)
{

}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_setRenderingEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1setRenderingEnable
  (JNIEnv* env, jobject obj, jboolean)
{

}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_setScope
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1setScope
  (JNIEnv* env, jobject obj, jint scope)
{

}

