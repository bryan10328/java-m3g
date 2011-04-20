#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;[Lorg/karlsland/m3g/IndexBuffer;[Lorg/karlsland/m3g/Appearance;Lorg/karlsland/m3g/Group;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1initialize__Lorg_karlsland_m3g_VertexBuffer_2_3Lorg_karlsland_m3g_IndexBuffer_2_3Lorg_karlsland_m3g_Appearance_2Lorg_karlsland_m3g_Group_2
  (JNIEnv* env, jobject thiz, jobject vertices, jobjectArray submeshes, jobjectArray appearances, jobject skeleton)
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

    SkinnedMesh* mesh = NULL;
    __TRY__;
    mesh = new SkinnedMesh (vbuf, len, ibufs, apps, skel);
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    delete[] ibufs;
    delete[] apps;
    setNativePointer (env, thiz, mesh);
    jobject entity = env->NewGlobalRef (thiz);
    mesh->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;Lorg/karlsland/m3g/IndexBuffer;Lorg/karlsland/m3g/Appearance;Lorg/karlsland/m3g/Group;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1initialize__Lorg_karlsland_m3g_VertexBuffer_2Lorg_karlsland_m3g_IndexBuffer_2Lorg_karlsland_m3g_Appearance_2Lorg_karlsland_m3g_Group_2
  (JNIEnv* env, jobject thiz, jobject vertices, jobject submesh, jobject appearance, jobject skeleton)
{
    cout << "Java-SkinnedMesh: initialize2 is caleld.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, vertices);
    IndexBuffer*  ibuf = (IndexBuffer*)getNativePointer (env, submesh);
    Appearance*   app  = (Appearance*)getNativePointer (env, appearance);
    Group*        skel = (Group*)getNativePointer (env, skeleton);
    SkinnedMesh*  mesh = NULL;
    __TRY__;
    mesh = new SkinnedMesh (vbuf, ibuf, app, skel);
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer (env, thiz, mesh);
    jobject entity = env->NewGlobalRef (thiz);
    mesh->setExportedEntity (entity);
}


/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-SkinnedMesh: finalize is caleld.\n";
    SkinnedMesh* mesh = (SkinnedMesh*)getNativePointer (env, thiz);
    env->DeleteGlobalRef ((jobject)mesh->getExportedEntity());
    addUsedObject (mesh);
}

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_addTransform
 * Signature: (Lorg/karlsland/m3g/Node;III)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1addTransform
  (JNIEnv* env, jobject thiz, jobject bone, jint weight, jint firstVertex, jint numVertices)
{
    cout << "Java-SkinnedMesh: daddTransform is caleld.\n";
    SkinnedMesh* mesh = (SkinnedMesh*)getNativePointer (env, thiz);
    Group*       bon  = (Group*)getNativePointer (env, bone);
    __TRY__;
    mesh->addTransform (bon, weight, firstVertex, numVertices);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_getBoneTransform
 * Signature: (Lorg/karlsland/m3g/Node;Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1getBoneTransform
  (JNIEnv* env, jobject thiz, jobject bone, jobject transform)
{
    cout << "Java-SkinnedMesh: getBoneTransform is caleld.\n";
    SkinnedMesh* mesh  = (SkinnedMesh*)getNativePointer (env, thiz);
    Node*        bon   = (Node*)getNativePointer (env, bone);
    Transform*   trans = (Transform*)getNativePointer (env, transform);
    __TRY__;
    mesh->getBoneTransform (bon, trans);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_getBoneVertices
 * Signature: (Lorg/karlsland/m3g/Node;[I[F)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1getBoneVertices
  (JNIEnv* env, jobject thiz, jobject bone_obj, jintArray indices_array, jfloatArray weights_array)
{
    cout << "Java-SkinnedMesh: getBoneVertices is caleld.\n";
    SkinnedMesh* mesh    = (SkinnedMesh*)getNativePointer (env, thiz);
    Node*        bone    = (Node*)getNativePointer (env, bone_obj);
    int*         indices = getIntArrayPointer (env, indices_array);
    float*       weights = getFloatArrayPointer (env, weights_array);
    int num = 0;
    __TRY__;
    num = mesh->getBoneVertices (bone, indices, weights);
    __CATCH__;
    releaseIntArrayPointer (env, indices_array, indices);
    releaseFloatArrayPointer (env, weights_array, weights);
    return num;
}

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_getSkeleton
 * Signature: ()Lorg/karlsland/m3g/Group;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1getSkeleton
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-SkinnedMesh: getSkeleton is caleld.\n";
    SkinnedMesh* mesh = (SkinnedMesh*)getNativePointer (env, thiz);
    Node* skeleton = NULL;
    __TRY__;
    skeleton = mesh->getSkeleton ();
    __CATCH__;
    return (skeleton != NULL) ? (jobject)skeleton->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_SkinnedMesh
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_SkinnedMesh_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-SkinnedMesh: print is caleld.\n";
    SkinnedMesh* mesh = (SkinnedMesh*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    mesh->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}


void Java_new_SkinnedMesh         (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java SkinnedMesh.\n";
    SkinnedMesh* mesh          = dynamic_cast<SkinnedMesh*>(obj);
    jobject      mesh_obj      = allocJavaObject (env, "org/karlsland/m3g/SkinnedMesh", mesh);

    Java_build_Object3D      (env, mesh_obj, mesh);
    Java_build_Transformable (env, mesh_obj, mesh);
    Java_build_Node          (env, mesh_obj, mesh);
    Java_build_Mesh          (env, mesh_obj, mesh);
    Java_build_SkinnedMesh   (env, mesh_obj, mesh);

    env->DeleteLocalRef (mesh_obj);
}


void Java_build_SkinnedMesh (JNIEnv* env, jobject mesh_obj, m3g::SkinnedMesh* mesh)
{
    jclass       mesh_class    = env->GetObjectClass (mesh_obj);
    jfieldID     mesh_skeleton = env->GetFieldID     (mesh_class, "skeleton", "Lorg/karlsland/m3g/Group;");

    Group* skeleton = mesh->getSkeleton ();
    if (skeleton) {
        if (skeleton->getExportedEntity() == 0) {
            Java_new_JavaM3GObject (env, skeleton);
        }
        env->SetObjectField (mesh_obj, mesh_skeleton, (jobject)skeleton->getExportedEntity());
    }


}
