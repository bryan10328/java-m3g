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
  (JNIEnv* env, jobject thiz, jintArray indices, jintArray stripLengths)
{
    cout << "Java-TriangleStripArray: initilize1 is called.\n";
    int* indcs = env->GetIntArrayElements (indices, 0);
    int  length = env->GetArrayLength (stripLengths);
    int* strip_lengths = env->GetIntArrayElements (stripLengths, 0);
    TriangleStripArray* tris;
    __TRY__;
    tris = new TriangleStripArray (indcs, length, strip_lengths);
    __CATCH_VOID__;
    env->ReleaseIntArrayElements (indices, indcs, 0);
    env->ReleaseIntArrayElements (stripLengths, strip_lengths, 0);
    setNativePointer (env, thiz, tris);
    jobject entity = env->NewWeakGlobalRef (thiz);
    tris->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_TriangleStripArray
 * Method:    jni_initialize
 * Signature: (I[I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_TriangleStripArray_jni_1initialize__I_3I
  (JNIEnv* env, jobject thiz, jint firstIndex, jintArray stripLengths)
{
    cout << "Java-TriangleStripArray: initialize2 is called.\n";
    int  length = env->GetArrayLength (stripLengths);
    int* strip_lengths = env->GetIntArrayElements (stripLengths, 0);
    TriangleStripArray* tris;
    __TRY__;
    tris = new TriangleStripArray (firstIndex, length, strip_lengths);
    __CATCH_VOID__;
    env->ReleaseIntArrayElements (stripLengths, strip_lengths, 0);
    setNativePointer (env, thiz, tris);
    jobject entity = env->NewWeakGlobalRef (thiz);
    tris->setExportedEntity (entity);
    
}

/*
 * Class:     org_karlsland_m3g_TriangleStripArray
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_TriangleStripArray_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-TriangleStripArray: finalize is called.\n";
    TriangleStripArray* tris = (TriangleStripArray*)getNativePointer (env, thiz);
    env->DeleteWeakGlobalRef ((jobject)tris->getExportedEntity());
    __TRY__;
    delete tris;
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_TriangleStripArray
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_TriangleStripArray_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-TriangleStripArray: print is called.\n";
    TriangleStripArray* tris = (TriangleStripArray*)getNativePointer (env, thiz);
    __TRY__;
    tris->print (cout) << "\n";
    __CATCH_VOID__;
}

void Java_build_TriangleStripArray (JNIEnv* env, jobject tris_obj, m3g::TriangleStripArray* tris)
{
    // nothing to do
}
