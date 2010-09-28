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
    Mesh* mesh;
    __TRY__;
    mesh = new Mesh (vbuf, len, ibufs, apps);
    __CATCH_VOID__;
    delete[] ibufs;
    delete[] apps;
    setNativePointer (env, thiz, mesh);
    jobject entity = env->NewWeakGlobalRef (thiz);
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
    Mesh* mesh;
    __TRY__;
    mesh = new Mesh (vbuf, ibuf, app);
    __CATCH_VOID__;
    setNativePointer (env, thiz, mesh);
    jobject entity = env->NewWeakGlobalRef (thiz);
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
    env->DeleteWeakGlobalRef ((jobject)mesh->getExportedEntity());
    __TRY__;
    delete mesh;
    __CATCH_VOID__;
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
    Appearance* app;
    __TRY__;
    app = mesh->getAppearance (index);
    __CATCH_JOBJECT__;
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
    IndexBuffer* ibuf;
    __TRY__;
    ibuf = mesh->getIndexBuffer (index);
    __CATCH_JOBJECT__;
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
    int count;
    __TRY__;
    count = mesh->getSubmeshCount ();
    __CATCH_INT__;
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
    Mesh* mesh = (Mesh*)getNativePointer (env, thiz);
    VertexBuffer* vbuf;
    __TRY__;
    vbuf = (VertexBuffer*)mesh->getVertexBuffer ();
    __CATCH_JOBJECT__;
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
    Appearance* app = (Appearance*)getNativePointer (env, appearance);
    __TRY__;
    mesh->setAppearance (index, app);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Mesh
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Mesh_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Mesh: print is called.\n";
    Mesh* mesh = (Mesh*)getNativePointer (env, thiz);
    __TRY__;
    mesh->print (cout) << "\n";
    __CATCH_VOID__;
}

