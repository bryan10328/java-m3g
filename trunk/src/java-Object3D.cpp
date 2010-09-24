#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1initialize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Object3D: Object3D initiazlize is called.\n";
    Object3D* obj3d = new Object3D ();
    setNativePointer (env, obj, obj3d);
    jobject entity = env->NewGlobalRef (obj);
    obj3d->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Object3D: Object3D finalize is called.\n";
    Object3D* obj3d = (Object3D*)getNativePointer (env, obj);
    delete obj3d;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_addAnimationTrack
 * Signature: (Lorg/karlsland/m3g/AnimationTrack;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1addAnimationTrack
  (JNIEnv* env, jobject obj, jobject animationTrack)
{
    cout << "Java-Object3D: Object3D addAnimationTrack is called.\n";
    Object3D* obj3d = (Object3D*)getNativePointer (env, obj);
    AnimationTrack* track = (AnimationTrack*)getNativePointer (env, obj);
    obj3d->addAnimationTrack (track);
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_animate
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Object3D_jni_1animate
  (JNIEnv* env, jobject obj, jint worldTime)
{
    cout << "Java-Object3D: Object3D animate is called.\n";
    Object3D* obj3d = (Object3D*)getNativePointer (env, obj);
    int time = obj3d->animate (worldTime);
    return time;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_duplicate
 * Signature: ()Lorg/karlsland/m3g/Object3D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Object3D_jni_1duplicate
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Object3D: Object3D duplicate is called.\n";
    Object3D* obj3d = (Object3D*)getNativePointer (env, obj);
    Object3D* dup = obj3d->duplicate ();
    cout << "dup = " << dup << "\n";
    return (jobject)dup->getExportedEntity();
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_find
 * Signature: (I)Lorg/karlsland/m3g/Object3D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Object3D_jni_1find
  (JNIEnv* env, jobject obj, jint userID)
{
    cout << "Java-Object3D: Object3D find is called.\n";
    Object3D* obj3d = (Object3D*)getNativePointer (env, obj);
    Object3D* find = obj3d->find (userID);
    return (jobject)find->getExportedEntity ();
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_getAnimationTrack
 * Signature: (I)Lorg/karlsland/m3g/AnimationTrack;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Object3D_jni_1getAnimationTrack
  (JNIEnv* env, jobject obj, jint index)
{
    cout << "Java-Object3D: Object3d getAnimationTrack is called.\n";
    Object3D* obj3d = (Object3D*)getNativePointer (env, obj);
    AnimationTrack* track = (AnimationTrack*)obj3d->getAnimationTrack (index);
    return (jobject)track->getExportedEntity();
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_getAnimationTrackCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Object3D_jni_1getAnimationTrackCount
  (JNIEnv* env, jobject obj)
{
    Object3D* obj3d = (Object3D*)getNativePointer (env, obj);
    int count = obj3d->getAnimationTrackCount ();
    return count;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_getReferences
 * Signature: ([Lorg/karlsland/m3g/Object3D;)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Object3D_jni_1getReferences
  (JNIEnv* env, jobject obj, jobjectArray references)
{
    // TODO: not implemented.
    //Object3D* obj3d = (Object3D*)getNativePointer (env, obj);
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_getUserID
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Object3D_jni_1getUserID
  (JNIEnv* env, jobject obj)
{
    Object3D* obj3d = (Object3D*)getNativePointer (env, obj);
    int userID = obj3d->getUserID ();
    return userID;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_getUserObject
 * Signature: ()Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Object3D_jni_1getUserObject
  (JNIEnv* env, jobject obj)
{
    Object3D* obj3d = (Object3D*)getNativePointer (env, obj);
    void* userObject = obj3d->getUserObject ();
    return (jobject)userObject;
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_removeAnimationTrack
 * Signature: (Lorg/karlsland/m3g/AnimationTrack;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1removeAnimationTrack
  (JNIEnv* env, jobject obj, jobject animationTrack)
{
    Object3D* obj3d = (Object3D*)getNativePointer (env, obj);
    AnimationTrack* track = (AnimationTrack*)getNativePointer (env, animationTrack);
    obj3d->removeAnimationTrack (track);
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_setUserID
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1setUserID
  (JNIEnv* env, jobject obj, jint userID)
{
    Object3D* obj3d = (Object3D*)getNativePointer (env, obj);
    obj3d->setUserID (userID);
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_setUserObject
 * Signature: (Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1setUserObject
  (JNIEnv* env, jobject obj, jobject userObject)
{
    Object3D* obj3d = (Object3D*)getNativePointer (env, obj);
    obj3d->setUserObject (userObject);
    // TODO:
    // このユーザーオブジェクトに対して
    // グローバル参照を作って保存すべき?
}

/*
 * Class:     org_karlsland_m3g_Object3D
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Object3D_jni_1print
  (JNIEnv* env, jobject obj)
{
    Object3D* obj3d = (Object3D*)getNativePointer (env, obj);
    obj3d->print (cout) << "\n";
}
