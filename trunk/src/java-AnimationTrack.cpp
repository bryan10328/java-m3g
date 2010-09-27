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
 * Signature: (Lorg/karlsland/m3g/KeyframeSequence;I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1initialize
  (JNIEnv* env, jobject obj, jobject keyframeSequence, jint property)
{
    cout << "Java-AnimationTrack: initilize is called.\n";
    KeyframeSequence* key_seq = (KeyframeSequence*)getNativePointer (env, keyframeSequence);
    AnimationTrack* anim_track;
    __TRY__;
    anim_track = new AnimationTrack (key_seq, property);
    __CATCH_VOID__;
    setNativePointer (env, obj, anim_track);
    jobject entity = env->NewGlobalRef (obj);
    anim_track->setExportedEntity (entity);
}


/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-AnimationTrack: finalize is called.\n";
    AnimationTrack* anim_track = (AnimationTrack*)getNativePointer (env, obj);
    __TRY__;
    delete anim_track;
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_getController
 * Signature: ()Lorg/karlsland/m3g/AnimationController;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1getController
  (JNIEnv* env, jobject obj)
{
    cout << "Java-AnimationTrack: getController is called.\n";
    AnimationTrack* anim_track = (AnimationTrack*)getNativePointer (env, obj);
    AnimationController* anim_cntr;
    __TRY__;
    anim_cntr = anim_track->getController ();
    __CATCH_JOBJECT__;
    return (anim_cntr != NULL) ? (jobject)anim_cntr->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_getKeyframeSequence
 * Signature: ()Lorg/karlsland/m3g/KeyframeSequence;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1getKeyframeSequence
  (JNIEnv* env, jobject obj)
{
    cout << "Java-AnimationTrack: getKeyframeSequence is called.\n";
    AnimationTrack*   anim_track = (AnimationTrack*)getNativePointer (env, obj);
    KeyframeSequence* key_seq;
    __TRY__;
    key_seq = anim_track->getKeyframeSequence ();
    __CATCH_JOBJECT__;
    return (key_seq != NULL) ? (jobject)key_seq->getExportedEntity() : (jobject)NULL;
}


/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_getTargetProperty
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1getTargetProperty
  (JNIEnv* env, jobject obj)
{
    cout << "Java-AnimationTrack: getTargetProperty is called.\n";
    AnimationTrack* anim_track = (AnimationTrack*)getNativePointer (env, obj);
    int property;
    __TRY__;
    property = anim_track->getTargetProperty ();
    __CATCH_INT__;
    return property;
}

/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_setController
 * Signature: (Lorg/karlsland/m3g/AnimationController;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1setController
  (JNIEnv* env, jobject obj, jobject animationController)
{
    cout << "Java-AnimationTrack: setController is called.\n";
    AnimationTrack*      anim_track = (AnimationTrack*)getNativePointer (env, obj);
    AnimationController* anim_cntr  = (AnimationController*)getNativePointer (env, animationController);
    __TRY__;
    anim_track->setController (anim_cntr);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-AnimationTrack: print is called.\n";
    AnimationTrack* anim_track = (AnimationTrack*)getNativePointer (env, obj);
    __TRY__;
    anim_track->print (cout) << "\n";
    __CATCH_VOID__;
}

