#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Material
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Material_jni_1initialize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Material
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Material_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Material
 * Method:    jni_getColor
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Material_jni_1getColor
  (JNIEnv* env, jobject obj, jint target)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Material
 * Method:    jni_getShininess
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Material_jni_1getShininess
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Material
 * Method:    jni_isVertexColorTrackingEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Material_jni_1isVertexColorTrackingEnabled
  (JNIEnv* env, jobject obj)
{
    return false;
}

/*
 * Class:     org_karlsland_m3g_Material
 * Method:    jni_setColor
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Material_jni_1setColor
  (JNIEnv* env, jobject obj, jint target, jint ARGB)
{

}

/*
 * Class:     org_karlsland_m3g_Material
 * Method:    jni_setShininess
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Material_jni_1setShininess
  (JNIEnv* env, jobject obj, jfloat shininess)
{

}

/*
 * Class:     org_karlsland_m3g_Material
 * Method:    jni_setVertexColorTrackingEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Material_jni_1setVertexColorTrackingEnable
  (JNIEnv* env, jobject obj, jboolean enable)
{

}

/*
 * Class:     org_karlsland_m3g_Material
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Material_jni_1print
  (JNIEnv *, jobject)
{

}
