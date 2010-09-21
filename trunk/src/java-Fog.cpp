#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1initialize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}


/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_getColor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Fog_jni_1getColor
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_getDensity
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Fog_jni_1getDensity
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_getFarDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Fog_jni_1getFarDistance
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_getMode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Fog_jni_1getMode
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_getNearDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Fog_jni_1getNearDistance
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_setColor
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1setColor
  (JNIEnv* env, jobject obj, jint color)
{
    
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_setDensity
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1setDensity
  (JNIEnv* env, jobject obj, jfloat density)
{

}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_setLinear
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1setLinear
  (JNIEnv* env, jobject obj, jfloat near, jfloat far)
{

}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_setMode
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1setMode
  (JNIEnv* env, jobject obj, jint mode)
{

}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1print
  (JNIEnv *, jobject)
{

}
