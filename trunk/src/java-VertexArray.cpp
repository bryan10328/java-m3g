#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"


using namespace std;
using namespace m3g;
/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_initialize
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1initialize
  (JNIEnv* env, jobject thiz, jint numVertices, jint numComponents, jint componentSize)
{
    cout << "Java-VertexArray: initiazlize is called.\n";
    VertexArray* varry;
    __TRY__;
    varry = new VertexArray (numVertices, numComponents, componentSize);
    __CATCH_VOID__;
    setNativePointer (env, thiz, varry);
    jobject entity = env->NewGlobalRef (thiz);
    varry->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexArray: finalize is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    __TRY__;
    delete varry;
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_get
 * Signature: (II[B)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1get__II_3B
  (JNIEnv* env, jobject thiz, jint firstVertex, jint numVertices, jbyteArray values)
{
    cout << "Java-VertexArray: get is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    char* v = (char*)env->GetByteArrayElements (values, 0);
    __TRY__;
    varry->get (firstVertex, numVertices, v);
    __CATCH_VOID__;
    env->ReleaseByteArrayElements (values, (jbyte*)v, 0);
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_get
 * Signature: (II[S)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1get__II_3S
  (JNIEnv* env, jobject thiz, jint firstVertex, jint numVertices, jshortArray values)
{
    cout << "Java-VertexArray: get is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    short* v = env->GetShortArrayElements (values, 0);
    __TRY__;
    varry->get (firstVertex, numVertices, v);
    __CATCH_VOID__;
    env->ReleaseShortArrayElements (values, v, 0);
    
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_get
 * Signature: (II[F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1get__II_3F
  (JNIEnv* env, jobject thiz, jint firstVertex, jint numVertices, jfloatArray values)
{
    cout << "Java-VertexArray: get is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    float* v = env->GetFloatArrayElements (values, 0);
    __TRY__;
    varry->get (firstVertex, numVertices, v);
    __CATCH_VOID__;
    env->ReleaseFloatArrayElements (values, v, 0);
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_getComponentCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_VertexArray_jni_1getComponentCount
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexArray: getComponentCount is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    int count;
    __TRY__;
    count = varry->getComponentCount ();
    __CATCH_INT__;
    return count;
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_getComponentType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_VertexArray_jni_1getComponentType
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexArray: getComponentType is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    int type;
    __TRY__;
    type = varry->getComponentType ();
    __CATCH_INT__;
    return type;
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_getVertexCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_VertexArray_jni_1getVertexCount
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexArray: getVertexCount is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    int count;
    __TRY__;
    count = varry->getVertexCount ();
    __CATCH_INT__;
    return count;
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_set
 * Signature: (II[B)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1set__II_3B
  (JNIEnv* env, jobject thiz, jint firstVertex, jint numVertices, jbyteArray values)
{
    cout << "Java-VertexArray: set(char) is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    char* v = (char*)env->GetByteArrayElements (values, 0);
    __TRY__;
    varry->set (firstVertex, numVertices, v);
    __CATCH_VOID__;
    env->ReleaseByteArrayElements (values, (jbyte*)v, 0);
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_set
 * Signature: (II[S)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1set__II_3S
  (JNIEnv* env, jobject thiz, jint firstVertex, jint numVertices, jshortArray values)
{
    cout << "Java-VertexArray: set(short) is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    short* v = env->GetShortArrayElements (values, 0);
    __TRY__;
    varry->set (firstVertex, numVertices, v);
    __CATCH_VOID__;
    env->ReleaseShortArrayElements (values, v, 0);
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_set
 * Signature: (II[F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1set__II_3F
  (JNIEnv* env, jobject thiz, jint firstVertex, jint numVertices, jfloatArray values)
{
    cout << "Java-VertexArray: set(float) is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    cout << "varry = 0x" << varry << "\n";
    float* v = env->GetFloatArrayElements (values, 0);
    __TRY__;
    varry->set (firstVertex, numVertices, v);
    __CATCH_VOID__;
    env->ReleaseFloatArrayElements (values, v, 0);
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexArray: print is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    __TRY__;
    varry->print (cout) << "\n";
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_print_raw_data
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1print_1raw_1data
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexArray: print_raw_array is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    __TRY__;
    varry->print_raw_data (cout) << "\n";
    __CATCH_VOID__;
}

