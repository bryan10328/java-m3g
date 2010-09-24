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
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Camera: initiazlize is called.\n";
    Camera* cam = new Camera ();
    setNativePointer (env, obj, cam);
    jobject entity = env->NewGlobalRef (obj);
    cam->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Camera_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Camera: finalize is called.\n";
    Camera* cam = (Camera*)getNativePointer (env, obj);
    delete cam;
}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_getProjection
 * Signature: ([F)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Camera_jni_1getProjection___3F
  (JNIEnv* env, jobject obj, jfloatArray params)
{
    cout << "Java-Camera: getProjection is called.\n";
    Camera* cam = (Camera*)getNativePointer (env, obj);
    float* prms = env->GetFloatArrayElements (params, 0);
    int type = cam->getProjection (prms);
    env->ReleaseFloatArrayElements (params, prms, 0);
    return type;
}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_getProjection
 * Signature: (Lorg/karlsland/m3g/Transform;)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Camera_jni_1getProjection__Lorg_karlsland_m3g_Transform_2
  (JNIEnv* env, jobject obj, jobject transform)
{
    cout << "Java-Camera: getProjection is called.\n";
    Camera*    cam   = (Camera*)getNativePointer (env, obj);
    Transform* trans = (Transform*)getNativePointer (env, transform);
    int type = cam->getProjection (trans);
    return type;
}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_setGeneric
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Camera_jni_1setGeneric
  (JNIEnv* env, jobject obj, jobject transform)
{
    cout << "Java-Camera: setGeneric is called.\n";
    Camera*    cam   = (Camera*)getNativePointer (env, obj);
    Transform* trans = (Transform*)getNativePointer (env, transform);
    cam->setGeneric (*trans);
}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_setParallel
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Camera_jni_1setParallel
  (JNIEnv* env, jobject obj, jfloat fovy, jfloat aspectRatio, jfloat near, jfloat far)
{
    cout << "Java-Camera: setParallel is called.\n";
    Camera* cam = (Camera*)getNativePointer (env, obj);
    cam->setParallel (fovy, aspectRatio, near, far);
}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_setPerspective
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Camera_jni_1setPerspective
  (JNIEnv* env, jobject obj, jfloat fovy, jfloat aspectRatio, jfloat near, jfloat far)
{
    cout << "Java-Camera: setPerspective is called.\n";
    Camera* cam = (Camera*)getNativePointer (env, obj);
    cam->setPerspective (fovy, aspectRatio, near, far);
}

/*
 * Class:     org_karlsland_m3g_Camera
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Camera_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Camera: print is called.\n";
    Camera* cam = (Camera*)getNativePointer (env, obj);
    cam->print (cout) << "\n";
}
