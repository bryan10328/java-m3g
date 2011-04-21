#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;
#include <cstdlib>

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1initialize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Object3D: Object3D initiazlize is called.\n";
    Object3D* obj3d = NULL;
    __TRY__;
    obj3d = new Object3D ();
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer (env, thiz, obj3d);
    jobject entity = env->NewGlobalRef (thiz);
    obj3d->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Object3D: Object3D finalize is called.\n";
    Object3D* obj3d      = (Object3D*)getNativePointer (env, thiz);
    void*     userObject = obj3d->getUserObject();
    if (userObject) {
        env->DeleteGlobalRef ((jobject)userObject);
    }
    env->DeleteGlobalRef ((jobject)obj3d->getExportedEntity());
    addUsedObject (obj3d);
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_addAnimationTrack
 * Signature: (Lorg/karlsland/m3g/AnimationTrack;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1addAnimationTrack
  (JNIEnv* env, jobject thiz, jobject animationTrack)
{
    cout << "Java-Object3D: Object3D addAnimationTrack is called.\n";
    Object3D*       obj3d = (Object3D*)getNativePointer (env, thiz);
    AnimationTrack* track = (AnimationTrack*)getNativePointer (env, animationTrack);
    __TRY__;
    obj3d->addAnimationTrack (track);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_animate
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Object3D_jni_1animate
  (JNIEnv* env, jobject thiz, jint worldTime)
{
    cout << "Java-Object3D: Object3D animate is called.\n";
    Object3D* obj3d = (Object3D*)getNativePointer (env, thiz);
    int time = 0;
    __TRY__;
    time = obj3d->animate (worldTime);
    __CATCH__;
    return time;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_duplicate
 * Signature: ()Lorg/karlsland/m3g/Object3D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Object3D_jni_1duplicate
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Object3D: Object3D duplicate is called.\n";
    Object3D* obj3d = (Object3D*)getNativePointer (env, thiz);
    Object3D* dup   = NULL;
    __TRY__;
    dup = obj3d->duplicate ();
    __CATCH__;
    cout << "Java-Object3D: dup1 = " << dup << "\n";
    if (dup && dup->getExportedEntity() == 0) {
        cout << "Java-Object3D: create duplicated Java Object3D.\n";
        Java_new_JavaM3GObject (env, dup);
        cout << "Java-Object3D: dup2 = " << dup << "\n";
    }
    cout << "Java-Object3D: entity = " << dup->getExportedEntity() << "\n";
    return (dup != NULL) ? (jobject)dup->getExportedEntity() : (jobject)0;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_find
 * Signature: (I)Lorg/karlsland/m3g/Object3D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Object3D_jni_1find
  (JNIEnv* env, jobject thiz, jint userID)
{
    cout << "Java-Object3D: Object3D find is called.\n";
    Object3D* obj3d = (Object3D*)getNativePointer (env, thiz);
    Object3D* find  = NULL;
    __TRY__;
    find = obj3d->find (userID);
    __CATCH__;
    return (find != NULL) ? (jobject)find->getExportedEntity() : (jobject)0;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_getAnimationTrack
 * Signature: (I)Lorg/karlsland/m3g/AnimationTrack;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Object3D_jni_1getAnimationTrack
  (JNIEnv* env, jobject thiz, jint index)
{
    cout << "Java-Object3D: Object3d getAnimationTrack is called.\n";
    Object3D*       obj3d = (Object3D*)getNativePointer (env, thiz);
    AnimationTrack* track = NULL;
    __TRY__;
    track = (AnimationTrack*)obj3d->getAnimationTrack (index);
    __CATCH__;
    return (track != NULL) ? (jobject)track->getExportedEntity() : (jobject)0;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_getAnimationTrackCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Object3D_jni_1getAnimationTrackCount
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Object3D: Object3d getAnimationTrackCount is called.\n";
    Object3D* obj3d = (Object3D*)getNativePointer (env, thiz);
    int count = 0;
    __TRY__;
    count = obj3d->getAnimationTrackCount ();
    __CATCH__;
    return count;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_getReferences
 * Signature: ([Lorg/karlsland/m3g/Object3D;)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Object3D_jni_1getReferences
  (JNIEnv* env, jobject thiz, jobjectArray references)
{
    cout << "Java-Object3D: Object3d getReferences is called.\n";
    Object3D*  obj3d = (Object3D*)getNativePointer (env, thiz);
    int        len   = env->GetArrayLength (references);
    Object3D** refs  = new Object3D* [len];
    int count = 0;
    __TRY__;
    count = obj3d->getReferences (refs);
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return 0;
    }
    for (int i = 0; i < count; i++) {
        jobject o = (refs[i] != NULL) ? (jobject)refs[i]->getExportedEntity() : (jobject)0;
        env->SetObjectArrayElement (references, i, o);
    }
    delete[] refs;
    return count;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_getUserID
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Object3D_jni_1getUserID
  (JNIEnv* env, jobject thiz)
{

    cout << "Java-Object3D: getUserID is called.\n";
    Object3D* obj3d = (Object3D*)getNativePointer (env, thiz);
    int       id    = 0;
    __TRY__;
    id = obj3d->getUserID ();
    __CATCH__;
    return id;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_getUserObject
 * Signature: ()Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Object3D_jni_1getUserObject
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Object3D: getUserObject is called.\n";
    Object3D* obj3d      = (Object3D*)getNativePointer (env, thiz);
    jobject   userObject = 0;
    __TRY__;
    userObject = (jobject)obj3d->getUserObject ();
    __CATCH__;
    return userObject;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_removeAnimationTrack
 * Signature: (Lorg/karlsland/m3g/AnimationTrack;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1removeAnimationTrack
  (JNIEnv* env, jobject thiz, jobject animationTrack)
{
    cout << "Java-Object3D: removeAnimationTrack is called.\n";
    Object3D*       obj3d = (Object3D*)getNativePointer (env, thiz);
    AnimationTrack* track = (AnimationTrack*)getNativePointer (env, animationTrack);
    __TRY__;
    obj3d->removeAnimationTrack (track);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_setUserID
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1setUserID
  (JNIEnv* env, jobject thiz, jint userID)
{
    cout << "Java-Object3D: serUserID is called.\n";
    Object3D* obj3d = (Object3D*)getNativePointer (env, thiz);
    __TRY__;
    obj3d->setUserID (userID);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_setUserObject
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1setUserObject
  (JNIEnv* env, jobject thiz, jobject userObject)
{
    cout << "Java-Object3D: setUserObject is called.\n";
    Object3D* obj3d  = (Object3D*)getNativePointer (env, thiz);
    jobject   entity = env->NewGlobalRef (userObject);
    __TRY__;
    obj3d->setUserObject (entity);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_Object3D_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Object3D: print is called.\n";
    Object3D* obj3d = (Object3D*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    obj3d->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}

void Java_build_Object3D (JNIEnv* env, jobject obj3d_obj, m3g::Object3D* obj3d)
{
    jclass   obj3d_class         = env->GetObjectClass (obj3d_obj);
    jfieldID obj3d_nativePointer = env->GetFieldID     (obj3d_class, "nativePointer", "J");
    jfieldID obj3d_tracks        = env->GetFieldID     (obj3d_class, "animationTracks", "Ljava/util/List;");
    jfieldID obj3d_userObject    = env->GetFieldID     (obj3d_class, "userObject", "Ljava/lang/Object;");

    jclass    tracks_class = env->FindClass   ("java/util/ArrayList");
    jmethodID tracks_init  = env->GetMethodID (tracks_class, "<init>", "()V");
    jmethodID tracks_add   = env->GetMethodID (tracks_class, "add", "(Ljava/lang/Object;)Z");
    jobject   tracks_obj   = env->NewObject   (tracks_class, tracks_init);

    env->SetLongField   (obj3d_obj, obj3d_nativePointer, (long)obj3d);
    env->SetObjectField (obj3d_obj, obj3d_userObject, (jobject)obj3d->getUserObject());

    for (int i = 0; i < (int)obj3d->getAnimationTrackCount(); i++) {
        AnimationTrack* track = obj3d->getAnimationTrack (i);
        if (track) {
            env->CallObjectMethod (tracks_obj, tracks_add, (jobject)track->getExportedEntity());
        }
    }
    env->SetObjectField (obj3d_obj, obj3d_tracks, tracks_obj);

    env->DeleteLocalRef (obj3d_class);
    env->DeleteLocalRef (tracks_class);
    env->DeleteLocalRef (tracks_obj);
}


