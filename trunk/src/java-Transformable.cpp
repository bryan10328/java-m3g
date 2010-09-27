#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1initialize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Transformable: initiazlize is called.\n";
    Transformable* trans;
    __TRY__;
    trans = new Transformable ();
    __CATCH_VOID__;
    setNativePointer (env, obj, trans);
    jobject entity = env->NewGlobalRef (obj);
    trans->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Transformable: finalize is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, obj);
    __TRY__;
    delete trans;
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_getCompositeTransform
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1getCompositeTransform
  (JNIEnv* env, jobject obj, jobject transform)
{
    cout << "Java-Transformable: getCompositingTransform is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, obj);
    Transform*     t     = (Transform*)getNativePointer (env, transform);
    __TRY__;
    trans->getCompositeTransform (t);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_getOrientation
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1getOrientation
  (JNIEnv* env, jobject obj, jfloatArray angleAxis)
{
    cout << "Java-Transformable: getOrientation is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, obj);
    float* angle_axis = env->GetFloatArrayElements (angleAxis, 0);
    __TRY__;
    trans->getOrientation (angle_axis);
    __CATCH_VOID__;
    env->ReleaseFloatArrayElements (angleAxis, angle_axis, 0);
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_getScale
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1getScale
  (JNIEnv* env, jobject obj, jfloatArray xyz)
{
    cout << "Java-Transformable: getScale is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, obj);
    float* scale = env->GetFloatArrayElements (xyz, 0);
    __TRY__;
    trans->getScale (scale);
    __CATCH_VOID__;
    env->ReleaseFloatArrayElements (xyz, scale, 0);
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_getTransform
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1getTransform
  (JNIEnv* env, jobject obj, jobject transform)
{
    cout << "Java-Transformable: getTransform is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, obj);
    Transform*     t     = (Transform*)getNativePointer (env, transform);
    __TRY__;
    trans->getTransform (t);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_getTranslation
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1getTranslation
  (JNIEnv* env, jobject obj, jfloatArray xyz)
{
    cout << "Java-Transformable: getTranslation is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, obj);
    float* translation = env->GetFloatArrayElements (xyz, 0);
    __TRY__;
    trans->getTranslation (translation);
    __CATCH_VOID__;
    env->ReleaseFloatArrayElements (xyz, translation, 0);
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_postRotate
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1postRotate
  (JNIEnv* env, jobject obj, jfloat angle, jfloat ax, jfloat ay, jfloat az)
{
    cout << "Java-Transformable: postRotate is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, obj);
    __TRY__;
    trans->postRotate (angle, ax, ay, az);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_preRotate
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1preRotate
  (JNIEnv* env, jobject obj, jfloat angle, jfloat ax, jfloat ay, jfloat az)
{
    cout << "Java-Transformable: preRotate is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, obj);
    __TRY__;
    trans->postRotate (angle, ax, ay, az);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_scale
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1scale
  (JNIEnv* env, jobject obj, jfloat sx, jfloat sy, jfloat sz)
{
    cout << "Java-Transformable: scale is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, obj);
    __TRY__;
    trans->scale (sx, sy, sz);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_setOrientation
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1setOrientation
  (JNIEnv* env, jobject obj, jfloat angle, jfloat ax, jfloat ay, jfloat az)
{
    cout << "Java-Transformable: setOrientation is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, obj);
    __TRY__;
    trans->setOrientation (angle, ax, ay, az);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_setScale
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1setScale
  (JNIEnv* env, jobject obj, jfloat sx, jfloat sy, jfloat sz)
{
    cout << "Java-Transformable: setScale is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, obj);
    __TRY__;
    trans->setScale (sx, sy, sz);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_setTransform
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1setTransform
  (JNIEnv* env, jobject obj, jobject transform)
{
    cout << "Java-Transformable: setTransform is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, obj);
    Transform*     t     = (Transform*)getNativePointer (env, transform);
    __TRY__;
    trans->setTransform (*t);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_setTranslation
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1setTranslation
  (JNIEnv* env, jobject obj, jfloat tx, jfloat ty, jfloat tz)
{
    cout << "Java-Transformable: setTranslation is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, obj);
    __TRY__;
    trans->setTranslation (tx, ty, tz);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_translate
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1translate
  (JNIEnv* env, jobject obj, jfloat tx, jfloat ty, jfloat tz)
{
    cout << "Java-Transformable: translation is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, obj);
    __TRY__;
    trans->translate (tx, ty, tz);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Transformable: print is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, obj);
    __TRY__;
    trans->print (cout) << "\n";
    __CATCH_VOID__;
}

