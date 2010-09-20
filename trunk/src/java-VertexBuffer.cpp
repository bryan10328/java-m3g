#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1initialize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_getColors
 * Signature: ()Lorg/karlsland/m3g/VertexArray;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1getColors
  (JNIEnv* env, jobject obj)
{
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_getDefaultColor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1getDefaultColor
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_getNormals
 * Signature: ()Lorg/karlsland/m3g/VertexArray;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1getNormals
  (JNIEnv* env, jobject obj)
{
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_getPositions
 * Signature: ([F)Lorg/karlsland/m3g/VertexArray;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1getPositions
  (JNIEnv* env, jobject obj, jfloatArray scaleBias)
{
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_getTexCoords
 * Signature: (I[F)Lorg/karlsland/m3g/VertexArray;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1getTexCoords
  (JNIEnv* env, jobject obj, jint index, jfloatArray scaleBias)
{
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_getVertexCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1getVertexCount
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_setColors
 * Signature: (Lorg/karlsland/m3g/VertexArray;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1setColors
  (JNIEnv* env, jobject obj, jobject colors)
{

}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_setDefaultColor
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1setDefaultColor
  (JNIEnv* env, jobject obj, jint ARGB)
{

}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_setNormals
 * Signature: (Lorg/karlsland/m3g/VertexArray;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1setNormals
  (JNIEnv* env, jobject obj, jobject normals)
{

}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_setPositions
 * Signature: (Lorg/karlsland/m3g/VertexArray;F[F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1setPositions
  (JNIEnv* env, jobject obj, jobject positions, jfloat scale, jfloatArray bias)
{

}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_setTexCoords
 * Signature: (ILorg/karlsland/m3g/VertexArray;F[F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1setTexCoords
  (JNIEnv* env, jobject obj, jint index, jobject texCoords, jfloat scale, jfloatArray bias)
{

}

