#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1initialize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_getCulling
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1getCulling
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_getShading
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1getShading
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_getWinding
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1getWinding
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_isLocalCameraLightingEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1isLocalCameraLightingEnabled
  (JNIEnv* env, jobject obj)
{
    return false;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_isPerspectiveCorrectionEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1isPerspectiveCorrectionEnabled
  (JNIEnv* env, jobject obj)
{
    return false;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_isTwoSidedLightingEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1isTwoSidedLightingEnabled
  (JNIEnv* env, jobject obj)
{
    return false;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setCulling
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setCulling
  (JNIEnv* env, jobject obj, jint culling)
{

}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setLocalCameraLighting
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setLocalCameraLighting
  (JNIEnv* env, jobject obj, jboolean enable)
{

}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setPerspectiveCorrectionEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setPerspectiveCorrectionEnable
  (JNIEnv* env, jobject obj, jboolean enable)
{

}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setShading
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setShading
  (JNIEnv* env, jobject obj, jint shading)
{

}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setTwoSidedLightingEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setTwoSidedLightingEnable
  (JNIEnv* env, jobject obj, jboolean enable)
{

}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setWinding
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setWinding
  (JNIEnv* env, jobject obj, jint winding)
{

}

