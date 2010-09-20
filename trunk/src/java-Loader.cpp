#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Loader
 * Method:    jni_load
 * Signature: ([BI)[Lorg/karlsland/m3g/Object3D;
 */
JNIEXPORT jobjectArray JNICALL Java_org_karlsland_m3g_Loader_jni_1load___3BI
  (JNIEnv* env, jclass clazz, jbyteArray data, jint offset)
{
    return (jobjectArray)NULL;
}

/*
 * Class:     org_karlsland_m3g_Loader
 * Method:    jni_load
 * Signature: (Ljava/lang/String;)[Lorg/karlsland/m3g/Object3D;
 */
JNIEXPORT jobjectArray JNICALL Java_org_karlsland_m3g_Loader_jni_1load__Ljava_lang_String_2
  (JNIEnv* env, jclass clazz, jstring name)
{
    return (jobjectArray)NULL;
}

