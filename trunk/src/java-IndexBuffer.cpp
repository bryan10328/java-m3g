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
    cout << "Java-IndexBuffer: initialize is called.\n";
    IndexBuffer* ibuf = new IndexBuffer ();
    setNativePointer (env, obj, ibuf);
    jobject entity = env->NewGlobalRef (obj);
    ibuf->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_IndexBuffer
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_IndexBuffer_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-IndexBuffer:  is called.\n";
    IndexBuffer* ibuf = (IndexBuffer*)getNativePointer (env, obj);
    delete ibuf;
}

/*
 * Class:     org_karlsland_m3g_IndexBuffer
 * Method:    jni_getIndexCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_IndexBuffer_jni_1getIndexCount
  (JNIEnv* env, jobject obj)
{
    cout << "Java-IndexBuffer: getIndexCount is called.\n";
    IndexBuffer* ibuf = (IndexBuffer*)getNativePointer (env, obj);
    int count = ibuf->getIndexCount ();
    return count;
}

/*
 * Class:     org_karlsland_m3g_IndexBuffer
 * Method:    jni_getIndices
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_IndexBuffer_jni_1getIndices
  (JNIEnv* env, jobject obj, jintArray indices)
{
    cout << "Java-IndexBuffer: getIndices is called.\n";
    IndexBuffer* ibuf = (IndexBuffer*)getNativePointer (env, obj);
    int* indcs = env->GetIntArrayElements (indices, 0);
    ibuf->getIndices (indcs);
    env->ReleaseIntArrayElements (indices, indcs, 0);
}

/*
 * Class:     org_karlsland_m3g_IndexBuffer
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_IndexBuffer_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-IndexBuffer: print is called.\n";
    IndexBuffer* ibuf = (IndexBuffer*)getNativePointer (env, obj);
    ibuf->print (cout) << "\n";
}
