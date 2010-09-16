#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1initialize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_addAnimationTrack
 * Signature: (Lorg/karlsland/m3g/AnimationTrack;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1addAnimationTrack
  (JNIEnv* env, jobject obj, jobject animationTrack);

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_animate
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Object3D_jni_1animate
  (JNIEnv* env, jobject obj, jint worldTime)
{

}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_duplicate
 * Signature: ()Lorg/karlsland/m3g/Object3D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Object3D_jni_1duplicate
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_find
 * Signature: (I)Lorg/karlsland/m3g/Object3D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Object3D_jni_1find
  (JNIEnv* env, jobject obj, jint userID)
{

}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_getAnimationTrack
 * Signature: (I)Lorg/karlsland/m3g/AnimationTrack;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Object3D_jni_1getAnimationTrack
  (JNIEnv* env, jobject obj, jint index)
{

}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_getAnimationTrackCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Object3D_jni_1getAnimationTrackCount
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_getReferences
 * Signature: ([Lorg/karlsland/m3g/Object3D;)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Object3D_jni_1getReferences
  (JNIEnv* env, jobject obj, jobjectArray references)
{

}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_getUserID
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Object3D_jni_1getUserID
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_getUserObject
 * Signature: ()Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Object3D_jni_1getUserObject
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_removeAnimationTrack
 * Signature: (Lorg/karlsland/m3g/AnimationTrack;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1removeAnimationTrack
  (JNIEnv* env, jobject obj, jobject animationTrack)
{

}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_setUserID
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1setUserID
  (JNIEnv* env, jobject obj, jint userID)
{

}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_setUserObject
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1setUserObject
  (JNIEnv* env, jobject obj, jobject userObject)
{

}

