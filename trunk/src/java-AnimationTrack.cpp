#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;


/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1initialize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_getController
 * Signature: ()Lorg/karlsland/m3g/AnimationController;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1getController
  (JNIEnv* env, jobject obj)
{
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_getKeyframeSequence
 * Signature: ()Lorg/karlsland/m3g/KeyframeSequence;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1getKeyframeSequence
  (JNIEnv* env, jobject obj)
{
    return (jobject)NULL;
}


/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_getTargetProperty
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1getTargetProperty
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_setController
 * Signature: (Lorg/karlsland/m3g/AnimationController;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1setController
  (JNIEnv* env, jobject obj, jobject controller)
{


}

/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1print
  (JNIEnv *, jobject)
{

}

