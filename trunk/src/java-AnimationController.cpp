#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;


/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1initialize
  (JNIEnv* env, jobject obj)
{
    cout << "Jni: AnimationController initiazlize is called.\n";
    AnimationController* controller = new AnimationController();
    setEntity (env, obj, controller);
    jobject entity = env->NewGlobalRef (obj);
    controller->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Jni: AnimationController finalize is called.\n";
    AnimationController* controller = (AnimationController*)getEntity(env, obj);
    delete controller;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_getActiveIntervalEnd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getActiveIntervalEnd
  (JNIEnv* env, jobject obj)
{
    AnimationController* controller = (AnimationController*)getEntity(env, obj);
    int end = controller->getActiveIntervalEnd ();
    return end;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_getActiveIntervalStart
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getActiveIntervalStart
  (JNIEnv* env, jobject obj)
{
    AnimationController* controller = (AnimationController*)getEntity(env, obj);
    int start = controller->getActiveIntervalStart ();
    return start;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_getPosition
 * Signature: (F)F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getPosition
  (JNIEnv* env, jobject obj, jfloat)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_getRefWorldTime
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getRefWorldTime
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_getSpeed
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getSpeed
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_getWeight
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getWeight
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_setActiveInterval
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1setActiveInterval
  (JNIEnv* env, jobject obj, jint start, jint end)
{
    AnimationController* controller = (AnimationController*)getEntity(env, obj);
    cout << "Set start = " << start << ", end = " << end << "\n";
    controller->setActiveInterval (start, end);
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_setPosition
 * Signature: (FI)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1setPosition
  (JNIEnv* env, jobject obj, jfloat, jint)
{
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_setSpeed
 * Signature: (FI)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1setSpeed
  (JNIEnv* env, jobject obj, jfloat, jint)
{
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_setWeight
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1setWeight
  (JNIEnv* env, jobject obj, jfloat)
{
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1print
  (JNIEnv *, jobject)
{

}


