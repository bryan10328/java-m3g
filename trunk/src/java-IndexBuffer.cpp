#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_IndexBuffer
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_IndexBuffer_jni_1initialize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_IndexBuffer
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_IndexBuffer_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_IndexBuffer
 * Method:    jni_getIndexCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_IndexBuffer_jni_1getIndexCount
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_IndexBuffer
 * Method:    jni_getIndices
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_IndexBuffer_jni_1getIndices
  (JNIEnv* env, jobject obj, jintArray indices)
{

}

/*
 * Class:     org_karlsland_m3g_IndexBuffer
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_IndexBuffer_jni_1print
  (JNIEnv *, jobject)
{

}
