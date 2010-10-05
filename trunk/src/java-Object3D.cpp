#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
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
    Object3D* obj3d;
    __TRY__;
    obj3d = new Object3D ();
    __CATCH_VOID__;
    setNativePointer (env, thiz, obj3d);
    jobject entity = env->NewWeakGlobalRef (thiz);
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
    Object3D* obj3d = (Object3D*)getNativePointer (env, thiz);
    env->DeleteWeakGlobalRef ((jobject)obj3d->getExportedEntity());
    __TRY__;
    delete obj3d;
    __CATCH_VOID__;
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
    Object3D* obj3d = (Object3D*)getNativePointer (env, thiz);
    AnimationTrack* track = (AnimationTrack*)getNativePointer (env, animationTrack);
    __TRY__;
    obj3d->addAnimationTrack (track);
    __CATCH_VOID__;
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
    int time;
    __TRY__;
    time = obj3d->animate (worldTime);
    __CATCH_INT__;
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
    Object3D* dup;
    __TRY__;
    dup = obj3d->duplicate ();
    __CATCH_JOBJECT__;
    if (obj3d->getExportedEntity() == NULL) {
        cout << "Java-Object3D: create Object3D object of Java.\n";
        cout << "NOT IMPLEMENTED NOW!!!, aobrt()\n";
        abort ();
    }
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
    Object3D* find;
    __TRY__;
    find = obj3d->find (userID);
    __CATCH_JOBJECT__;
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
    Object3D* obj3d = (Object3D*)getNativePointer (env, thiz);
    AnimationTrack* track;
    __TRY__;
    track = (AnimationTrack*)obj3d->getAnimationTrack (index);
    __CATCH_JOBJECT__;
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
    int count;
    __TRY__;
    count = obj3d->getAnimationTrackCount ();
    __CATCH_INT__;
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
    Object3D* obj3d = (Object3D*)getNativePointer (env, thiz);
    int len = env->GetArrayLength (references);
    Object3D** refs = new Object3D* [len];
    int count;
    __TRY__;
    count = obj3d->getReferences (refs);
    __CATCH_INT__;
    for (int i = 0; i < len; i++) {
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
    int       id;
    __TRY__;
    id = obj3d->getUserID ();
    __CATCH_INT__;
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
    Object3D* obj3d = (Object3D*)getNativePointer (env, thiz);
    jobject   userObject;
    __TRY__;
    userObject = (jobject)obj3d->getUserObject ();
    __CATCH_JOBJECT__;
    if (userObject) {
        env->DeleteGlobalRef (userObject);
    }
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
    Object3D* obj3d = (Object3D*)getNativePointer (env, thiz);
    AnimationTrack* track = (AnimationTrack*)getNativePointer (env, animationTrack);
    __TRY__;
    obj3d->removeAnimationTrack (track);
    __CATCH_VOID__;
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
    __CATCH_VOID__;
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
    Object3D* obj3d = (Object3D*)getNativePointer (env, thiz);
    jobject entity = env->NewWeakGlobalRef (userObject);
    __TRY__;
    obj3d->setUserObject (entity);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Object3D: print is called.\n";
    Object3D* obj3d = (Object3D*)getNativePointer (env, thiz);
    __TRY__;
    obj3d->print (cout) << "\n";
    __CATCH_VOID__;
}


void Java_build_Object3D (JNIEnv* env, jobject obj3d_obj, m3g::Object3D* obj3d)
{
    jclass   obj3d_class  = env->GetObjectClass (obj3d_obj);
    jfieldID obj3d_tracks = env->GetFieldID     (obj3d_class, "animationTracks", "Ljava/util/List;");

    jclass    tracks_class = env->FindClass   ("java/util/ArrayList");
    jmethodID tracks_init  = env->GetMethodID (tracks_class, "<init>", "()V");
    jmethodID tracks_add   = env->GetMethodID (tracks_class, "add", "(Lorg/karlsland/m3g/AnimationTracks;)Z");
    jobject   tracks_obj   = env->NewObject   (tracks_class, tracks_init);

    for (int i = 0; i < (int)obj3d->getAnimationTrackCount(); i++) {
        AnimationTrack* track = obj3d->getAnimationTrack (i);
        if (track) {
            env->CallObjectMethod (tracks_obj, tracks_add, (jobject)track->getExportedEntity());
        }
    }

    env->SetObjectField (obj3d_obj, obj3d_tracks, tracks_obj);
}


