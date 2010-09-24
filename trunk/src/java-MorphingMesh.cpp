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
    cout << "Java-MorhpingMesh: initilize1 is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getEntity (env, base);
    int tars_len = env->GetArrayLength (targets);
    VertexBuffer** tars = new VertexBuffer* [tars_len];
    for (int i = 0; i < tars_len; i++) {
        tars[i] = (VertexBuffer*)getEntity (env, env->GetObjectArrayElement(targets, i));
    }
    int len = env->GetArrayLength (submeshes);
    IndexBuffer** ibufs = new IndexBuffer* [len];
    for (int i = 0; i < len; i++) {
        ibufs[i] = (IndexBuffer*)getEntity (env, env->GetObjectArrayElement(submeshes, i));
    }
    len = env->GetArrayLength (appearances);
    Appearance** apps = new Appearance* [len];
    for (int i = 0; i < len; i++) {
        apps[i] = (Appearance*)getEntity (env, env->GetObjectArrayElement(appearances, i));
    }
    MorphingMesh* mesh = new MorphingMesh (vbuf, tars_len, tars, len, ibufs, apps);
    delete[] tars;
    delete[] ibufs;
    delete[] apps;
    setEntity (env, obj, mesh);
    jobject entity = env->NewGlobalRef (obj);
    mesh->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;[Lorg/karlsland/m3g/VertexBuffer;Lorg/karlsland/m3g/IndexBuffer;Lorg/karlsland/m3g/Appearance;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1initialize__Lorg_karlsland_m3g_VertexBuffer_2_3Lorg_karlsland_m3g_VertexBuffer_2Lorg_karlsland_m3g_IndexBuffer_2Lorg_karlsland_m3g_Appearance_2
  (JNIEnv* env, jobject obj, jobject base, jobjectArray targets, jobject submesh, jobject appearance)
{
    cout << "Java-MorhpingMesh: initialize2 is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getEntity (env, base);
    int len = env->GetArrayLength (targets);
    VertexBuffer** tars = new VertexBuffer* [len];
    for (int i = 0; i < len; i++) {
        tars[i] = (VertexBuffer*)getEntity (env, env->GetObjectArrayElement(targets, i));
        cout << "tars[" << i << "] = " << tars[i] << "\n";
    }
    cout << "1======\n";
    IndexBuffer*  ibuf = (IndexBuffer*)getEntity (env, submesh);
    Appearance*   app  = (Appearance*)getEntity (env, appearance);
    cout << *vbuf << "\n";
    cout << "len = " << len << "\n";
    cout << *ibuf << "\n";
    cout << *app << "\n";
    cout << "2======\n";
    MorphingMesh* mesh = new MorphingMesh (vbuf, len, tars, ibuf, app);
    cout << "3======\n";
    delete[] tars;
    setEntity (env, obj, mesh);
    jobject entity = env->NewGlobalRef (obj);
    mesh->setExportedEntity (entity);
    cout << "4======\n";
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-MorhpingMesh: finalize is called.\n";
    MorphingMesh* mesh = (MorphingMesh*)getEntity (env, obj);
    delete mesh;
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_getMorphTarget
 * Signature: (I)Lorg/karlsland/m3g/IndexBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1getMorphTarget
  (JNIEnv* env, jobject obj, jint index)
{
    cout << "Java-MorhpingMesh: getMorphTarget is called.\n";
    MorphingMesh* mesh = (MorphingMesh*)getEntity (env, obj);
    VertexBuffer* target = mesh->getMorphTarget (index);
    return (target != NULL) ? (jobject)target->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_getMorphTargetCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1getMorphTargetCount
  (JNIEnv* env, jobject obj)
{
    cout << "Java-MorhpingMesh: getMorphTargetCount is called.\n";
    MorphingMesh* mesh = (MorphingMesh*)getEntity (env, obj);
    int count = mesh->getMorphTargetCount ();
    return count;
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_getWeights
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1getWeights
  (JNIEnv* env, jobject obj, jfloatArray weights)
{
    cout << "Java-MorhpingMesh: getWeights is called.\n";
    MorphingMesh* mesh = (MorphingMesh*)getEntity (env, obj);
    float* ws = env->GetFloatArrayElements (weights, 0);
    mesh->getWeights (ws);
    env->ReleaseFloatArrayElements (weights, ws, 0);
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_setWeights
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1setWeights
  (JNIEnv* env, jobject obj, jfloatArray weights)
{
    cout << "Java-MorhpingMesh: setWeights is called.\n";
    MorphingMesh* mesh = (MorphingMesh*)getEntity (env, obj);
    int   len = env->GetArrayLength (weights);
    float* ws = env->GetFloatArrayElements (weights, 0);
    mesh->setWeights (len, ws);
    env->ReleaseFloatArrayElements (weights, ws, 0);
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-MorhpingMesh: print is called.\n";
    MorphingMesh* mesh = (MorphingMesh*)getEntity (env, obj);
    mesh->print (cout) << "\n";
}
