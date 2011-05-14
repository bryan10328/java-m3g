#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
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
    KeyframeSequence* key_seq = NULL;
    __TRY__;
    key_seq = new KeyframeSequence (numKeyframes, numComponents, interolation);
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer  (env, thiz, key_seq);
    bindJavaReference (env, thiz, key_seq);
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
    releaseJavaReference (env, key_seq);
    addUsedObject (key_seq);
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
    int count = 0;
    __TRY__;
    count = key_seq->getComponentCount ();
    __CATCH__;
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
    int duration = 0;
    __TRY__;
    duration = key_seq->getDuration ();
    __CATCH__;
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
    int type = 0;
    __TRY__;
    type = key_seq->getInterpolationType ();
    __CATCH__;
    return type;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_getKeyframe
 * Signature: (I[F)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1getKeyframe
  (JNIEnv* env, jobject thiz, jint index, jfloatArray value_array)
{
    cout << "Java-KeyframeSequence: getKeyframe is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, thiz);
    float*            value   = getFloatArrayPointer (env, value_array);
    int    time = 0;
    __TRY__;
    time = key_seq->getKeyframe (index, value);
    __CATCH__;
    releaseFloatArrayPointer (env, value_array, value);
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
    int count = 0;
    __TRY__;
    count = key_seq->getKeyframeCount ();
    __CATCH__;
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
    int mode = 0;
    __TRY__;
    mode = key_seq->getRepeatMode ();
    __CATCH__;
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
    int first = 0;
    __TRY__;
    first = key_seq->getValidRangeFirst ();
    __CATCH__;
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
    int last = 0;
    __TRY__;
    last = key_seq->getValidRangeLast ();
    __CATCH__;
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
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_setKeyframe
 * Signature: (II[F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1setKeyframe
  (JNIEnv* env, jobject thiz, jint index, jint time, jfloatArray value_array)
{
    cout << "Java-KeyframeSequence: setKeyframe is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, thiz);
    float*            value   = getFloatArrayPointer (env, value_array);
    __TRY__;
    key_seq->setKeyframe (index, time, value);
    __CATCH__;
    releaseFloatArrayPointer (env, value_array, value);
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
    __CATCH__;
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
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_KeyframeSequence
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_KeyframeSequence_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-KeyframeSequence: print is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    key_seq->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}

void Java_new_KeyframeSequence    (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java KeyframeSequence.\n";
    KeyframeSequence* key_seq     = dynamic_cast<KeyframeSequence*>(obj);
    jobject           key_seq_obj = allocJavaObject (env, "org/karlsland/m3g/KeyframeSequence");
    setNativePointer  (env, key_seq_obj, key_seq);
    bindJavaReference (env, key_seq_obj, key_seq);

    Java_build_Object3D         (env, key_seq_obj, key_seq);
    Java_build_KeyframeSequence (env, key_seq_obj, key_seq);

    env->DeleteLocalRef (key_seq_obj);
}


void Java_build_KeyframeSequence (JNIEnv* env, jobject key_seq_obj, m3g::KeyframeSequence* key_seq)
{
    // nothing to do
}
