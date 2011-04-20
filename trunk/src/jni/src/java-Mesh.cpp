#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Mesh
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;[Lorg/karlsland/m3g/IndexBuffer;[Lorg/karlsland/m3g/Appearance;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Mesh_jni_1initialize__Lorg_karlsland_m3g_VertexBuffer_2_3Lorg_karlsland_m3g_IndexBuffer_2_3Lorg_karlsland_m3g_Appearance_2
  (JNIEnv* env, jobject thiz, jobject vertices, jobjectArray submeshes, jobjectArray appearances)
{
    cout << "Java-Mesh: initialize1 is called.\n";
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
    Mesh* mesh = NULL;
    __TRY__;
    mesh = new Mesh (vbuf, len, ibufs, apps);
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
 * Class:     org_karlsland_m3g_Mesh
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/VertexBuffer;Lorg/karlsland/m3g/IndexBuffer;Lorg/karlsland/m3g/Appearance;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Mesh_jni_1initialize__Lorg_karlsland_m3g_VertexBuffer_2Lorg_karlsland_m3g_IndexBuffer_2Lorg_karlsland_m3g_Appearance_2
  (JNIEnv* env, jobject thiz, jobject vertices, jobject submesh, jobject appearance)
{
    cout << "Java-Mesh: initialize2 is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, vertices);
    IndexBuffer*  ibuf = (IndexBuffer*)getNativePointer (env, submesh);
    Appearance*   app  = (Appearance*)getNativePointer (env, appearance);
    Mesh* mesh = NULL;
    __TRY__;
    mesh = new Mesh (vbuf, ibuf, app);
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer (env, thiz, mesh);
    jobject entity = env->NewGlobalRef (thiz);
    mesh->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Mesh
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Mesh_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Mesh: finalize is called.\n";
    Mesh* mesh = (Mesh*)getNativePointer (env, thiz);
    env->DeleteGlobalRef ((jobject)mesh->getExportedEntity());
    addUsedObject (mesh);
}

/*
 * Class:     org_karlsland_m3g_Mesh
 * Method:    jni_getAppearance
 * Signature: (I)Lorg/karlsland/m3g/Appearance;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Mesh_jni_1getAppearance
  (JNIEnv* env, jobject thiz, jint index)
{
    cout << "Java-Mesh: getAppearance is called.\n";
    Mesh*       mesh = (Mesh*)getNativePointer (env, thiz);
    Appearance* app  = NULL;
    __TRY__;
    app = mesh->getAppearance (index);
    __CATCH__;
    return (app != NULL) ? (jobject)app->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Mesh
 * Method:    jni_getIndexBuffer
 * Signature: (I)Lorg/karlsland/m3g/IndexBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Mesh_jni_1getIndexBuffer
  (JNIEnv* env, jobject thiz, jint index)
{
    cout << "Java-Mesh: getIndexBuffer is called.\n";
    Mesh*        mesh = (Mesh*)getNativePointer (env, thiz);
    IndexBuffer* ibuf = NULL;
    __TRY__;
    ibuf = mesh->getIndexBuffer (index);
    __CATCH__;
    return (ibuf != NULL) ? (jobject)ibuf->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Mesh
 * Method:    jni_getSubmeshCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Mesh_jni_1getSubmeshCount
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Mesh: getSubmeshCount is called.\n";
    Mesh* mesh = (Mesh*)getNativePointer (env, thiz);
    int count = 0;
    __TRY__;
    count = mesh->getSubmeshCount ();
    __CATCH__;
    return count;
}

/*
 * Class:     org_karlsland_m3g_Mesh
 * Method:    jni_getVertexBuffer
 * Signature: ()Lorg/karlsland/m3g/VertexBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Mesh_jni_1getVertexBuffer
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Mesh: getVertexBuffer is called.\n";
    Mesh*         mesh = (Mesh*)getNativePointer (env, thiz);
    VertexBuffer* vbuf = NULL;
    __TRY__;
    vbuf = (VertexBuffer*)mesh->getVertexBuffer ();
    __CATCH__;
    return (vbuf != NULL) ? (jobject)vbuf->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Mesh
 * Method:    jni_setAppearance
 * Signature: (ILorg/karlsland/m3g/Appearance;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Mesh_jni_1setAppearance
  (JNIEnv* env, jobject thiz, jint index, jobject appearance)
{
    cout << "Java-Mesh: setAppearance is called.\n";
    Mesh*       mesh = (Mesh*)getNativePointer (env, thiz);
    Appearance* app  = (Appearance*)getNativePointer (env, appearance);
    __TRY__;
    mesh->setAppearance (index, app);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Mesh
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_Mesh_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Mesh: print is called.\n";
    Mesh* mesh = (Mesh*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    mesh->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}


void Java_new_Mesh                (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java Mesh.\n";
    Mesh*    mesh             = dynamic_cast<Mesh*>(obj);
    jobject  mesh_obj         = allocJavaObject (env, "org/karlsland/m3g/Mesh", mesh);

    Java_build_Object3D      (env, mesh_obj, mesh);
    Java_build_Transformable (env, mesh_obj, mesh);
    Java_build_Node          (env, mesh_obj, mesh);
    Java_build_Mesh          (env, mesh_obj, mesh);

    env->DeleteLocalRef (mesh_obj);
}

void Java_build_Mesh (JNIEnv* env, jobject mesh_obj, m3g::Mesh* mesh)
{
    jclass   mesh_class       = env->GetObjectClass (mesh_obj);
    jfieldID mesh_vertices    = env->GetFieldID (mesh_class, "vertices"   , "Lorg/karlsland/m3g/VertexBuffer;");
    jfieldID mesh_submeshes   = env->GetFieldID (mesh_class, "submeshes"  , "Ljava/util/List;");
    jfieldID mesh_appearances = env->GetFieldID (mesh_class, "appearances", "Ljava/util/List;");

    VertexBuffer* vertices = mesh->getVertexBuffer ();
    if (vertices) {
        env->SetObjectField (mesh_obj, mesh_vertices, (jobject)vertices->getExportedEntity());
    }

    int count = mesh->getSubmeshCount();

    jclass    submeshes_class = env->FindClass   ("java/util/ArrayList");
    jmethodID submeshes_init  = env->GetMethodID (submeshes_class, "<init>", "()V");
    jmethodID submeshes_add   = env->GetMethodID (submeshes_class, "add", "(Ljava/lang/Object;)Z");
    jobject   submeshes_obj   = env->NewObject   (submeshes_class, submeshes_init);
    for (int i = 0; i < count; i++) {
        IndexBuffer* ibuf = mesh->getIndexBuffer (i);
        if (ibuf) {
            env->CallObjectMethod (submeshes_obj, submeshes_add, (jobject)ibuf->getExportedEntity());
        } else {
            env->CallObjectMethod (submeshes_obj, submeshes_add, (jobject)0);
        }
    }
    env->SetObjectField (mesh_obj, mesh_submeshes, submeshes_obj);
    env->DeleteLocalRef (submeshes_obj);

    jclass    appearances_class = env->FindClass   ("java/util/ArrayList");
    jmethodID appearances_init  = env->GetMethodID (appearances_class, "<init>", "()V");
    jmethodID appearances_add   = env->GetMethodID (appearances_class, "add", "(Ljava/lang/Object;)Z");
    jobject   appearances_obj   = env->NewObject   (appearances_class, appearances_init);
    for (int i = 0; i < count; i++) {
        Appearance* app = mesh->getAppearance (i);
        if (app) {
            env->CallObjectMethod (appearances_obj, appearances_add, (jobject)app->getExportedEntity());
        } else {
            env->CallObjectMethod (appearances_obj, appearances_add, (jobject)0);
        }
    }
    env->SetObjectField (mesh_obj, mesh_appearances, appearances_obj);
    env->DeleteLocalRef (appearances_obj);
}
