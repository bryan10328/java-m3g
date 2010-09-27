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
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-PolygonMode: initialize is called.";
    PolygonMode* pmode;
    __TRY__;
    pmode = new PolygonMode ();
    __CATCH_VOID__;
    setNativePointer (env, thiz, pmode);
    jobject entity = env->NewGlobalRef (thiz);
    pmode->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-PolygonMode: finalize is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    __TRY__;
    delete pmode;
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_getCulling
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1getCulling
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-PolygonMode: getCulling is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    int culling;
    __TRY__;
    culling = pmode->getCulling ();
    __CATCH_INT__;
    return culling;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_getShading
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1getShading
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-PolygonMode: getShading is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    int shading;
    __TRY__;
    shading = pmode->getShading ();
    __CATCH_INT__;
    return shading;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_getWinding
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1getWinding
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-PolygonMode: getWinding is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    int winding;
    __TRY__;
    winding = pmode->getWinding ();
    __CATCH_INT__;
    return winding;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_isLocalCameraLightingEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1isLocalCameraLightingEnabled
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-PolygonMode: isLocalCameraLightingEnabled is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    bool enabled;
    __TRY__;
    enabled = pmode->isLocalCameraLightingEnabled ();
    __CATCH_BOOL__;
    return enabled;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_isPerspectiveCorrectionEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1isPerspectiveCorrectionEnabled
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-PolygonMode: isPerspectiveCorrectionEnabled is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    bool enabled;
    __TRY__;
    enabled = pmode->isPerspectiveCorrectionEnabled ();
    __CATCH_BOOL__;
    return enabled;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_isTwoSidedLightingEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1isTwoSidedLightingEnabled
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-PolygonMode: isTwoSidedLightingEnabled is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    bool enabled;
    __TRY__;
    enabled = pmode->isTwoSidedLightingEnabled ();
    __CATCH_BOOL__;
    return enabled;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setCulling
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setCulling
  (JNIEnv* env, jobject thiz, jint culling)
{
    cout << "Java-PolygonMode: setCulling is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    __TRY__;
    pmode->setCulling (culling);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setLocalCameraLightingEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setLocalCameraLightingEnable
  (JNIEnv* env, jobject thiz, jboolean enable)
{
    cout << "Java-PolygonMode: setLocalCameraLighting is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    __TRY__;
    pmode->setLocalCameraLightingEnable (enable);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setPerspectiveCorrectionEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setPerspectiveCorrectionEnable
  (JNIEnv* env, jobject thiz, jboolean enable)
{
    cout << "Java-PolygonMode: setPerspectiveCorrectionEnable is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    __TRY__;
    pmode->setPerspectiveCorrectionEnable (enable);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setShading
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setShading
  (JNIEnv* env, jobject thiz, jint shading)
{
    cout << "Java-PolygonMode: setShading is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    __TRY__;
    pmode->setShading (shading);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setTwoSidedLightingEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setTwoSidedLightingEnable
  (JNIEnv* env, jobject thiz, jboolean enable)
{
    cout << "Java-PolygonMode: setTwoSidedLightingEnable is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    __TRY__;
    pmode->setTwoSidedLightingEnable (enable);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setWinding
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setWinding
  (JNIEnv* env, jobject thiz, jint winding)
{
    cout << "Java-PolygonMode: setWinding is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    __TRY__;
    pmode->setWinding (winding);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-PolygonMode: print is called.";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    __TRY__;
    pmode->print (cout) << "\n";
    __CATCH_VOID__;
}
