#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1initialize__
  (JNIEnv* env, jobject obj)
{
    cout << "Jni: Transform initilize is called.\n";
    Transform* tra = new Transform ();
    setEntity (env, obj, tra);
    jobject entity = env->NewGlobalRef (obj);
    tra->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1initialize__Lorg_karlsland_m3g_Transform_2
  (JNIEnv* env, jobject obj, jobject transform)
{
    cout << "Jni: Transform initilize is called.\n";
    Transform* t = (Transform*)getEntity (env, transform);
    cout << "Jni: Entity = " << t << "\n";
    Transform* tra = new Transform (*t);
    setEntity (env, obj, tra);
    jobject entity = env->NewGlobalRef (obj);
    tra->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Transform: finalize is called.\n";
    Transform* trans = (Transform*)getEntity (env, obj);
    delete trans;
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_get
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1get
  (JNIEnv* env, jobject obj, jfloatArray matrix)
{
    cout << "Java-Transform: get is called.\n";
    Transform* trans = (Transform*)getEntity (env, obj);
    float* mat = env->GetFloatArrayElements (matrix, 0);
    trans->get (mat);
    env->ReleaseFloatArrayElements (matrix, mat, 0);
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_invert
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1invert
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Transform: invert is called.\n";
    Transform* trans = (Transform*)getEntity (env, obj);
    trans->invert ();
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_postMultiply
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1postMultiply
  (JNIEnv* env, jobject obj, jobject transform)
{
    cout << "Java-Transform: postMultiply is called.\n";
    Transform* trans1 = (Transform*)getEntity (env, obj);
    Transform* trans2 = (Transform*)getEntity (env, transform);
    trans1->postMultiply (*trans2);
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_postRotate
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1postRotate
  (JNIEnv* env, jobject obj, jfloat angle, jfloat ax, jfloat ay, jfloat az)
{
    cout << "Java-Transform: postRotate is called.\n";
    Transform* trans = (Transform*)getEntity (env, obj);
    trans->postRotate  (angle, ax, ay, az);
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_postRotateQuat
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1postRotateQuat
  (JNIEnv* env, jobject obj, jfloat qx, jfloat qy, jfloat qz, jfloat qw)
{
    cout << "Java-Transform: postRotateQuat is called.\n";
    Transform* trans = (Transform*)getEntity (env, obj);
    trans->postRotateQuat (qx, qy, qz, qw);
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_postScale
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1postScale
  (JNIEnv* env, jobject obj, jfloat sx, jfloat sy, jfloat sz)
{
    cout << "Java-Transform: postScale is called.\n";
    Transform* trans = (Transform*)getEntity (env, obj);
    trans->postScale (sx, sy, sz);
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_postTranslate
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1postTranslate
  (JNIEnv* env, jobject obj, jfloat tx, jfloat ty, jfloat tz)
{
    cout << "Java-Transform: postTranslate is called.\n";
    Transform* trans = (Transform*)getEntity (env, obj);
    trans->postTranslate (tx, ty, tz);
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_set
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1set___3F
  (JNIEnv* env, jobject obj, jfloatArray matrix)
{
    cout << "Java-Transform: set is called.\n";
    Transform* trans = (Transform*)getEntity (env, obj);
    cout << "trans = " << trans << "\n";
    cout << "length = " << env->GetArrayLength (matrix) << "\n";
    float* mat = env->GetFloatArrayElements (matrix, 0);
    trans->set (mat);
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_set
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1set__Lorg_karlsland_m3g_Transform_2
  (JNIEnv* env, jobject obj, jobject transform)
{
    Transform* trans = (Transform*)getEntity (env, obj);
    Transform* target = (Transform*)getEntity (env, transform);
    trans->set (*target);
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_setIdentity
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1setIdentity
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Transform: setIdentity is called.\n";
    Transform* trans = (Transform*)getEntity (env, obj);
    trans->setIdentity ();
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_transform
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1transform___3F
  (JNIEnv* env, jobject obj, jfloatArray vectors)
{
    cout << "Java-Transform: transform is called.\n";
    Transform* trans = (Transform*)getEntity (env, obj);
    float* vec = env->GetFloatArrayElements (vectors, 0);
    int len = env->GetArrayLength (vectors);
    cout << "len = " << len << "\n";
    cout << "transform in\n";
    trans->transform (len, vec);
    cout << "transform out\n";
    env->ReleaseFloatArrayElements (vectors, vec, 0);
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_transform
 * Signature: (Lorg/karlsland/m3g/VertexArray;[FZ)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1transform__Lorg_karlsland_m3g_VertexArray_2_3FZ
  (JNIEnv* env, jobject obj, jobject in, jfloatArray out, jboolean w)
{
    cout << "Java-Transform: transform vertex-array is called.\n";
    Transform* trans = (Transform*)getEntity (env, obj);
    VertexArray* varry = (VertexArray*)getEntity (env, in);
    float* ou = env->GetFloatArrayElements (out, 0);
    //trans->transform (varry, ou, w);
    env->ReleaseFloatArrayElements (out, ou, 0);
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_transpose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1transpose
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Transform: transpose is called.\n";
    Transform* trans = (Transform*)getEntity (env, obj);
    trans->transpose ();
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_printf
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1print
  (JNIEnv* env, jobject obj)
{
    Transform* trans = (Transform*)getEntity (env, obj);
    trans->print (cout) << "\n";
}

