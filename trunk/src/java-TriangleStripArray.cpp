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
    cout << "Java-TriangleStripArray: initilize1 is called.\n";
    int* indcs = env->GetIntArrayElements (indices, 0);
    int  length = env->GetArrayLength (stripLengths);
    int* strip_lengths = env->GetIntArrayElements (stripLengths, 0);
    TriangleStripArray* tris = new TriangleStripArray (indcs, length, strip_lengths);
    env->ReleaseIntArrayElements (indices, indcs, 0);
    env->ReleaseIntArrayElements (stripLengths, strip_lengths, 0);
    setEntity (env, obj, tris);
    jobject entity = env->NewGlobalRef (obj);
    tris->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_TriangleStripArray
 * Method:    jni_initialize
 * Signature: (I[I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_TriangleStripArray_jni_1initialize__I_3I
  (JNIEnv* env, jobject obj, jint firstIndex, jintArray stripLengths)
{
    cout << "Java-TriangleStripArray: initialize2 is called.\n";
    int  length = env->GetArrayLength (stripLengths);
    int* strip_lengths = env->GetIntArrayElements (stripLengths, 0);
    TriangleStripArray* tris = new TriangleStripArray (firstIndex, length, strip_lengths);
    env->ReleaseIntArrayElements (stripLengths, strip_lengths, 0);
    setEntity (env, obj, tris);
    jobject entity = env->NewGlobalRef (obj);
    tris->setExportedEntity (entity);
    
}

/*
 * Class:     org_karlsland_m3g_TriangleStripArray
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_TriangleStripArray_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-TriangleStripArray: finalize is called.\n";
    TriangleStripArray* tris = (TriangleStripArray*)getEntity (env, obj);
    delete tris;
}

/*
 * Class:     org_karlsland_m3g_TriangleStripArray
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_TriangleStripArray_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-TriangleStripArray:  is called.\n";
    TriangleStripArray* tris = (TriangleStripArray*)getEntity (env, obj);
    tris->print (cout) << "\n";
}
