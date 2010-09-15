#include <jni.h>
#include "java-m3g.hpp"
#include "m3g.hpp"
using namespace m3g;



JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1initialize (JNIEnv* env, jobject obj) 
{
    AnimationController* controller = new AnimationController();
    jclass   clazz = env->GetObjectClass (obj);
    jfieldID fid   = env->GetFieldID (clazz, "entity", "J");
    env->SetLongField (obj, fid, (long)controller);
}

JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1finalize (JNIEnv* env, jobject obj)
{
    jclass   clazz = env->GetObjectClass (obj);
    jfieldID fid   = env->GetFieldID (clazz, "entity", "J");
    AnimationController* controller = (AnimationController*)env->GetLongField (obj, fid);
    delete controller;
}

JNIEXPORT jint JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getActiveIntervalEnd (JNIEnv* env, jobject obj)
{
    return 0;
}

JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_AnimationController_jni_1getActiveIntervalStart (JNIEnv* env, jobject obj)
{
    return 0;
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

JNIEXPORT void JNICALL Java_org_karlsland_m3g_AnimationController_jni_1setActiveInterval (JNIEnv* env, jobject obj, jint jstart, jint jend)
{

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

