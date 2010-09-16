#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_TriangleStripArray
 * Method:    jni_initialize
 * Signature: ([I[I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_TriangleStripArray_jni_1initialize___3I_3I
  (JNIEnv* env, jobject obj, jintArray indices, jintArray stripLengths)
{

}

/*
 * Class:     org_karlsland_m3g_TriangleStripArray
 * Method:    jni_initialize
 * Signature: (I[I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_TriangleStripArray_jni_1initialize__I_3I
  (JNIEnv* env, jobject obj, jint firstIndex, jintArray stripLengths)
{

}

/*
 * Class:     org_karlsland_m3g_TriangleStripArray
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_TriangleStripArray_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

