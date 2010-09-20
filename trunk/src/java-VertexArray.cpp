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
  (JNIEnv* env, jobject obj, jint numVertices, jint numConmponents, jint cmoponentSize)
{

}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_get
 * Signature: (II[B)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1get__II_3B
  (JNIEnv* env, jobject obj, jint firstVertex, jint numVertices, jbyteArray values)
{

}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_get
 * Signature: (II[S)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1get__II_3S
  (JNIEnv* env, jobject obj, jint firstVertex, jint numVertices, jshortArray values)
{

}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_get
 * Signature: (II[F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1get__II_3F
  (JNIEnv* env, jobject obj, jint firstVertex, jint numVertices, jfloatArray values)
{

}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_getComponentCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_VertexArray_jni_1getComponentCount
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_getCompoenntType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_VertexArray_jni_1getCompoenntType
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_getVertexCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_VertexArray_jni_1getVertexCount
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_set
 * Signature: (II[B)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1set__II_3B
  (JNIEnv* env, jobject obj, jint firstVertex, jint numVertices, jbyteArray values)
{

}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_set
 * Signature: (II[S)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1set__II_3S
  (JNIEnv* env, jobject obj, jint firstVertex, jint numVertices, jshortArray values)
{

}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_set
 * Signature: (II[F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1set__II_3F
  (JNIEnv* env, jobject obj, jint firstVertex, jint numVertices, jfloatArray values)
{

}

