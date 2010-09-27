#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1initialize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-RayIntersection: initialize is called.\n";
    RayIntersection* ri;
    __TRY__;
    ri = new RayIntersection ();
    __CATCH_VOID__;
    setNativePointer (env, obj, ri);
    jobject entity = env->NewGlobalRef (obj);
    ri->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-RayIntersection: finalize is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, obj);
    __TRY__;
    delete ri;
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getDistance
  (JNIEnv* env, jobject obj)
{
    cout << "Java-RayIntersection: getDistance is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, obj);
    float distance;
    __TRY__;
    distance = ri->getDistance ();
    __CATCH_FLOAT__;
    return distance;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getIntersected
 * Signature: ()Lorg/karlsland/m3g/Node;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getIntersected
  (JNIEnv* env, jobject obj)
{
    cout << "Java-RayIntersection: getIntersected is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, obj);
    Node* node;
    __TRY__;
    node = ri->getIntersected ();
    __CATCH_JOBJECT__;
    return (node != NULL) ? (jobject)node->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getNormalX
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getNormalX
  (JNIEnv* env, jobject obj)
{
    cout << "Java-RayIntersection: getNormalX is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, obj);
    float nx;
    __TRY__;
    nx = ri->getNormalX ();
    __CATCH_FLOAT__;
    return nx;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getNormalY
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getNormalY
  (JNIEnv* env, jobject obj)
{
    cout << "Java-RayIntersection: getNormalY is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, obj);
    float ny;
    __TRY__;
    ny = ri->getNormalY ();
    __CATCH_FLOAT__;
    return ny;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getNormalZ
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getNormalZ
  (JNIEnv* env, jobject obj)
{
    cout << "Java-RayIntersection: getNormalZ is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, obj);
    float nz;
    __TRY__;
    nz = ri->getNormalZ ();
    __CATCH_FLOAT__;
    return nz;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getRay
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getRay
  (JNIEnv* env, jobject obj, jfloatArray ray)
{
    cout << "Java-RayIntersection: getRay is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, obj);
    float*r = env->GetFloatArrayElements (ray, 0);
    __TRY__;
    ri->getRay (r);
    __CATCH_VOID__;
    env->ReleaseFloatArrayElements (ray, r, 0);
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getSubmeshIndex
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getSubmeshIndex
  (JNIEnv* env, jobject obj)
{
    cout << "Java-RayIntersection: getSubmeshIndex is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, obj);
    int index;
    __TRY__;
    index = ri->getSubmeshIndex ();
    __CATCH_INT__;
    return index;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getTextureS
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getTextureS
  (JNIEnv* env, jobject obj, jint index)
{
    cout << "Java-RayIntersection: getTextureS is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, obj);
    float s;
    __TRY__;
    s = ri->getTextureS (index);
    __CATCH_FLOAT__;
    return s;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_getTextureT
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1getTextureT
  (JNIEnv* env, jobject obj, jint index)
{
    cout << "Java-RayIntersection: getTextureT is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, obj);
    float t;
    __TRY__;
    t = ri->getTextureT (index);
    __CATCH_FLOAT__;
    return t;
}

/*
 * Class:     org_karlsland_m3g_RayIntersection
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_RayIntersection_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-RayIntersection: print is called.\n";
    RayIntersection* ri = (RayIntersection*)getNativePointer (env, obj);
    __TRY__;
    ri->print (cout) << "\n";
    __CATCH_VOID__;
}
