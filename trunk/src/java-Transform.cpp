#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1initialize__
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1initialize__Lorg_karlsland_m3g_Transform_2
  (JNIEnv* env, jobject obj, jobject transform)
{

}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_get
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1get
  (JNIEnv* env, jobject obj, jfloatArray matrix)
{

}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_invert
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1invert
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_postMultiply
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1postMultiply
  (JNIEnv* env, jobject obj, jobject transform)
{

}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_postRotate
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1postRotate
  (JNIEnv* env, jobject obj, jfloat angle, jfloat ax, jfloat ay, jfloat az)
{

}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_postRotateQuat
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1postRotateQuat
  (JNIEnv* env, jobject obj, jfloat qx, jfloat qy, jfloat qz, jfloat qw)
{

}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_postScale
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1postScale
  (JNIEnv* env, jobject obj, jfloat sx, jfloat sy, jfloat sz)
{

}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_postTranslate
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1postTranslate
  (JNIEnv* env, jobject obj, jfloat tx, jfloat ty, jfloat tz)
{

}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_set
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1set___3F
  (JNIEnv* env, jobject obj, jfloatArray matrix)
{

}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_set
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1set__Lorg_karlsland_m3g_Transform_2
  (JNIEnv* env, jobject obj, jobject transform)
{

}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_setIdentity
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1setIdentity
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_transform
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1transform___3F
  (JNIEnv* env, jobject obj, jfloatArray vectors)
{

}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_transform
 * Signature: (Lorg/karlsland/m3g/VertexArray;[FZ)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1transform__Lorg_karlsland_m3g_VertexArray_2_3FZ
  (JNIEnv* env, jobject obj, jobject in, jfloatArray out, jboolean W)
{

}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_transpose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1transpose
  (JNIEnv* env, jobject obj)
{

}

