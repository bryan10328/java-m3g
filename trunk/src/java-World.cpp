#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;


/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_World_jni_1initialize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_World_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_getActiveCamera
 * Signature: ()Lorg/karlsland/m3g/Camera;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_World_jni_1getActiveCamera
  (JNIEnv* env, jobject obj)
{
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_getBackground
 * Signature: ()Lorg/karlsland/m3g/Background;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_World_jni_1getBackground
  (JNIEnv* env, jobject obj)
{
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_setActiveCamera
 * Signature: (Lorg/karlsland/m3g/Camera;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_World_jni_1setActiveCamera
  (JNIEnv* env, jobject obj, jobject camera)
{

}

/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_setBackground
 * Signature: (Lorg/karlsland/m3g/Background;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_World_jni_1setBackground
  (JNIEnv* env, jobject obj, jobject background)
{

}

