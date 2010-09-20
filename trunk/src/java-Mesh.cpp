#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Mesh
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;[Lorg/karlsland/m3g/IndexBuffer;[Lorg/karlsland/m3g/Appearance;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Mesh_jni_1initialize__Lorg_karlsland_m3g_VertexBuffer_2_3Lorg_karlsland_m3g_IndexBuffer_2_3Lorg_karlsland_m3g_Appearance_2
  (JNIEnv* env, jobject obj, jobject vertices, jobjectArray submeshes, jobjectArray appearances)
{


}

/*
 * Class:     org_karlsland_m3g_Mesh
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;Lorg/karlsland/m3g/IndexBuffer;Lorg/karlsland/m3g/Appearance;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Mesh_jni_1initialize__Lorg_karlsland_m3g_VertexBuffer_2Lorg_karlsland_m3g_IndexBuffer_2Lorg_karlsland_m3g_Appearance_2
  (JNIEnv* env, jobject obj, jobject vertices, jobject submesh, jobject appearance)
{


}

/*
 * Class:     org_karlsland_m3g_Mesh
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Mesh_jni_1finalize
  (JNIEnv* env, jobject obj)
{


}

/*
 * Class:     org_karlsland_m3g_Mesh
 * Method:    jni_getAppearance
 * Signature: (I)Lorg/karlsland/m3g/Appearance;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Mesh_jni_1getAppearance
  (JNIEnv* env, jobject obj, jint index)
{
    return (jobject)0;
}

/*
 * Class:     org_karlsland_m3g_Mesh
 * Method:    jni_getIndexBuffer
 * Signature: (I)Lorg/karlsland/m3g/IndexBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Mesh_jni_1getIndexBuffer
  (JNIEnv* env, jobject obj, jint index)
{
    return (jobject)0;
}

/*
 * Class:     org_karlsland_m3g_Mesh
 * Method:    jni_getSubmeshCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Mesh_jni_1getSubmeshCount
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Mesh
 * Method:    jni_getVertexBuffer
 * Signature: ()Lorg/karlsland/m3g/VertexBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Mesh_jni_1getVertexBuffer
  (JNIEnv* env, jobject obj)
{
    return (jobject)0;
}

/*
 * Class:     org_karlsland_m3g_Mesh
 * Method:    jni_setAppearance
 * Signature: (ILorg/karlsland/m3g/Appearance;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Mesh_jni_1setAppearance
  (JNIEnv* env, jobject obj, jint index, jobject appearance)
{



}

