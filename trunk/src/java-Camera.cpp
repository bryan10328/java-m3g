#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Camera_jni_1initialize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Camera_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_getProjection
 * Signature: ([F)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Camera_jni_1getProjection___3F
  (JNIEnv* env, jobject obj, jfloatArray params)
{

}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_getProjection
 * Signature: (Lorg/karlsland/m3g/Transform;)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Camera_jni_1getProjection__Lorg_karlsland_m3g_Transform_2
  (JNIEnv* env, jobject obj, jobject transform)
{

}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_setGeneric
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Camera_jni_1setGeneric
  (JNIEnv* env, jobject obj, jobject transform)
{

}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_setParallel
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Camera_jni_1setParallel
  (JNIEnv* env, jobject obj, jfloat fovy, jfloat aspectRatio, jfloat near, jfloat far)
{

}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_setPerspective
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Camera_jni_1setPerspective
  (JNIEnv* env, jobject obj, jfloat fovy, jfloat aspectRatio, jfloat near, jfloat far)
{

}

