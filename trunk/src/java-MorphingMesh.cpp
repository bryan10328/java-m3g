#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;[Lorg/karlsland/m3g/VertexBuffer;[Lorg/karlsland/m3g/IndexBuffer;[Lorg/karlsland/m3g/Appearance;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1initialize__Lorg_karlsland_m3g_VertexBuffer_2_3Lorg_karlsland_m3g_VertexBuffer_2_3Lorg_karlsland_m3g_IndexBuffer_2_3Lorg_karlsland_m3g_Appearance_2
  (JNIEnv* env, jobject obj, jobject base, jobjectArray targets, jobjectArray submeshes, jobjectArray appearances)
{

}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;[Lorg/karlsland/m3g/VertexBuffer;Lorg/karlsland/m3g/IndexBuffer;Lorg/karlsland/m3g/Appearance;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1initialize__Lorg_karlsland_m3g_VertexBuffer_2_3Lorg_karlsland_m3g_VertexBuffer_2Lorg_karlsland_m3g_IndexBuffer_2Lorg_karlsland_m3g_Appearance_2
  (JNIEnv* env, jobject obj, jobject base, jobjectArray targets, jobject submesh, jobject appearance)
{

}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_getMorphTarget
 * Signature: (I)Lorg/karlsland/m3g/IndexBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1getMorphTarget
  (JNIEnv* env, jobject obj, jint index)
{
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_getMorphTargetCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1getMorphTargetCount
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_getWeights
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1getWeights
  (JNIEnv* env, jobject obj, jfloatArray weights)
{

}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_setWeights
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1setWeights
  (JNIEnv* env, jobject obj, jfloatArray weights)
{

}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1print
  (JNIEnv *, jobject)
{

}
