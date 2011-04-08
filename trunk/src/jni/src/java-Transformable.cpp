#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1initialize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Transformable: initiazlize is called.\n";
    Transformable* trans = NULL;
    __TRY__;
    trans = new Transformable ();
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer (env, thiz, trans);
    jobject entity = env->NewWeakGlobalRef (thiz);
    trans->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Transformable: finalize is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, thiz);
    env->DeleteWeakGlobalRef ((jobject)trans->getExportedEntity());
    addUsedObject (trans);
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_getCompositeTransform
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1getCompositeTransform
  (JNIEnv* env, jobject thiz, jobject transform)
{
    cout << "Java-Transformable: getCompositingTransform is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, thiz);
    Transform*     t     = (Transform*)getNativePointer (env, transform);
    __TRY__;
    trans->getCompositeTransform (t);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_getOrientation
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1getOrientation
  (JNIEnv* env, jobject thiz, jfloatArray angleAxis)
{
    cout << "Java-Transformable: getOrientation is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, thiz);
    float* angle_axis = env->GetFloatArrayElements (angleAxis, 0);
    __TRY__;
    trans->getOrientation (angle_axis);
    __CATCH__;
    env->ReleaseFloatArrayElements (angleAxis, angle_axis, 0);
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_getScale
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1getScale
  (JNIEnv* env, jobject thiz, jfloatArray xyz)
{
    cout << "Java-Transformable: getScale is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, thiz);
    float* scale = env->GetFloatArrayElements (xyz, 0);
    __TRY__;
    trans->getScale (scale);
    __CATCH__;
    env->ReleaseFloatArrayElements (xyz, scale, 0);
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_getTransform
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1getTransform
  (JNIEnv* env, jobject thiz, jobject transform)
{
    cout << "Java-Transformable: getTransform is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, thiz);
    Transform*     t     = (Transform*)getNativePointer (env, transform);
    __TRY__;
    trans->getTransform (t);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_getTranslation
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1getTranslation
  (JNIEnv* env, jobject thiz, jfloatArray xyz)
{
    cout << "Java-Transformable: getTranslation is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, thiz);
    float* translation = env->GetFloatArrayElements (xyz, 0);
    __TRY__;
    trans->getTranslation (translation);
    __CATCH__;
    env->ReleaseFloatArrayElements (xyz, translation, 0);
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_postRotate
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1postRotate
  (JNIEnv* env, jobject thiz, jfloat angle, jfloat ax, jfloat ay, jfloat az)
{
    cout << "Java-Transformable: postRotate is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, thiz);
    __TRY__;
    trans->postRotate (angle, ax, ay, az);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_preRotate
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1preRotate
  (JNIEnv* env, jobject thiz, jfloat angle, jfloat ax, jfloat ay, jfloat az)
{
    cout << "Java-Transformable: preRotate is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, thiz);
    __TRY__;
    trans->postRotate (angle, ax, ay, az);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_scale
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1scale
  (JNIEnv* env, jobject thiz, jfloat sx, jfloat sy, jfloat sz)
{
    cout << "Java-Transformable: scale is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, thiz);
    __TRY__;
    trans->scale (sx, sy, sz);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_setOrientation
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1setOrientation
  (JNIEnv* env, jobject thiz, jfloat angle, jfloat ax, jfloat ay, jfloat az)
{
    cout << "Java-Transformable: setOrientation is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, thiz);
    __TRY__;
    trans->setOrientation (angle, ax, ay, az);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_setScale
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1setScale
  (JNIEnv* env, jobject thiz, jfloat sx, jfloat sy, jfloat sz)
{
    cout << "Java-Transformable: setScale is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, thiz);
    __TRY__;
    trans->setScale (sx, sy, sz);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_setTransform
 * Signature: (Lorg/karlsland/m3g/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1setTransform
  (JNIEnv* env, jobject thiz, jobject transform)
{
    cout << "Java-Transformable: setTransform is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, thiz);
    Transform*     t     = (Transform*)getNativePointer (env, transform);
    __TRY__;
    trans->setTransform (t);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_setTranslation
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1setTranslation
  (JNIEnv* env, jobject thiz, jfloat tx, jfloat ty, jfloat tz)
{
    cout << "Java-Transformable: setTranslation is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, thiz);
    __TRY__;
    trans->setTranslation (tx, ty, tz);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_translate
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Transformable_jni_1translate
  (JNIEnv* env, jobject thiz, jfloat tx, jfloat ty, jfloat tz)
{
    cout << "Java-Transformable: translation is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, thiz);
    __TRY__;
    trans->translate (tx, ty, tz);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Transformable
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_Transformable_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Transformable: print is called.\n";
    Transformable* trans = (Transformable*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    trans->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}

void Java_build_Transformable (JNIEnv* env, jobject trans_obj, m3g::Transformable* trans)
{
    // nothing to do    
}
