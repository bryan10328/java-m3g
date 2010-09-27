#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Material
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Material_jni_1initialize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Material: initilize is called.\n";
    Material* mat;
    __TRY__;
    mat = new Material ();
    __CATCH_VOID__;
    setNativePointer (env, obj, mat);
    jobject entity = env->NewGlobalRef (obj);
    mat->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Material
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Material_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Material: finalize is called.\n";
    Material* mat = (Material*)getNativePointer (env, obj);
    __TRY__;
    delete mat;
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Material
 * Method:    jni_getColor
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Material_jni_1getColor
  (JNIEnv* env, jobject obj, jint target)
{
    cout << "Java-Material: getColor is called.\n";
    Material* mat = (Material*)getNativePointer (env, obj);
    int color;
    __TRY__;
    color = mat->getColor (target);
    __CATCH_INT__;
    return color;
}

/*
 * Class:     org_karlsland_m3g_Material
 * Method:    jni_getShininess
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Material_jni_1getShininess
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Material: getShininess is called.\n";
    Material* mat = (Material*)getNativePointer (env, obj);
    float shine;
    __TRY__;
    shine = mat->getShininess ();
    __CATCH_FLOAT__;
    return shine;
}

/*
 * Class:     org_karlsland_m3g_Material
 * Method:    jni_isVertexColorTrackingEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Material_jni_1isVertexColorTrackingEnabled
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Material: isVertexColorTrackingEnabled is called.\n";
    Material* mat = (Material*)getNativePointer (env, obj);
    bool enabled;
    __TRY__;
    enabled = mat->isVertexColorTrackingEnabled ();
    __CATCH_BOOL__;
    return enabled;
}

/*
 * Class:     org_karlsland_m3g_Material
 * Method:    jni_setColor
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Material_jni_1setColor
  (JNIEnv* env, jobject obj, jint target, jint ARGB)
{
    cout << "Java-Material: setColor is called.\n";
    Material* mat = (Material*)getNativePointer (env, obj);
    __TRY__;
    mat->setColor (target, ARGB);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Material
 * Method:    jni_setShininess
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Material_jni_1setShininess
  (JNIEnv* env, jobject obj, jfloat shininess)
{
    cout << "Java-Material: setShininess is called.\n";
    Material* mat = (Material*)getNativePointer (env, obj);
    __TRY__;
    mat->setShininess (shininess);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Material
 * Method:    jni_setVertexColorTrackingEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Material_jni_1setVertexColorTrackingEnable
  (JNIEnv* env, jobject obj, jboolean enable)
{
    cout << "Java-Material: setVerteColorTrackingEnable is called.\n";
    Material* mat = (Material*)getNativePointer (env, obj);
    __TRY__;
    mat->setVertexColorTrackingEnable (enable);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Material
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Material_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Material: print is called.\n";
    Material* mat = (Material*)getNativePointer (env, obj);
    __TRY__;
    mat->print (cout) << "\n";
    __CATCH_VOID__;
}
