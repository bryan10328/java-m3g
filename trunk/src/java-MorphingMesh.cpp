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
  (JNIEnv* env, jobject thiz, jobject base, jobjectArray targets, jobjectArray submeshes, jobjectArray appearances)
{
    cout << "Java-MorhpingMesh: initilize1 is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, base);
    int tars_len = env->GetArrayLength (targets);
    VertexBuffer** tars = new VertexBuffer* [tars_len];
    for (int i = 0; i < tars_len; i++) {
        tars[i] = (VertexBuffer*)getNativePointer (env, env->GetObjectArrayElement(targets, i));
    }
    int len = env->GetArrayLength (submeshes);
    IndexBuffer** ibufs = new IndexBuffer* [len];
    for (int i = 0; i < len; i++) {
        ibufs[i] = (IndexBuffer*)getNativePointer (env, env->GetObjectArrayElement(submeshes, i));
    }
    len = env->GetArrayLength (appearances);
    Appearance** apps = new Appearance* [len];
    for (int i = 0; i < len; i++) {
        apps[i] = (Appearance*)getNativePointer (env, env->GetObjectArrayElement(appearances, i));
    }
    MorphingMesh* mesh;
    __TRY__;
    mesh = new MorphingMesh (vbuf, tars_len, tars, len, ibufs, apps);
    __CATCH_VOID__;
    delete[] tars;
    delete[] ibufs;
    delete[] apps;
    setNativePointer (env, thiz, mesh);
    jobject entity = env->NewWeakGlobalRef (thiz);
    mesh->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;[Lorg/karlsland/m3g/VertexBuffer;Lorg/karlsland/m3g/IndexBuffer;Lorg/karlsland/m3g/Appearance;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1initialize__Lorg_karlsland_m3g_VertexBuffer_2_3Lorg_karlsland_m3g_VertexBuffer_2Lorg_karlsland_m3g_IndexBuffer_2Lorg_karlsland_m3g_Appearance_2
  (JNIEnv* env, jobject thiz, jobject base, jobjectArray targets, jobject submesh, jobject appearance)
{
    cout << "Java-MorhpingMesh: initialize2 is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, base);
    int len = env->GetArrayLength (targets);
    VertexBuffer** tars = new VertexBuffer* [len];
    for (int i = 0; i < len; i++) {
        tars[i] = (VertexBuffer*)getNativePointer (env, env->GetObjectArrayElement(targets, i));
    }
    IndexBuffer*  ibuf = (IndexBuffer*)getNativePointer (env, submesh);
    Appearance*   app  = (Appearance*)getNativePointer (env, appearance);
    MorphingMesh* mesh;
    __TRY__;
    mesh = new MorphingMesh (vbuf, len, tars, ibuf, app);
    __CATCH_VOID__;
    delete[] tars;
    setNativePointer (env, thiz, mesh);
    jobject entity = env->NewWeakGlobalRef (thiz);
    mesh->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-MorhpingMesh: finalize is called.\n";
    MorphingMesh* mesh = (MorphingMesh*)getNativePointer (env, thiz);
    env->DeleteWeakGlobalRef ((jobject)mesh->getExportedEntity());
    __TRY__;
    delete mesh;
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_getMorphTarget
 * Signature: (I)Lorg/karlsland/m3g/IndexBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1getMorphTarget
  (JNIEnv* env, jobject thiz, jint index)
{
    cout << "Java-MorhpingMesh: getMorphTarget is called.\n";
    MorphingMesh* mesh = (MorphingMesh*)getNativePointer (env, thiz);
    VertexBuffer* target;
    __TRY__;
    target = mesh->getMorphTarget (index);
    __CATCH_JOBJECT__;
    return (target != NULL) ? (jobject)target->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_getMorphTargetCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1getMorphTargetCount
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-MorhpingMesh: getMorphTargetCount is called.\n";
    MorphingMesh* mesh = (MorphingMesh*)getNativePointer (env, thiz);
    int count;
    __TRY__;
    count = mesh->getMorphTargetCount ();
    __CATCH_INT__;
    return count;
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_getWeights
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1getWeights
  (JNIEnv* env, jobject thiz, jfloatArray weights)
{
    cout << "Java-MorhpingMesh: getWeights is called.\n";
    MorphingMesh* mesh = (MorphingMesh*)getNativePointer (env, thiz);
    float* ws = env->GetFloatArrayElements (weights, 0);
    __TRY__;
    mesh->getWeights (ws);
    __CATCH_VOID__;
    env->ReleaseFloatArrayElements (weights, ws, 0);
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_setWeights
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1setWeights
  (JNIEnv* env, jobject thiz, jfloatArray weights)
{
    cout << "Java-MorhpingMesh: setWeights is called.\n";
    MorphingMesh* mesh = (MorphingMesh*)getNativePointer (env, thiz);
    int   len = env->GetArrayLength (weights);
    float* ws = env->GetFloatArrayElements (weights, 0);
    __TRY__;
    mesh->setWeights (len, ws);
    __CATCH_VOID__;
    env->ReleaseFloatArrayElements (weights, ws, 0);
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-MorhpingMesh: print is called.\n";
    MorphingMesh* mesh = (MorphingMesh*)getNativePointer (env, thiz);
    __TRY__;
    mesh->print (cout) << "\n";
    __CATCH_VOID__;
}

