#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
using namespace std;

/*
 * Class:     org_karlsland_m3g_Log
 * Method:    jni_getErrorString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_Log_jni_1getErrorString
  (JNIEnv* env, jclass clazz)
{
    //cout << "Java-Log: getErrorString is called.\n";
    return env->NewStringUTF (getErrorString());
}

