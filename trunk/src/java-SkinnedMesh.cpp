#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;[Lorg/karlsland/m3g/IndexBuffer;[Lorg/karlsland/m3g/Appearance;Lorg/karlsland/m3g/Group;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1initialize__Lorg_karlsland_m3g_VertexBuffer_2_3Lorg_karlsland_m3g_IndexBuffer_2_3Lorg_karlsland_m3g_Appearance_2Lorg_karlsland_m3g_Group_2
  (JNIEnv* env, jobject obj, jobject vertices, jobjectArray submeshes, jobjectArray appearances, jobject skeleton)
{

}

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;Lorg/karlsland/m3g/IndexBuffer;Lorg/karlsland/m3g/Appearance;Lorg/karlsland/m3g/Group;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1initialize__Lorg_karlsland_m3g_VertexBuffer_2Lorg_karlsland_m3g_IndexBuffer_2Lorg_karlsland_m3g_Appearance_2Lorg_karlsland_m3g_Group_2
  (JNIEnv* env, jobject obj, jobject vertices, jobject submesh, jobject appearance, jobject skeleton)
{

}

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_addTransform
 * Signature: (Lorg/karlsland/m3g/Node;III)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1addTransform
  (JNIEnv* env, jobject obj, jobject bone, jint weight, jint firstVertex, jint numVertices)
{

}

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_getBoneTransform
 * Signature: (Lorg/karlsland/m3g/Node;Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1getBoneTransform
  (JNIEnv* env, jobject obj, jobject bone, jobject transform)
{

}

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_getBoneVertices
 * Signature: (Lorg/karlsland/m3g/Node;[I[F)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1getBoneVertices
  (JNIEnv* env, jobject obj, jobject bone, jintArray indices, jfloatArray weights)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_getSkeleton
 * Signature: ()Lorg/karlsland/m3g/Group;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1getSkeleton
  (JNIEnv* env, jobject obj)
{
    return (jobject)NULL;
}

