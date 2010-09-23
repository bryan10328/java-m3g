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
  (JNIEnv* env, jobject obj)
{
    cout << "Java-CompositingMode: initilize is called.";
    CompositingMode* cmode = new CompositingMode ();
    setEntity (env, obj, cmode);
    jobject entity = env->NewGlobalRef (obj);
    cmode->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-CompositingMode: finalize is called.";
    CompositingMode* cmode = (CompositingMode*)getEntity (env, obj);
    delete cmode;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_getAlphaThreshold
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1getAlphaThreshold
  (JNIEnv* env, jobject obj)
{
    cout << "Java-CompositingMode: getAlphaThreshold is called.";
    CompositingMode* cmode = (CompositingMode*)getEntity (env, obj);
    float th = cmode->getAlphaThreshold ();
    return th;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_getBlending
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1getBlending
  (JNIEnv* env, jobject obj)
{
    cout << "Java-CompositingMode: getBlending is called.";
    CompositingMode* cmode = (CompositingMode*)getEntity (env, obj);
    int func = cmode->getBlending ();
    return func;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_getDepthOffsetFactor
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1getDepthOffsetFactor
  (JNIEnv* env, jobject obj)
{
    cout << "Java-CompositingMode: getDepthOffsetFactor is called.";
    CompositingMode* cmode = (CompositingMode*)getEntity (env, obj);
    float factor = cmode->getDepthOffsetFactor ();
    return factor;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_getDepthOffsetUnits
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1getDepthOffsetUnits
  (JNIEnv* env, jobject obj)
{
    cout << "Java-CompositingMode: getDepthOffsetUnits is called.";
    CompositingMode* cmode = (CompositingMode*)getEntity (env, obj);
    float units = cmode->getDepthOffsetUnits ();
    return units;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_isAlphaWriteEnable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1isAlphaWriteEnable
  (JNIEnv* env, jobject obj)
{
    cout << "Java-CompositingMode: isAlphaWriteEnable is called.";
    CompositingMode* cmode = (CompositingMode*)getEntity (env, obj);
    bool enable = cmode->isAlphaWriteEnabled ();
    return enable;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_isColorWriteEnable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1isColorWriteEnable
  (JNIEnv* env, jobject obj)
{
    cout << "Java-CompositingMode: isColorWriteEnable is called.";
    CompositingMode* cmode = (CompositingMode*)getEntity (env, obj);
    bool enable = cmode->isColorWriteEnabled ();
    return enable;
}


/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_isDepthTestEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1isDepthTestEnabled
  (JNIEnv* env, jobject obj)
{
    cout << "Java-CompositingMode: isDepthTestEnable is called.";
    CompositingMode* cmode = (CompositingMode*)getEntity (env, obj);
    bool enable = cmode->isDepthTestEnabled ();
    return enable;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_isDepthWriteEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1isDepthWriteEnabled
  (JNIEnv* env, jobject obj)
{
    cout << "Java-CompositingMode: isDepthWriteEnabled is called.";
    CompositingMode* cmode = (CompositingMode*)getEntity (env, obj);
    bool enabled = cmode->isDepthWriteEnabled ();
    return enabled;
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_setAlphaThreshold
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1setAlphaThreshold
  (JNIEnv* env, jobject obj, jfloat threshold)
{
    cout << "Java-CompositingMode: setAlphaThreshold is called.";
    CompositingMode* cmode = (CompositingMode*)getEntity (env, obj);
    cmode->setAlphaThreshold (threshold);
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_setAlphaWriteEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1setAlphaWriteEnable
  (JNIEnv* env, jobject obj, jboolean enable)
{
    cout << "Java-CompositingMode: setAlphaWriteEnable is called.";
    CompositingMode* cmode = (CompositingMode*)getEntity (env, obj);
    cmode->setAlphaWriteEnable (enable);
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_setBlending
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1setBlending
  (JNIEnv* env, jobject obj, jint func)
{
    cout << "Java-CompositingMode: setBlending is called.";
    CompositingMode* cmode = (CompositingMode*)getEntity (env, obj);
    cmode->setBlending (func);
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_setColorWriteEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1setColorWriteEnable
  (JNIEnv* env, jobject obj, jboolean enable)
{
    cout << "Java-CompositingMode: setColorWriteEnable is called.";
    CompositingMode* cmode = (CompositingMode*)getEntity (env, obj);
    cmode->setColorWriteEnable (enable);
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_setDepthOffset
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1setDepthOffset
  (JNIEnv* env, jobject obj, jfloat factor, jfloat units)
{
    cout << "Java-CompositingMode: setDepthOffset is called.";
    CompositingMode* cmode = (CompositingMode*)getEntity (env, obj);
    cmode->setDepthOffset (factor, units);
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_setDepthTestEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1setDepthTestEnable
  (JNIEnv* env, jobject obj, jboolean enable)
{
    cout << "Java-CompositingMode: setDepthEnable is called.";
    CompositingMode* cmode = (CompositingMode*)getEntity (env, obj);
    cmode->setDepthTestEnable (enable);
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_setDepthWriteEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1setDepthWriteEnable
  (JNIEnv* env, jobject obj, jboolean enable)
{
    cout << "Java-CompositingMode: setDepthWriteEnable is called.";
    CompositingMode* cmode = (CompositingMode*)getEntity (env, obj);
    cmode->setDepthWriteEnable (enable);
}

/*
 * Class:     org_karlsland_m3g_CompositingMode
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_CompositingMode_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-CompositingMode: print is called.";
    CompositingMode* cmode = (CompositingMode*)getEntity (env, obj);
    cmode->print (cout) << "\n";
}

