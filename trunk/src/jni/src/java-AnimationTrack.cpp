#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/KeyframeSequence;I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1initialize
  (JNIEnv* env, jobject thiz, jobject keyframeSequence, jint property)
{
    cout << "Java-AnimationTrack: initilize is called.\n";
    KeyframeSequence* key_seq    = (KeyframeSequence*)getNativePointer (env, keyframeSequence);
    AnimationTrack*   anim_track = NULL;
    __TRY__;
    anim_track = new AnimationTrack (key_seq, property);
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer (env, thiz, anim_track);
    jobject entity = env->NewGlobalRef (thiz);
    anim_track->setExportedEntity (entity);
}


/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-AnimationTrack: finalize is called.\n";
    AnimationTrack* anim_track = (AnimationTrack*)getNativePointer (env, thiz);
    env->DeleteGlobalRef ((jobject)anim_track->getExportedEntity());
    addUsedObject (anim_track);
}

/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_getController
 * Signature: ()Lorg/karlsland/m3g/AnimationController;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1getController
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-AnimationTrack: getController is called.\n";
    AnimationTrack*      anim_track = (AnimationTrack*)getNativePointer (env, thiz);
    AnimationController* anim_cntr  = NULL;
    __TRY__;
    anim_cntr = anim_track->getController ();
    __CATCH__;
    return (anim_cntr != NULL) ? (jobject)anim_cntr->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_getKeyframeSequence
 * Signature: ()Lorg/karlsland/m3g/KeyframeSequence;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1getKeyframeSequence
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-AnimationTrack: getKeyframeSequence is called.\n";
    AnimationTrack*   anim_track = (AnimationTrack*)getNativePointer (env, thiz);
    KeyframeSequence* key_seq    = NULL;
    __TRY__;
    key_seq = anim_track->getKeyframeSequence ();
    __CATCH__;
    return (key_seq != NULL) ? (jobject)key_seq->getExportedEntity() : (jobject)NULL;
}


/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_getTargetProperty
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1getTargetProperty
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-AnimationTrack: getTargetProperty is called.\n";
    AnimationTrack* anim_track = (AnimationTrack*)getNativePointer (env, thiz);
    int property = 0;
    __TRY__;
    property = anim_track->getTargetProperty ();
    __CATCH__;
    return property;
}

/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_setController
 * Signature: (Lorg/karlsland/m3g/AnimationController;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1setController
  (JNIEnv* env, jobject thiz, jobject animationController)
{
    cout << "Java-AnimationTrack: setController is called.\n";
    AnimationTrack*      anim_track = (AnimationTrack*)getNativePointer (env, thiz);
    AnimationController* anim_cntr  = (AnimationController*)getNativePointer (env, animationController);
    __TRY__;
    anim_track->setController (anim_cntr);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_AnimationTrack
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_AnimationTrack_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-AnimationTrack: print is called.\n";
    AnimationTrack* anim_track = (AnimationTrack*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    anim_track->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}

#include <android/log.h>

void Java_new_AnimationTrack      (JNIEnv* env, m3g::Object3D* obj)
{
    __android_log_print (ANDROID_LOG_INFO, "NDK", "start of Java_new_AnimationTrack");
    cout << "Java-Loader: build java AnimationTrack.\n";
    AnimationTrack* track     = dynamic_cast<AnimationTrack*>(obj);
    jobject         track_obj = allocJavaObject (env, "org/karlsland/m3g/AnimationTrack", track);

    __android_log_print (ANDROID_LOG_INFO, "NDK", "before build.");
    Java_build_Object3D       (env, track_obj, track);
    __android_log_print (ANDROID_LOG_INFO, "NDK", "mid build.");
    Java_build_AnimationTrack (env, track_obj, track);
    __android_log_print (ANDROID_LOG_INFO, "NDK", "after build.");
}



void Java_build_AnimationTrack (JNIEnv* env, jobject track_obj, m3g::AnimationTrack* track)
{
    __android_log_print (ANDROID_LOG_INFO, "NDK", "start of Java_build_AnimationTrack");
    jclass   track_class      = env->GetObjectClass (track_obj);
    jfieldID track_key_seq    = env->GetFieldID     (track_class, "keyframeSequence", "Lorg/karlsland/m3g/KeyframeSequence;");
    jfieldID track_controller = env->GetFieldID     (track_class, "animationController", "Lorg/karlsland/m3g/AnimationController;");

    __android_log_print (ANDROID_LOG_INFO, "NDK", "1.");
    KeyframeSequence* key_seq = track->getKeyframeSequence ();
    if (key_seq) {
        if (key_seq->getExportedEntity() == 0) {
            Java_new_JavaM3GObject (env, key_seq);
        }
        env->SetObjectField (track_obj, track_key_seq, (jobject)key_seq->getExportedEntity());
    }
    __android_log_print (ANDROID_LOG_INFO, "NDK", "2.");

    AnimationController* controller = track->getController ();
    if (controller) {
        if (controller->getExportedEntity() == 0) {
            Java_new_JavaM3GObject (env, controller);
        }
        env->SetObjectField (track_obj, track_controller, (jobject)controller->getExportedEntity());
    }
    __android_log_print (ANDROID_LOG_INFO, "NDK", "3.");
    __android_log_print (ANDROID_LOG_INFO, "NDK", "end of Java_build_AnimationTrack");
}
