#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_initialzie
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1initialzie
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-CompositingMode: initilize is called.\n";
    CompositingMode* cmode;
    __TRY__;
    cmode = new CompositingMode ();
    __CATCH_VOID__;
    setNativePointer (env, thiz, cmode);
    jobject entity = env->NewWeakGlobalRef (thiz);
    cmode->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-CompositingMode: finalize is called.\n";
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, thiz);
    env->DeleteWeakGlobalRef ((jobject)cmode->getExportedEntity());
    __TRY__;
    delete cmode;
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_getAlphaThreshold
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1getAlphaThreshold
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-CompositingMode: getAlphaThreshold is called.\n";
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, thiz);
    float th;
    __TRY__;
    th = cmode->getAlphaThreshold ();
    __CATCH_FLOAT__;
    return th;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_getBlending
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1getBlending
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-CompositingMode: getBlending is called.\n";
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, thiz);
    int func;
    __TRY__;
    func = cmode->getBlending ();
    __CATCH_INT__;
    return func;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_getDepthOffsetFactor
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1getDepthOffsetFactor
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-CompositingMode: getDepthOffsetFactor is called.\n";
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, thiz);
    float factor;
    __TRY__;
    factor = cmode->getDepthOffsetFactor ();
    __CATCH_FLOAT__;
    return factor;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_getDepthOffsetUnits
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1getDepthOffsetUnits
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-CompositingMode: getDepthOffsetUnits is called.\n";
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, thiz);
    float units;
    __TRY__;
    units = cmode->getDepthOffsetUnits ();
    __CATCH_FLOAT__;
    return units;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_isAlphaWriteEnable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1isAlphaWriteEnable
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-CompositingMode: isAlphaWriteEnable is called.\n";
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, thiz);
    bool enable;
    __TRY__;
    enable = cmode->isAlphaWriteEnabled ();
    __CATCH_BOOL__;
    return enable;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_isColorWriteEnable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1isColorWriteEnable
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-CompositingMode: isColorWriteEnable is called.\n";
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, thiz);
    bool enable;
    __TRY__;
    enable = cmode->isColorWriteEnabled ();
    __CATCH_BOOL__;
    return enable;
}


/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_isDepthTestEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1isDepthTestEnabled
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-CompositingMode: isDepthTestEnable is called.\n";
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, thiz);
    bool enable;
    __TRY__;
    enable = cmode->isDepthTestEnabled ();
    __CATCH_BOOL__;
    return enable;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_isDepthWriteEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1isDepthWriteEnabled
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-CompositingMode: isDepthWriteEnabled is called.\n";
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, thiz);
    bool enabled;
    __TRY__;
    enabled = cmode->isDepthWriteEnabled ();
    __CATCH_BOOL__;
    return enabled;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_setAlphaThreshold
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1setAlphaThreshold
  (JNIEnv* env, jobject thiz, jfloat threshold)
{
    cout << "Java-CompositingMode: setAlphaThreshold is called.\n";
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, thiz);
    __TRY__;
    cmode->setAlphaThreshold (threshold);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_setAlphaWriteEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1setAlphaWriteEnable
  (JNIEnv* env, jobject thiz, jboolean enable)
{
    cout << "Java-CompositingMode: setAlphaWriteEnable is called.\n";
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, thiz);
    __TRY__;
    cmode->setAlphaWriteEnable (enable);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_setBlending
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1setBlending
  (JNIEnv* env, jobject thiz, jint func)
{
    cout << "Java-CompositingMode: setBlending is called.\n";
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, thiz);
    __TRY__;
    cmode->setBlending (func);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_setColorWriteEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1setColorWriteEnable
  (JNIEnv* env, jobject thiz, jboolean enable)
{
    cout << "Java-CompositingMode: setColorWriteEnable is called.\n";
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, thiz);
    __TRY__;
    cmode->setColorWriteEnable (enable);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_setDepthOffset
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1setDepthOffset
  (JNIEnv* env, jobject thiz, jfloat factor, jfloat units)
{
    cout << "Java-CompositingMode: setDepthOffset is called.\n";
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, thiz);
    __TRY__;
    cmode->setDepthOffset (factor, units);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_setDepthTestEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1setDepthTestEnable
  (JNIEnv* env, jobject thiz, jboolean enable)
{
    cout << "Java-CompositingMode: setDepthEnable is called.\n";
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, thiz);
    __TRY__;
    cmode->setDepthTestEnable (enable);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_setDepthWriteEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1setDepthWriteEnable
  (JNIEnv* env, jobject thiz, jboolean enable)
{
    cout << "Java-CompositingMode: setDepthWriteEnable is called.\n";
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, thiz);
    __TRY__;
    cmode->setDepthWriteEnable (enable);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-CompositingMode: print is called.\n";
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, thiz);
    __TRY__;
    cmode->print (cout) << "\n";
    __CATCH_VOID__;
}



void Java_new_CompositingMode     (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java CompositingMode.\n";
    CompositingMode* cmode     = dynamic_cast<CompositingMode*>(obj);
    jobject          cmode_obj = allocJavaObject (env, "org/karlsland/m3g/CompositingMode", cmode);

    Java_build_Object3D        (env, cmode_obj, cmode);
    Java_build_CompositingMode (env, cmode_obj, cmode);
}


void Java_build_CompositingMode (JNIEnv* env, jobject cmode_obj, m3g::CompositingMode* cmode)
{
    // nothing to do
}

