#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;



JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1initialize (JNIEnv* env, jobject obj) 
{
    cout << "Jni: AnimationController initiazlize is called.\n";
    AnimationController* controller = new AnimationController();
    setEntity (env, obj, controller);
}


JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1finalize (JNIEnv* env, jobject obj)
{
    cout << "Jni: AnimationController finalize is called.\n";
    AnimationController* controller = (AnimationController*)getEntity(env, obj);
    delete controller;
}

JNIEXPORT jint JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getActiveIntervalEnd (JNIEnv* env, jobject obj)
{
    AnimationController* controller = (AnimationController*)getEntity(env, obj);
    int end = controller->getActiveIntervalEnd ();
    return end;
}

JNIEXPORT jint JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getActiveIntervalStart  (JNIEnv* env, jobject obj)
{
    AnimationController* controller = (AnimationController*)getEntity(env, obj);
    int start = controller->getActiveIntervalStart ();
    return start;
}


JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getPosition (JNIEnv* env, jobject obj)
{
    return 0;
}

JNIEXPORT jint JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getRefWorldTime (JNIEnv* env, jobject obj)
{
    return 0;
}

JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getSpeed (JNIEnv* env, jobject obj)
{
    return 0;

}

JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getWeight (JNIEnv* env, jobject obj)
{
    return 0;

}

JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1setActiveInterval (JNIEnv* env, jobject obj, jint start, jint end)
{
    AnimationController* controller = (AnimationController*)getEntity(env, obj);
    cout << "Set start = " << start << ", end = " << end << "\n";
    controller->setActiveInterval (start, end);
}

JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1setPosition (JNIEnv* env, jobject obj, jfloat jsequenceTime, jint jworldTime)
{

}

JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1setSpeed (JNIEnv* env, jobject obj, jfloat jspeed, jint jworldTime)
{

}


JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1setWeight (JNIEnv* env, jobject obj, jfloat weight)
{


}

