#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1initialize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-PolygonMode: initialize is called.";
    PolygonMode* pmode = new PolygonMode ();
    setNativePointer (env, obj, pmode);
    jobject entity = env->NewGlobalRef (obj);
    pmode->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-PolygonMode: finalize is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, obj);
    delete pmode;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_getCulling
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1getCulling
  (JNIEnv* env, jobject obj)
{
    cout << "Java-PolygonMode: getCulling is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, obj);
    int culling = pmode->getCulling ();
    cout << "culling = " << culling << "\n";
    return culling;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_getShading
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1getShading
  (JNIEnv* env, jobject obj)
{
    cout << "Java-PolygonMode: getShading is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, obj);
    int shading = pmode->getShading ();
    return shading;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_getWinding
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1getWinding
  (JNIEnv* env, jobject obj)
{
    cout << "Java-PolygonMode: getWinding is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, obj);
    int winding = pmode->getWinding ();
    return winding;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_isLocalCameraLightingEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1isLocalCameraLightingEnabled
  (JNIEnv* env, jobject obj)
{
    cout << "Java-PolygonMode: isLocalCameraLightingEnabled is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, obj);
    bool enabled = pmode->isLocalCameraLightingEnabled ();
    return enabled;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_isPerspectiveCorrectionEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1isPerspectiveCorrectionEnabled
  (JNIEnv* env, jobject obj)
{
    cout << "Java-PolygonMode: isPerspectiveCorrectionEnabled is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, obj);
    bool enabled = pmode->isPerspectiveCorrectionEnabled ();
    return enabled;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_isTwoSidedLightingEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1isTwoSidedLightingEnabled
  (JNIEnv* env, jobject obj)
{
    cout << "Java-PolygonMode: isTwoSidedLightingEnabled is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, obj);
    bool enabled = pmode->isTwoSidedLightingEnabled ();
    return enabled;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setCulling
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setCulling
  (JNIEnv* env, jobject obj, jint culling)
{
    cout << "Java-PolygonMode: setCulling is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, obj);
    pmode->setCulling (culling);
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setLocalCameraLightingEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setLocalCameraLightingEnable
  (JNIEnv* env, jobject obj, jboolean enable)
{
    cout << "Java-PolygonMode: setLocalCameraLighting is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, obj);
    pmode->setLocalCameraLightingEnable (enable);
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setPerspectiveCorrectionEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setPerspectiveCorrectionEnable
  (JNIEnv* env, jobject obj, jboolean enable)
{
    cout << "Java-PolygonMode: setPerspectiveCorrectionEnable is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, obj);
    pmode->setPerspectiveCorrectionEnable (enable);
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setShading
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setShading
  (JNIEnv* env, jobject obj, jint shading)
{
    cout << "Java-PolygonMode: setShading is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, obj);
    pmode->setShading (shading);
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setTwoSidedLightingEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setTwoSidedLightingEnable
  (JNIEnv* env, jobject obj, jboolean enable)
{
    cout << "Java-PolygonMode: setTwoSidedLightingEnable is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, obj);
    pmode->setTwoSidedLightingEnable (enable);
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setWinding
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setWinding
  (JNIEnv* env, jobject obj, jint winding)
{
    cout << "Java-PolygonMode: setWinding is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, obj);
    pmode->setWinding (winding);
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-PolygonMode: print is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, obj);
    pmode->print (cout) << "\n";
}
