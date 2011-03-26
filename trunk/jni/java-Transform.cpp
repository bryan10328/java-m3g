#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1initialize__
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Transform: Transform initilize1 is called.\n";
    Transform* tra = NULL;
    __TRY__;
    tra = new Transform ();
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer (env, thiz, tra);
    jobject entity = env->NewWeakGlobalRef (thiz);
    tra->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1initialize__Lorg_karlsland_m3g_Transform_2
  (JNIEnv* env, jobject thiz, jobject transform)
{
    cout << "Java-Transform: Transform initilize2 is called.\n";
    Transform* t = (Transform*)getNativePointer (env, transform);
    Transform* tra;
    __TRY__;
    tra = new Transform (*t);
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer (env, thiz, tra);
    jobject entity = env->NewWeakGlobalRef (thiz);
    tra->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Transform: finalize is called.\n";
    Transform* trans = (Transform*)getNativePointer (env, thiz);
    env->DeleteWeakGlobalRef ((jobject)trans->getExportedEntity());
    __TRY__;
    delete trans;
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_get
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1get
  (JNIEnv* env, jobject thiz, jfloatArray matrix_array)
{
    cout << "Java-Transform: get is called.\n";
    Transform* trans  = (Transform*)getNativePointer (env, thiz);
    float*     matrix = getFloatArrayPointer (env, matrix_array);
    __TRY__;
    trans->get (matrix);
    __CATCH__;
    releaseFloatArrayPointer (env, matrix_array, matrix);
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_invert
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1invert
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Transform: invert is called.\n";
    Transform* trans = (Transform*)getNativePointer (env, thiz);
    __TRY__;
    trans->invert ();
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_postMultiply
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1postMultiply
  (JNIEnv* env, jobject thiz, jobject transform)
{
    cout << "Java-Transform: postMultiply is called.\n";
    Transform* trans1 = (Transform*)getNativePointer (env, thiz);
    Transform* trans2 = (Transform*)getNativePointer (env, transform);
    __TRY__;
    trans1->postMultiply (*trans2);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_postRotate
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1postRotate
  (JNIEnv* env, jobject thiz, jfloat angle, jfloat ax, jfloat ay, jfloat az)
{
    cout << "Java-Transform: postRotate is called.\n";
    Transform* trans = (Transform*)getNativePointer (env, thiz);
    __TRY__;
    trans->postRotate  (angle, ax, ay, az);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_postRotateQuat
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1postRotateQuat
  (JNIEnv* env, jobject thiz, jfloat qx, jfloat qy, jfloat qz, jfloat qw)
{
    cout << "Java-Transform: postRotateQuat is called.\n";
    Transform* trans = (Transform*)getNativePointer (env, thiz);
    __TRY__;
    trans->postRotateQuat (qx, qy, qz, qw);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_postScale
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1postScale
  (JNIEnv* env, jobject thiz, jfloat sx, jfloat sy, jfloat sz)
{
    cout << "Java-Transform: postScale is called.\n";
    Transform* trans = (Transform*)getNativePointer (env, thiz);
    __TRY__;
    trans->postScale (sx, sy, sz);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_postTranslate
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1postTranslate
  (JNIEnv* env, jobject thiz, jfloat tx, jfloat ty, jfloat tz)
{
    cout << "Java-Transform: postTranslate is called.\n";
    Transform* trans = (Transform*)getNativePointer (env, thiz);
    __TRY__;
    trans->postTranslate (tx, ty, tz);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_set
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1set___3F
  (JNIEnv* env, jobject thiz, jfloatArray matrix_array)
{
    cout << "Java-Transform: set is called.\n";
    Transform* trans  = (Transform*)getNativePointer (env, thiz);
    float*     matrix = getFloatArrayPointer (env, matrix_array);
    __TRY__;
    trans->set (matrix);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_set
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1set__Lorg_karlsland_m3g_Transform_2
  (JNIEnv* env, jobject thiz, jobject transform)
{
    Transform* trans = (Transform*)getNativePointer (env, thiz);
    Transform* t     = (Transform*)getNativePointer (env, transform);
    __TRY__;
    trans->set (t);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_setIdentity
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1setIdentity
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Transform: setIdentity is called.\n";
    Transform* trans = (Transform*)getNativePointer (env, thiz);
    __TRY__;
    trans->setIdentity ();
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_transform
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1transform___3F
  (JNIEnv* env, jobject thiz, jfloatArray vectors_array)
{
    cout << "Java-Transform: transform is called.\n";
    Transform* trans   = (Transform*)getNativePointer (env, thiz);
    float*     vectors = getFloatArrayPointer (env, vectors_array);
    int        len     = getFloatArrayLength (env, vectors_array);
    __TRY__;
    trans->transform (len, vectors);
    __CATCH__;
    releaseFloatArrayPointer (env, vectors_array, vectors);
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_transform
 * Signature: (Lorg/karlsland/m3g/VertexArray;[FZ)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1transform__Lorg_karlsland_m3g_VertexArray_2_3FZ
  (JNIEnv* env, jobject thiz, jobject in, jfloatArray out_array, jboolean w)
{
    cout << "Java-Transform: transform vertex-array is called.\n";
    Transform*   trans = (Transform*)getNativePointer (env, thiz);
    VertexArray* varry = (VertexArray*)getNativePointer (env, in);
    float*       out   = getFloatArrayPointer (env, out_array);
    __TRY__;
    trans->transform (varry, out, w);
    __CATCH__;
    releaseFloatArrayPointer (env, out_array, out);
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_transpose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transform_jni_1transpose
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Transform: transpose is called.\n";
    Transform* trans = (Transform*)getNativePointer (env, thiz);
    __TRY__;
    trans->transpose ();
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transform
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_Transform_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Transform: print is called.\n";
    Transform* trans = (Transform*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    trans->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}



void Java_build_Transform (JNIEnv* env, jobject trans_obj, m3g::Transform* trans)
{
    // nothing to do
}
