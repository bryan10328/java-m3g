#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Camera_jni_1initialize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Camera: initiazlize is called.\n";
    Camera* cam;
    __TRY__;
    cam = new Camera ();
    __CATCH_VOID__;
    setNativePointer (env, thiz, cam);
    jobject entity = env->NewWeakGlobalRef (thiz);
    cam->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Camera_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Camera: finalize is called.\n";
    Camera* cam = (Camera*)getNativePointer (env, thiz);
    env->DeleteWeakGlobalRef ((jobject)cam->getExportedEntity());
    __TRY__;
    delete cam;
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_getProjection
 * Signature: ([F)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Camera_jni_1getProjection___3F
  (JNIEnv* env, jobject thiz, jfloatArray params)
{
    cout << "Java-Camera: getProjection is called.\n";
    Camera* cam = (Camera*)getNativePointer (env, thiz);
    float* prms = env->GetFloatArrayElements (params, 0);
    int type;
    __TRY__;
    type = cam->getProjection (prms);
    __CATCH_INT__;
    env->ReleaseFloatArrayElements (params, prms, 0);
    return type;
}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_getProjection
 * Signature: (Lorg/karlsland/m3g/Transform;)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Camera_jni_1getProjection__Lorg_karlsland_m3g_Transform_2
  (JNIEnv* env, jobject thiz, jobject transform)
{
    cout << "Java-Camera: getProjection is called.\n";
    Camera*    cam   = (Camera*)getNativePointer (env, thiz);
    Transform* trans = (Transform*)getNativePointer (env, transform);
    int type;
    __TRY__;
    type = cam->getProjection (trans);
    __CATCH_INT__;
    return type;
}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_lookAt
 * Signature: (FFFFFFFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Camera_jni_1lookAt
  (JNIEnv* env, jobject thiz, jfloat fromX, jfloat fromY, jfloat fromZ, jfloat toX, jfloat toY, jfloat toZ, jfloat upX, jfloat upY, jfloat upZ)
{
    cout << "Java-Camera: lookAt is called.\n";
    Camera*    cam   = (Camera*)getNativePointer (env, thiz);
    __TRY__;
    cam->lookAt (fromX, fromY, fromZ,
                 toX, toY, toZ,
                 upX, upY, upZ);
    __CATCH_VOID__;
}


/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_setGeneric
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Camera_jni_1setGeneric
  (JNIEnv* env, jobject thiz, jobject transform)
{
    cout << "Java-Camera: setGeneric is called.\n";
    Camera*    cam   = (Camera*)getNativePointer (env, thiz);
    Transform* trans = (Transform*)getNativePointer (env, transform);
    __TRY__;
    cam->setGeneric (*trans);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_setParallel
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Camera_jni_1setParallel
  (JNIEnv* env, jobject thiz, jfloat fovy, jfloat aspectRatio, jfloat near, jfloat far)
{
    cout << "Java-Camera: setParallel is called.\n";
    Camera* cam = (Camera*)getNativePointer (env, thiz);
    __TRY__;
    cam->setParallel (fovy, aspectRatio, near, far);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_setPerspective
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Camera_jni_1setPerspective
  (JNIEnv* env, jobject thiz, jfloat fovy, jfloat aspectRatio, jfloat near, jfloat far)
{
    cout << "Java-Camera: setPerspective is called.\n";
    Camera* cam = (Camera*)getNativePointer (env, thiz);
    __TRY__;
    cam->setPerspective (fovy, aspectRatio, near, far);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Camera_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Camera: print is called.\n";
    Camera* cam = (Camera*)getNativePointer (env, thiz);
    __TRY__;
    cam->print (cout) << "\n";
    __CATCH_VOID__;
}


void Java_new_Camera              (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java Camera.\n";
    Camera* cam     = dynamic_cast<Camera*>(obj);
    jobject cam_obj = allocJavaObject (env, "org/karlsland/m3g/Camera", cam);

    Java_build_Object3D      (env, cam_obj, cam);
    Java_build_Transformable (env, cam_obj, cam);
    Java_build_Node          (env, cam_obj, cam);
    Java_build_Camera        (env, cam_obj, cam);
}

void Java_build_Camera (JNIEnv* env, jobject cam_obj, m3g::Camera* cam)
{
    // nothing to do
}
