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
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1initialize
  (JNIEnv* env, jobject thiz, jint numKeyframes, jint numComponents, jint interolation)
{
    cout << "Java-KeyframeSequence: initilize is called.\n";
    KeyframeSequence* key_seq;
    __TRY__;
    key_seq = new KeyframeSequence (numKeyframes, numComponents, interolation);
    __CATCH_VOID__;
    setNativePointer (env, thiz, key_seq);
    jobject entity = env->NewWeakGlobalRef (thiz);
    key_seq->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-KeyframeSequence: finalize is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, thiz);
    env->DeleteWeakGlobalRef ((jobject)key_seq->getExportedEntity());
    __TRY__;
    delete key_seq;
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getComponentCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getComponentCount
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-KeyframeSequence: getComponentCount is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, thiz);
    int count;
    __TRY__;
    count = key_seq->getComponentCount ();
    __CATCH_INT__;
    return count;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getDuration
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getDuration
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-KeyframeSequence: getDuration is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, thiz);
    int duration;
    __TRY__;
    duration = key_seq->getDuration ();
    __CATCH_INT__;
    return duration;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getInterpolationType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getInterpolationType
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-KeyframeSequence: getInterpolationType is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, thiz);
    int type;
    __TRY__;
    type = key_seq->getInterpolationType ();
    __CATCH_INT__;
    return type;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getKeyframe
 * Signature: (I[F)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getKeyframe
  (JNIEnv* env, jobject thiz, jint index, jfloatArray value)
{
    cout << "Java-KeyframeSequence: getKeyframe is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, thiz);
    float* v = env->GetFloatArrayElements (value, 0);
    int time;
    __TRY__;
    time = key_seq->getKeyframe (index, v);
    __CATCH_INT__;
    env->ReleaseFloatArrayElements (value, v, 0);
    return time;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getKeyframeCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getKeyframeCount
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-KeyframeSequence: getKeyframeCount is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, thiz);
    int count;
    __TRY__;
    count = key_seq->getKeyframeCount ();
    __CATCH_INT__;
    return count;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getRepeatMode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getRepeatMode
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-KeyframeSequence: getRepeatMode is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, thiz);
    int mode;
    __TRY__;
    mode = key_seq->getRepeatMode ();
    __CATCH_INT__;
    return mode;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getValidRangeFirst
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getValidRangeFirst
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-KeyframeSequence: getValidRnageFirst is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, thiz);
    int first;
    __TRY__;
    first = key_seq->getValidRangeFirst ();
    __CATCH_INT__;
    return first;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getValidRangeLast
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getValidRangeLast
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-KeyframeSequence: getValidRangeLast is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, thiz);
    int last;
    __TRY__;
    last = key_seq->getValidRangeLast ();
    __CATCH_INT__;
    return last;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_setDuration
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1setDuration
  (JNIEnv* env, jobject thiz, jint duration)
{
    cout << "Java-KeyframeSequence: setDuration is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, thiz);
    __TRY__;
    key_seq->setDuration (duration);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_setKeyframe
 * Signature: (II[F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1setKeyframe
  (JNIEnv* env, jobject thiz, jint index, jint time, jfloatArray value)
{
    cout << "Java-KeyframeSequence: setKeyframe is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, thiz);
    float* v = env->GetFloatArrayElements (value, 0);
    __TRY__;
    key_seq->setKeyframe (index, time, v);
    __CATCH_VOID__;
    env->ReleaseFloatArrayElements (value, v, 0);
}


/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_setRepeatMode
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1setRepeatMode
  (JNIEnv* env, jobject thiz, jint mode)
{
    cout << "Java-KeyframeSequence: setRepeatMode is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, thiz);
    __TRY__;
    key_seq->setRepeatMode (mode);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_setValidRange
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1setValidRange
  (JNIEnv* env, jobject thiz, jint first, jint last)
{
    cout << "Java-KeyframeSequence: setValidRange is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, thiz);
    __TRY__;
    key_seq->setValidRange (first, last);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-KeyframeSequence: print is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, thiz);
    __TRY__;
    key_seq->print (cout) << "\n";
    __CATCH_VOID__;
}
