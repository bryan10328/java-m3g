#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1initialize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getDistance
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getIntersected
 * Signature: ()Lorg/karlsland/m3g/Node;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getIntersected
  (JNIEnv* env, jobject obj)
{
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getNormalX
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getNormalX
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getNormalY
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getNormalY
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getNormalZ
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getNormalZ
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getRay
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getRay
  (JNIEnv* env, jobject obj, jfloatArray ray)
{

}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getSubmeshIndex
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getSubmeshIndex
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getTextureS
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getTextureS
  (JNIEnv* env, jobject obj, jint index)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getTextureT
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getTextureT
  (JNIEnv* env, jobject obj, jint index)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1print
  (JNIEnv *, jobject)
{

}
