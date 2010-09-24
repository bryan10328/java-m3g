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
    cout << "Java-AnimationController: initiazlize is called.\n";
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
    cout << "Java-AnimationController: finalize is called.\n";
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
    cout << "Java-AnimationController: getActiveIntervalEnd is called.\n";
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
    cout << "Java-AnimationController: getActiveIntervalStart is called.\n";
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
  (JNIEnv* env, jobject obj, jfloat worldTime)
{
    cout << "Java-AnimationController: getPosition is called.\n";
    AnimationController* controller = (AnimationController*)getEntity(env, obj);
    float sequenceTime = controller->getPosition (worldTime);
    return sequenceTime;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_getRefWorldTime
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getRefWorldTime
  (JNIEnv* env, jobject obj)
{
    cout << "Java-AnimationController: getRefWorldTime is called.\n";
    AnimationController* controller = (AnimationController*)getEntity(env, obj);
    int world_time = controller->getRefWorldTime ();
    return world_time;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_getSpeed
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getSpeed
  (JNIEnv* env, jobject obj)
{
    cout << "Java-AnimationController: getSpeed is called.\n";
    AnimationController* controller = (AnimationController*)getEntity(env, obj);
    float speed = controller->getSpeed ();
    return speed;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_getWeight
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getWeight
  (JNIEnv* env, jobject obj)
{
    cout << "Java-AnimationController: getWeight is called.\n";
    AnimationController* controller = (AnimationController*)getEntity(env, obj);
    float weight = controller->getWeight ();
    return weight;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_setActiveInterval
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1setActiveInterval
  (JNIEnv* env, jobject obj, jint start, jint end)
{
    cout << "Java-AnimationController: getActiveInterval is called.\n";
    AnimationController* controller = (AnimationController*)getEntity(env, obj);
    controller->setActiveInterval (start, end);
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_setPosition
 * Signature: (FI)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1setPosition
  (JNIEnv* env, jobject obj, jfloat sequenceTime, jint worldTime)
{
    cout << "Java-AnimationController: setPosition is called.\n";
    AnimationController* controller = (AnimationController*)getEntity(env, obj);
    controller->setPosition (sequenceTime, worldTime);
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_setSpeed
 * Signature: (FI)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1setSpeed
  (JNIEnv* env, jobject obj, jfloat speed, jint worldTime)
{
    cout << "Java-AnimationController: setSpeed is called.\n";
    AnimationController* controller = (AnimationController*)getEntity(env, obj);
    controller->setSpeed (speed, worldTime);
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_setWeight
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1setWeight
  (JNIEnv* env, jobject obj, jfloat weight)
{
    cout << "Java-AnimationController: setWeight is called.\n";
    AnimationController* controller = (AnimationController*)getEntity(env, obj);
    controller->setWeight (weight);
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-AnimationController: print is called.\n";
    AnimationController* controller = (AnimationController*)getEntity(env, obj);
    controller->print (cout) << "\n";
}


