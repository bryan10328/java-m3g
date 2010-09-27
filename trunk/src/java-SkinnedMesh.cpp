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
    cout << "Java-SkinnedMesh: initialize1 is caleld.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, vertices);
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
    Group* skel = (Group*)getNativePointer (env, skeleton);

    SkinnedMesh* mesh;
    __TRY__;
    mesh = new SkinnedMesh (vbuf, len, ibufs, apps, skel);
    __CATCH_VOID__;
    delete[] ibufs;
    delete[] apps;
    setNativePointer (env, obj, mesh);
    jobject entity = env->NewGlobalRef (obj);
    mesh->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;Lorg/karlsland/m3g/IndexBuffer;Lorg/karlsland/m3g/Appearance;Lorg/karlsland/m3g/Group;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1initialize__Lorg_karlsland_m3g_VertexBuffer_2Lorg_karlsland_m3g_IndexBuffer_2Lorg_karlsland_m3g_Appearance_2Lorg_karlsland_m3g_Group_2
  (JNIEnv* env, jobject obj, jobject vertices, jobject submesh, jobject appearance, jobject skeleton)
{
    cout << "Java-SkinnedMesh: initialize2 is caleld.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, vertices);
    IndexBuffer*  ibuf = (IndexBuffer*)getNativePointer (env, submesh);
    Appearance*   app  = (Appearance*)getNativePointer (env, appearance);
    Group*        skel = (Group*)getNativePointer (env, skeleton);
    SkinnedMesh* mesh;
    __TRY__;
    mesh = new SkinnedMesh (vbuf, ibuf, app, skel);
    __CATCH_VOID__;
    setNativePointer (env, obj, mesh);
    jobject entity = env->NewGlobalRef (obj);
    mesh->setExportedEntity (entity);
}


/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-SkinnedMesh: finalize is caleld.\n";
    SkinnedMesh* mesh = (SkinnedMesh*)getNativePointer (env, obj);
    __TRY__;
    delete mesh;
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_addTransform
 * Signature: (Lorg/karlsland/m3g/Node;III)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1addTransform
  (JNIEnv* env, jobject obj, jobject bone, jint weight, jint firstVertex, jint numVertices)
{
    cout << "Java-SkinnedMesh: daddTransform is caleld.\n";
    SkinnedMesh* mesh = (SkinnedMesh*)getNativePointer (env, obj);
    Group* bon = (Group*)getNativePointer (env, obj);
    __TRY__;
    mesh->addTransform (bon, weight, firstVertex, numVertices);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_getBoneTransform
 * Signature: (Lorg/karlsland/m3g/Node;Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1getBoneTransform
  (JNIEnv* env, jobject obj, jobject bone, jobject transform)
{
    cout << "Java-SkinnedMesh: getBoneTransform is caleld.\n";
    SkinnedMesh* mesh  = (SkinnedMesh*)getNativePointer (env, obj);
    Node*       bon   = (Node*)getNativePointer (env, obj);
    Transform*  trans = (Transform*)getNativePointer (env, obj);
    __TRY__;
    mesh->getBoneTransform (bon, trans);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_getBoneVertices
 * Signature: (Lorg/karlsland/m3g/Node;[I[F)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1getBoneVertices
  (JNIEnv* env, jobject obj, jobject bone, jintArray indices, jfloatArray weights)
{
    cout << "Java-SkinnedMesh: getBoneVertices is caleld.\n";
    SkinnedMesh* mesh = (SkinnedMesh*)getNativePointer (env, obj);
    Node*       bon  = (Node*)getNativePointer (env, obj);
    int*   indcs  = NULL;
    float* weighs = NULL;
    if (indices) {
        indcs = env->GetIntArrayElements (indices, 0);
    }
    if (weights) {
        env->GetFloatArrayElements (weights, 0);
    }
    int num;
    __TRY__;
    num = mesh->getBoneVertices (bon, indcs, weighs);
    __CATCH_INT__;
    if (indices) {
        env->ReleaseIntArrayElements (indices, indcs, 0);
    }
    if (weights) {
        env->ReleaseFloatArrayElements (weights, weighs, 0);
    }
    return num;
}

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_getSkeleton
 * Signature: ()Lorg/karlsland/m3g/Group;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1getSkeleton
  (JNIEnv* env, jobject obj)
{
    cout << "Java-SkinnedMesh: getSkeleton is caleld.\n";
    SkinnedMesh* mesh = (SkinnedMesh*)getNativePointer (env, obj);
    Node* skeleton;
    __TRY__;
    skeleton = mesh->getSkeleton ();
    __CATCH_JOBJECT__;
    return (skeleton != NULL) ? (jobject)skeleton->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-SkinnedMesh: print is caleld.\n";
    SkinnedMesh* mesh = (SkinnedMesh*)getNativePointer (env, obj);
    __TRY__;
    mesh->print (cout) << "\n";
    __CATCH_VOID__;
}
