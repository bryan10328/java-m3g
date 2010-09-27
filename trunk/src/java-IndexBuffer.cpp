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
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-IndexBuffer: initialize is called.\n";
    IndexBuffer* ibuf;
    __TRY__;
    ibuf = new IndexBuffer ();
    __CATCH_VOID__;
    setNativePointer (env, thiz, ibuf);
    jobject entity = env->NewGlobalRef (thiz);
    ibuf->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_IndexBuffer
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_IndexBuffer_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-IndexBuffer:  is called.\n";
    IndexBuffer* ibuf = (IndexBuffer*)getNativePointer (env, thiz);
    __TRY__;
    delete ibuf;
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_IndexBuffer
 * Method:    jni_getIndexCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_IndexBuffer_jni_1getIndexCount
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-IndexBuffer: getIndexCount is called.\n";
    IndexBuffer* ibuf = (IndexBuffer*)getNativePointer (env, thiz);
    int count;
    __TRY__;
    count = ibuf->getIndexCount ();
    __CATCH_INT__;
    return count;
}

/*
 * Class:     org_karlsland_m3g_IndexBuffer
 * Method:    jni_getIndices
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_IndexBuffer_jni_1getIndices
  (JNIEnv* env, jobject thiz, jintArray indices)
{
    cout << "Java-IndexBuffer: getIndices is called.\n";
    IndexBuffer* ibuf = (IndexBuffer*)getNativePointer (env, thiz);
    int* indcs = env->GetIntArrayElements (indices, 0);
    __TRY__;
    ibuf->getIndices (indcs);
    __CATCH_VOID__;
    env->ReleaseIntArrayElements (indices, indcs, 0);
}

/*
 * Class:     org_karlsland_m3g_IndexBuffer
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_IndexBuffer_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-IndexBuffer: print is called.\n";
    IndexBuffer* ibuf = (IndexBuffer*)getNativePointer (env, thiz);
    __TRY__;
    ibuf->print (cout) << "\n";
    __CATCH_VOID__;
}
