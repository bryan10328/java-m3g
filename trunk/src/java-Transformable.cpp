#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1initialize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_getCompositeTransform
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1getCompositeTransform
  (JNIEnv* env, jobject obj, jobject transform)
{

}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_getOrientation
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1getOrientation
  (JNIEnv* env, jobject obj, jfloatArray angleAxis)
{

}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_getScale
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1getScale
  (JNIEnv* env, jobject obj, jfloatArray xyz)
{

}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_getTransform
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1getTransform
  (JNIEnv* env, jobject obj, jobject transform)
{

}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_getTranslation
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1getTranslation
  (JNIEnv* env, jobject obj, jfloatArray transform)
{

}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_postRotate
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1postRotate
  (JNIEnv* env, jobject obj, jfloat angle, jfloat ax, jfloat ay, jfloat az)
{

}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_preRotate
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1preRotate
  (JNIEnv* env, jobject obj, jfloat angle, jfloat ax, jfloat ay, jfloat az)
{

}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_scale
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1scale
  (JNIEnv* env, jobject obj, jfloat sx, jfloat sy, jfloat sz)
{

}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_setOrientation
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1setOrientation
  (JNIEnv* env, jobject obj, jfloat angle, jfloat ax, jfloat ay, jfloat az)
{

}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_setScale
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1setScale
  (JNIEnv* env, jobject obj, jfloat sx, jfloat sy, jfloat sz)
{

}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_setTransform
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1setTransform
  (JNIEnv* env, jobject obj, jobject transform)
{

}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_setTranslation
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1setTranslation
  (JNIEnv* env, jobject obj, jfloat tx, jfloat ty, jfloat tz)
{

}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_translation
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1translation
  (JNIEnv* env, jobject obj, jfloat tx, jfloat ty, jfloat tz)
{

}

