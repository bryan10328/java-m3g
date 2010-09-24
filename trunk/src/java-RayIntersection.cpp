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
    RayIntersection* ri = new RayIntersection ();
    setEntity (env, obj, ri);
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
    cout << "Java-RayIntersection:  is called.\n";
    RayIntersection* ri = (RayIntersection*)getEntity (env, obj);
    delete ri;
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
    RayIntersection* ri = (RayIntersection*)getEntity (env, obj);
    float distance = ri->getDistance ();
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
    RayIntersection* ri = (RayIntersection*)getEntity (env, obj);
    Node* node = ri->getIntersected ();
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
    RayIntersection* ri = (RayIntersection*)getEntity (env, obj);
    float nx = ri->getNormalX ();
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
    RayIntersection* ri = (RayIntersection*)getEntity (env, obj);
    float ny = ri->getNormalY ();
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
    RayIntersection* ri = (RayIntersection*)getEntity (env, obj);
    float nz = ri->getNormalZ ();
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
    RayIntersection* ri = (RayIntersection*)getEntity (env, obj);
    float*r = env->GetFloatArrayElements (ray, 0);
    ri->getRay (r);
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
    RayIntersection* ri = (RayIntersection*)getEntity (env, obj);
    int index = ri->getSubmeshIndex ();
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
    RayIntersection* ri = (RayIntersection*)getEntity (env, obj);
    float s = ri->getTextureS (index);
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
    RayIntersection* ri = (RayIntersection*)getEntity (env, obj);
    float t = ri->getTextureT (index);
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
    RayIntersection* ri = (RayIntersection*)getEntity (env, obj);
    ri->print (cout) << "\n";
}
