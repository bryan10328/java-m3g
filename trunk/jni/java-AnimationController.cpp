#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1initialize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-AnimationController: initiazlize is called.\n";
    AnimationController* controller = NULL;
    __TRY__;
    controller = new AnimationController();
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer (env, thiz, controller);
    jobject entity = env->NewWeakGlobalRef (thiz);
    controller->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-AnimationController: finalize is called.\n";
    AnimationController* controller = (AnimationController*)getNativePointer(env, thiz);
    env->DeleteWeakGlobalRef ((jobject)controller->getExportedEntity());
    __TRY__;
    delete controller;
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_getActiveIntervalEnd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getActiveIntervalEnd
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-AnimationController: getActiveIntervalEnd is called.\n";
    AnimationController* controller = (AnimationController*)getNativePointer(env, thiz);
    int end = 0;
    __TRY__;
    end = controller->getActiveIntervalEnd ();
    __CATCH__;
    return end;
}


/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_getActiveIntervalStart
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getActiveIntervalStart
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-AnimationController: getActiveIntervalStart is called.\n";
    AnimationController* controller = (AnimationController*)getNativePointer(env, thiz);
    int start = 0;
    __TRY__;
    start = controller->getActiveIntervalStart ();
    __CATCH__;
    return start;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_getPosition
 * Signature: (F)F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getPosition
  (JNIEnv* env, jobject thiz, jfloat worldTime)
{
    cout << "Java-AnimationController: getPosition is called.\n";
    AnimationController* controller = (AnimationController*)getNativePointer(env, thiz);
    float sequence_time = 0;
    __TRY__;
    sequence_time = controller->getPosition (worldTime);
    __CATCH__;
    return sequence_time;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_getRefWorldTime
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getRefWorldTime
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-AnimationController: getRefWorldTime is called.\n";
    AnimationController* controller = (AnimationController*)getNativePointer(env, thiz);
    int world_time = 0;
    __TRY__;
    world_time = controller->getRefWorldTime ();
    __CATCH__;
    return world_time;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_getSpeed
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getSpeed
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-AnimationController: getSpeed is called.\n";
    AnimationController* controller = (AnimationController*)getNativePointer(env, thiz);
    float speed = 0;
    __TRY__;
    speed = controller->getSpeed ();
    __CATCH__;
    return speed;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_getWeight
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getWeight
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-AnimationController: getWeight is called.\n";
    AnimationController* controller = (AnimationController*)getNativePointer(env, thiz);
    float weight = 0;
    __TRY__;
    weight = controller->getWeight ();
    __CATCH__;
    return weight;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_setActiveInterval
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1setActiveInterval
  (JNIEnv* env, jobject thiz, jint start, jint end)
{
    cout << "Java-AnimationController: setActiveInterval is called.\n";
    AnimationController* controller = (AnimationController*)getNativePointer(env, thiz);
    __TRY__;
    controller->setActiveInterval (start, end);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_setPosition
 * Signature: (FI)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1setPosition
  (JNIEnv* env, jobject thiz, jfloat sequenceTime, jint worldTime)
{
    cout << "Java-AnimationController: setPosition is called.\n";
    AnimationController* controller = (AnimationController*)getNativePointer(env, thiz);
    __TRY__;
    controller->setPosition (sequenceTime, worldTime);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_setSpeed
 * Signature: (FI)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1setSpeed
  (JNIEnv* env, jobject thiz, jfloat speed, jint worldTime)
{
    cout << "Java-AnimationController: setSpeed is called.\n";
    AnimationController* controller = (AnimationController*)getNativePointer(env, thiz);
    __TRY__;
    controller->setSpeed (speed, worldTime);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_setWeight
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1setWeight
  (JNIEnv* env, jobject thiz, jfloat weight)
{
    cout << "Java-AnimationController: setWeight is called.\n";
    AnimationController* controller = (AnimationController*)getNativePointer(env, thiz);
    __TRY__;
    controller->setWeight (weight);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_AnimationController
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_AnimationController_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-AnimationController: print is called.\n";
    AnimationController* controller = (AnimationController*)getNativePointer(env, thiz);
    ostringstream oss;
    __TRY__;
    controller->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}



void Java_new_AnimationController (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java AnimationController.\n";
    AnimationController* controller     = dynamic_cast<AnimationController*>(obj);
    jobject              controller_obj = allocJavaObject (env, "org/karlsland/m3g/AnimationController", controller);
    
    Java_build_Object3D            (env, controller_obj, controller);
    Java_build_AnimationController (env, controller_obj, controller);
}


void Java_build_AnimationController (JNIEnv* /* env */, jobject /* controller_obj */, m3g::AnimationController* /* controller */)
{
    // nothing to do
}
