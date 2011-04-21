#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
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
    VertexBuffer*  vbuf     = (VertexBuffer*)getNativePointer (env, base);
    int            tars_len = env->GetArrayLength (targets);
    VertexBuffer** tars     = new VertexBuffer* [tars_len];
    for (int i = 0; i < tars_len; i++) {
        tars[i] = (VertexBuffer*)getNativePointer (env, env->GetObjectArrayElement(targets, i));
    }
    int           len   = env->GetArrayLength (submeshes);
    IndexBuffer** ibufs = new IndexBuffer* [len];
    for (int i = 0; i < len; i++) {
        ibufs[i] = (IndexBuffer*)getNativePointer (env, env->GetObjectArrayElement(submeshes, i));
    }
    len = env->GetArrayLength (appearances);
    Appearance** apps = new Appearance* [len];
    for (int i = 0; i < len; i++) {
        apps[i] = (Appearance*)getNativePointer (env, env->GetObjectArrayElement(appearances, i));
    }
    MorphingMesh* mesh = NULL;
    __TRY__;
    mesh = new MorphingMesh (vbuf, tars_len, tars, len, ibufs, apps);
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    delete[] tars;
    delete[] ibufs;
    delete[] apps;
    setNativePointer (env, thiz, mesh);
    jobject entity = env->NewGlobalRef (thiz);
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
    MorphingMesh* mesh = NULL;
    __TRY__;
    mesh = new MorphingMesh (vbuf, len, tars, ibuf, app);
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    delete[] tars;
    setNativePointer (env, thiz, mesh);
    jobject entity = env->NewGlobalRef (thiz);
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
    addUsedObject (mesh);
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
    MorphingMesh* mesh   = (MorphingMesh*)getNativePointer (env, thiz);
    VertexBuffer* target = NULL;
    __TRY__;
    target = mesh->getMorphTarget (index);
    __CATCH__;
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
    int count = 0;
    __TRY__;
    count = mesh->getMorphTargetCount ();
    __CATCH__;
    return count;
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_getWeights
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1getWeights
  (JNIEnv* env, jobject thiz, jfloatArray weights_array)
{
    cout << "Java-MorhpingMesh: getWeights is called.\n";
    MorphingMesh* mesh    = (MorphingMesh*)getNativePointer (env, thiz);
    float*        weights = getFloatArrayPointer (env, weights_array);
    __TRY__;
    mesh->getWeights (weights);
    __CATCH__;
    releaseFloatArrayPointer (env, weights_array, weights);
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_setWeights
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1setWeights
  (JNIEnv* env, jobject thiz, jfloatArray weights_array)
{
    cout << "Java-MorhpingMesh: setWeights is called.\n";
    MorphingMesh* mesh    = (MorphingMesh*)getNativePointer (env, thiz);
    int           len     = getFloatArrayLength (env, weights_array);
    float*        weights = getFloatArrayPointer (env, weights_array);
    __TRY__;
    mesh->setWeights (len, weights);
    __CATCH__;
    releaseFloatArrayPointer (env, weights_array, weights);
}

/*
 * Class:     org_karlsland_m3g_MorphingMesh
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_MorphingMesh_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-MorhpingMesh: print is called.\n";
    MorphingMesh* mesh = (MorphingMesh*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    mesh->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}

void Java_new_MorphingMesh        (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java MorphingMesh.\n";
    MorphingMesh* mesh         = dynamic_cast<MorphingMesh*>(obj);
    jobject       mesh_obj     = allocJavaObject (env, "org/karlsland/m3g/MorphingMesh", mesh);

    Java_build_Object3D      (env, mesh_obj, mesh);
    Java_build_Transformable (env, mesh_obj, mesh);
    Java_build_Node          (env, mesh_obj, mesh);
    Java_build_Mesh          (env, mesh_obj, mesh);
    Java_build_MorphingMesh  (env, mesh_obj, mesh);

    env->DeleteLocalRef (mesh_obj);
}


void Java_build_MorphingMesh (JNIEnv* env, jobject mesh_obj, m3g::MorphingMesh* mesh)
{
    jclass        mesh_class   = env->GetObjectClass (mesh_obj);
    jfieldID      mesh_targets = env->GetFieldID (mesh_class, "morphTargets", "Ljava/util/List;");


    int count = mesh->getMorphTargetCount ();

    jclass    targets_class = env->FindClass   ("java/util/ArrayList");
    jmethodID targets_init  = env->GetMethodID (targets_class, "<init>", "()V");
    jmethodID targets_add   = env->GetMethodID (targets_class, "add", "(Ljava/lang/Object;)Z");
    jobject   targets_obj   = env->NewObject   (targets_class, targets_init);
    
    for (int i = 0; i < count; i++) {
        VertexBuffer* target = mesh->getMorphTarget (i);
        if (target) {
            env->CallObjectMethod (targets_obj, targets_add, (jobject)target->getExportedEntity());
        } else {
            env->CallObjectMethod (targets_obj, targets_add, (jobject)0);
        }
    }
    env->SetObjectField (mesh_obj, mesh_targets, targets_obj);

    env->DeleteLocalRef (mesh_class);
    env->DeleteLocalRef (targets_class);
    env->DeleteLocalRef (targets_obj);
}
