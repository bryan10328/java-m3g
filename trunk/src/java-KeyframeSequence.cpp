#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;


/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1initialize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getComponentCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getComponentCount
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getDuration
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getDuration
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getInterpolationType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getInterpolationType
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getKeyframe
 * Signature: (I[F)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getKeyframe
  (JNIEnv* env, jobject obj, jint index, jfloatArray value)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getKeyframeCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getKeyframeCount
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getRepeatMode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getRepeatMode
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getValidRangeFirst
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getValidRangeFirst
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getValidRangeLast
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getValidRangeLast
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_setDuration
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1setDuration
  (JNIEnv* env, jobject obj, jint duration)
{

}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_setKeyframe
 * Signature: (II[F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1setKeyframe
  (JNIEnv* env, jobject obj, jint index, jint time, jfloatArray value)
{

}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_setRepeateMode
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1setRepeateMode
  (JNIEnv* env, jobject obj, jint mode)
{

}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_setValidRange
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1setValidRange
  (JNIEnv* env, jobject obj, jint first, jint last)
{

}

