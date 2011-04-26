#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1initialize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-RayIntersection: initialize is called.\n";
    RayIntersection* ri = NULL;
    __TRY__;
    ri = new RayIntersection ();
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer  (env, thiz, ri);
    bindJavaReference (env, thiz, ri);
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-RayIntersection: finalize is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, thiz);
    releaseJavaReference (env, ri);
    addUsedObject (ri);
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getDistance
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-RayIntersection: getDistance is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, thiz);
    float distance = 0;
    __TRY__;
    distance = ri->getDistance ();
    __CATCH__;
    return distance;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getIntersected
 * Signature: ()Lorg/karlsland/m3g/Node;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getIntersected
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-RayIntersection: getIntersected is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, thiz);
    Node* node = NULL;
    __TRY__;
    node = ri->getIntersected ();
    __CATCH__;
    return getJavaReference (env, node);
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getNormalX
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getNormalX
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-RayIntersection: getNormalX is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, thiz);
    float nx = 0;
    __TRY__;
    nx = ri->getNormalX ();
    __CATCH__;
    return nx;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getNormalY
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getNormalY
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-RayIntersection: getNormalY is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, thiz);
    float ny = 0;
    __TRY__;
    ny = ri->getNormalY ();
    __CATCH__;
    return ny;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getNormalZ
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getNormalZ
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-RayIntersection: getNormalZ is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, thiz);
    float nz = 0;
    __TRY__;
    nz = ri->getNormalZ ();
    __CATCH__;
    return nz;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getRay
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getRay
  (JNIEnv* env, jobject thiz, jfloatArray ray_array)
{
    cout << "Java-RayIntersection: getRay is called.\n";
    RayIntersection* ri  = (RayIntersection*)getNativePointer (env, thiz);
    float*           ray = getFloatArrayPointer (env, ray_array);
    __TRY__;
    ri->getRay (ray);
    __CATCH__;
    releaseFloatArrayPointer (env, ray_array, ray);
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getSubmeshIndex
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getSubmeshIndex
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-RayIntersection: getSubmeshIndex is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, thiz);
    int index = 0;
    __TRY__;
    index = ri->getSubmeshIndex ();
    __CATCH__;
    return index;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getTextureS
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getTextureS
  (JNIEnv* env, jobject thiz, jint index)
{
    cout << "Java-RayIntersection: getTextureS is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, thiz);
    float s = 0;
    __TRY__;
    s = ri->getTextureS (index);
    __CATCH__;
    return s;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getTextureT
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getTextureT
  (JNIEnv* env, jobject thiz, jint index)
{
    cout << "Java-RayIntersection: getTextureT is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, thiz);
    float t = 0;
    __TRY__;
    t = ri->getTextureT (index);
    __CATCH__;
    return t;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-RayIntersection: print is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    ri->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}


void Java_build_RayIntersection (JNIEnv* env, jobject ri_obj, m3g::RayIntersection* ri)
{
    // nothing to do
}
