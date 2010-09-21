#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1initialize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getColor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Light_jni_1getColor
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getConstantAttenuation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Light_jni_1getConstantAttenuation
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getIntensity
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Light_jni_1getIntensity
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getLinearAttenuation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Light_jni_1getLinearAttenuation
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getMode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Light_jni_1getMode
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getQuadraticAttenuation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Light_jni_1getQuadraticAttenuation
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getSpotAngle
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Light_jni_1getSpotAngle
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getSpotExponent
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Light_jni_1getSpotExponent
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_setAttenuation
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1setAttenuation
  (JNIEnv* env, jobject obj, jfloat constant, jfloat linear, jfloat quadratic)
{

}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_setColor
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Light_jni_1setColor
  (JNIEnv* env, jobject obj, jint RGB)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_setIntensity
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1setIntensity
  (JNIEnv* env, jobject obj, jfloat intensity)
{

}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_setMode
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1setMode
  (JNIEnv* env, jobject obj, jint mode)
{

}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_setSpotAngle
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1setSpotAngle
  (JNIEnv* env, jobject obj, jfloat angle)
{

}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_setSpotExponent
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1setSpotExponent
  (JNIEnv* env, jobject obj, jfloat exponent)
{

}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1print
  (JNIEnv *, jobject)
{
}
