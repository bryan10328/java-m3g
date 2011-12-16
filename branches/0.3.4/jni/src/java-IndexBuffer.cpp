#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;


/*
 * Class:     org_karlsland_m3g_IndexBuffer
 * Method:    jni_getIndexCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_IndexBuffer_jni_1getIndexCount
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-IndexBuffer: getIndexCount is called.\n";
    IndexBuffer* ibuf = (IndexBuffer*)getNativePointer (env, thiz);
    int count = 0;
    __TRY__;
    count = ibuf->getIndexCount ();
    __CATCH__;
    return count;
}

/*
 * Class:     org_karlsland_m3g_IndexBuffer
 * Method:    jni_getIndices
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_IndexBuffer_jni_1getIndices
  (JNIEnv* env, jobject thiz, jintArray indices_array)
{
    //cout << "Java-IndexBuffer: getIndices is called.\n";
    IndexBuffer* ibuf    = (IndexBuffer*)getNativePointer (env, thiz);
    int*         indices = getIntArrayPointer (env, indices_array);
    __TRY__;
    ibuf->getIndices (indices);
    __CATCH__;
    releaseIntArrayPointer (env, indices_array, indices);
}

/*
 * Class:     org_karlsland_m3g_IndexBuffer
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_IndexBuffer_jni_1print
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-IndexBuffer: print is called.\n";
    IndexBuffer* ibuf = (IndexBuffer*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    ibuf->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}


void Java_build_IndexBuffer (JNIEnv* env, jobject ibuf_obj, m3g::IndexBuffer* ibuf)
{
    // nothing to do
}
