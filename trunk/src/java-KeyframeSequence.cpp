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
  (JNIEnv* env, jobject obj, jint numKeyframes, jint numComponents, jint interolation)
{
    cout << "Java-KeyframeSequence: initilize is called.\n";
    KeyframeSequence* key_seq = new KeyframeSequence (numKeyframes, numComponents, interolation);
    setNativePointer (env, obj, key_seq);
    jobject entity = env->NewGlobalRef (obj);
    key_seq->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-KeyframeSequence: finalize is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, obj);
    delete key_seq;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getComponentCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getComponentCount
  (JNIEnv* env, jobject obj)
{
    cout << "Java-KeyframeSequence: getComponentCount is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, obj);
    int count = key_seq->getComponentCount ();
    return count;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getDuration
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getDuration
  (JNIEnv* env, jobject obj)
{
    cout << "Java-KeyframeSequence: getDuration is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, obj);
    int duration = key_seq->getDuration ();
    return duration;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getInterpolationType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getInterpolationType
  (JNIEnv* env, jobject obj)
{
    cout << "Java-KeyframeSequence: getInterpolationType is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, obj);
    int type = key_seq->getInterpolationType ();
    return type;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getKeyframe
 * Signature: (I[F)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getKeyframe
  (JNIEnv* env, jobject obj, jint index, jfloatArray value)
{
    cout << "Java-KeyframeSequence: getKeyframe is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, obj);
    float* v = env->GetFloatArrayElements (value, 0);
    int time = key_seq->getKeyframe (index, v);
    env->ReleaseFloatArrayElements (value, v, 0);
    return time;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getKeyframeCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getKeyframeCount
  (JNIEnv* env, jobject obj)
{
    cout << "Java-KeyframeSequence: getKeyframeCount is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, obj);
    int count = key_seq->getKeyframeCount ();
    return count;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getRepeatMode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getRepeatMode
  (JNIEnv* env, jobject obj)
{
    cout << "Java-KeyframeSequence: getRepeatMode is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, obj);
    int mode = key_seq->getRepeatMode ();
    return mode;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getValidRangeFirst
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getValidRangeFirst
  (JNIEnv* env, jobject obj)
{
    cout << "Java-KeyframeSequence: getValidRnageFirst is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, obj);
    int first = key_seq->getValidRangeFirst ();
    return first;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getValidRangeLast
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getValidRangeLast
  (JNIEnv* env, jobject obj)
{
    cout << "Java-KeyframeSequence: getValidRangeLast is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, obj);
    int last = key_seq->getValidRangeLast ();
    return last;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_setDuration
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1setDuration
  (JNIEnv* env, jobject obj, jint duration)
{
    cout << "Java-KeyframeSequence: setDuration is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, obj);
    key_seq->setDuration (duration);
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_setKeyframe
 * Signature: (II[F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1setKeyframe
  (JNIEnv* env, jobject obj, jint index, jint time, jfloatArray value)
{
    cout << "Java-KeyframeSequence: setKeyframe is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, obj);
    float* v = env->GetFloatArrayElements (value, 0);
    key_seq->setKeyframe (index, time, v);
    env->ReleaseFloatArrayElements (value, v, 0);
}


/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_setRepeatMode
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1setRepeatMode
  (JNIEnv* env, jobject obj, jint mode)
{
    cout << "Java-KeyframeSequence: setRepeatMode is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, obj);
    key_seq->setRepeatMode (mode);
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_setValidRange
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1setValidRange
  (JNIEnv* env, jobject obj, jint first, jint last)
{
    cout << "Java-KeyframeSequence: setValidRange is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, obj);
    key_seq->print (cout) << "\n";
    key_seq->setValidRange (first, last);
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-KeyframeSequence: print is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, obj);
    key_seq->print (cout) << "\n";
}
