#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1initialize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-CompositingMode: initilize is called.\n";
    CompositingMode* cmode = NULL;
    __TRY__;
    cmode = new CompositingMode ();
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer  (env, thiz, cmode);
    bindJavaReference (env, thiz, cmode);
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
    releaseJavaReference (env, cmode);
    addUsedObject (cmode);
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
    float th = 0;
    __TRY__;
    th = cmode->getAlphaThreshold ();
    __CATCH__;
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
    int func = 0;
    __TRY__;
    func = cmode->getBlending ();
    __CATCH__;
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
    float factor = 0;
    __TRY__;
    factor = cmode->getDepthOffsetFactor ();
    __CATCH__;
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
    float units = 0;
    __TRY__;
    units = cmode->getDepthOffsetUnits ();
    __CATCH__;
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
    bool enable = false;
    __TRY__;
    enable = cmode->isAlphaWriteEnabled ();
    __CATCH__;
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
    bool enable = false;
    __TRY__;
    enable = cmode->isColorWriteEnabled ();
    __CATCH__;
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
    bool enable = false;
    __TRY__;
    enable = cmode->isDepthTestEnabled ();
    __CATCH__;
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
    bool enabled = false;
    __TRY__;
    enabled = cmode->isDepthWriteEnabled ();
    __CATCH__;
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
    __CATCH__;
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
    __CATCH__;
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
    __CATCH__;
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
    __CATCH__;
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
    __CATCH__;
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
    __CATCH__;
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
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-CompositingMode: print is called.\n";
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    cmode->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}


void Java_new_CompositingMode     (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java CompositingMode.\n";
    CompositingMode* cmode     = dynamic_cast<CompositingMode*>(obj);
    jobject          cmode_obj = allocJavaObject (env, "org/karlsland/m3g/CompositingMode");
    setNativePointer  (env, cmode_obj, cmode);
    bindJavaReference (env, cmode_obj, cmode);

    Java_build_Object3D        (env, cmode_obj, cmode);
    Java_build_CompositingMode (env, cmode_obj, cmode);

    env->DeleteLocalRef (cmode_obj);
}


void Java_build_CompositingMode (JNIEnv* env, jobject cmode_obj, m3g::CompositingMode* cmode)
{
    // nothing to do
}

