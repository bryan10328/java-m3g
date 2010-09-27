#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1initialize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Light: initilize is called.\n";
    Light* lgh;
    __TRY__;
    lgh = new Light ();
    __CATCH_VOID__;
    setNativePointer (env, obj, lgh);
    jobject entity = env->NewGlobalRef (obj);
    lgh->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Light: finalize is called.\n";
    Light* lgh = (Light*)getNativePointer (env, obj);
    __TRY__;
    delete lgh;
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getColor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Light_jni_1getColor
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Light: getColor is called.\n";
    Light* lgh = (Light*)getNativePointer (env, obj);
    int color;
    __TRY__;
    color = lgh->getColor();
    __CATCH_INT__;
    return color;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getConstantAttenuation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Light_jni_1getConstantAttenuation
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Light: getConstantAttenuation is called.\n";
    Light* lgh = (Light*)getNativePointer (env, obj);
    float constant;
    __TRY__;
    constant = lgh->getConstantAttenuation ();
    __CATCH_FLOAT__;
    return constant;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getIntensity
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Light_jni_1getIntensity
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Light: getIntensity is called.\n";
    Light* lgh = (Light*)getNativePointer (env, obj);
    float intensity;
    __TRY__;
    intensity = lgh->getIntensity ();
    __CATCH_FLOAT__;
    return intensity;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getLinearAttenuation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Light_jni_1getLinearAttenuation
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Light: getLinearAttenuation is called.\n";
    Light* lgh = (Light*)getNativePointer (env, obj);
    float linear;
    __TRY__;
    linear = lgh->getLinearAttenuation ();
    __CATCH_FLOAT__;
    return linear;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getMode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Light_jni_1getMode
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Light: getMode is called.\n";
    Light* lgh = (Light*)getNativePointer (env, obj);
    int mode;
    __TRY__;
    mode = lgh->getMode ();
    __CATCH_INT__;
    return mode;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getQuadraticAttenuation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Light_jni_1getQuadraticAttenuation
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Light: getQuadraticAttenation is called.\n";
    Light* lgh = (Light*)getNativePointer (env, obj);
    float  quadratic;
    __TRY__;
    quadratic = lgh->getQuadraticAttenuation ();
    __CATCH_FLOAT__;
    return quadratic;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getSpotAngle
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Light_jni_1getSpotAngle
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Light: getSpotAngle is called.\n";
    Light* lgh = (Light*)getNativePointer (env, obj);
    float  angle;
    __TRY__;
    angle = lgh->getSpotAngle ();
    __CATCH_FLOAT__;
    return angle;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getSpotExponent
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Light_jni_1getSpotExponent
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Light: getSpotExponent is called.\n";
    Light* lgh = (Light*)getNativePointer (env, obj);
    float  expo;
    __TRY__;
    expo = lgh->getSpotExponent ();
    __CATCH_FLOAT__;
    return expo;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_setAttenuation
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1setAttenuation
  (JNIEnv* env, jobject obj, jfloat constant, jfloat linear, jfloat quadratic)
{
    cout << "Java-Light: setAttenuation is called.\n";
    Light* lgh = (Light*)getNativePointer (env, obj);
    __TRY__;
    lgh->setAttenuation (constant, linear, quadratic);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_setColor
 * Signature: (I)I
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1setColor
  (JNIEnv* env, jobject obj, jint RGB)
{
    cout << "Java-Light: setColor is called.\n";
    Light* lgh = (Light*)getNativePointer (env, obj);
    __TRY__;
    lgh->setColor (RGB);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_setIntensity
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1setIntensity
  (JNIEnv* env, jobject obj, jfloat intensity)
{
    cout << "Java-Light: setIntensity is called.\n";
    Light* lgh = (Light*)getNativePointer (env, obj);
    __TRY__;
    lgh->setIntensity (intensity);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_setMode
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1setMode
  (JNIEnv* env, jobject obj, jint mode)
{
    cout << "Java-Light: setMode is called.\n";
    Light* lgh = (Light*)getNativePointer (env, obj);
    __TRY__;
    lgh->setMode (mode);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_setSpotAngle
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1setSpotAngle
  (JNIEnv* env, jobject obj, jfloat angle)
{
    cout << "Java-Light: setSpotAngle is called.\n";
    Light* lgh = (Light*)getNativePointer (env, obj);
    __TRY__;
    lgh->setSpotAngle (angle);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_setSpotExponent
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1setSpotExponent
  (JNIEnv* env, jobject obj, jfloat exponent)
{
    cout << "Java-Light: setSpotExponent is called.\n";
    Light* lgh = (Light*)getNativePointer (env, obj);
    __TRY__;
    lgh->setSpotExponent (exponent);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Light: print is called.\n";
    Light* lgh = (Light*)getNativePointer (env, obj);
    __TRY__;
    lgh->print (cout) << "\n";
    __CATCH_VOID__;
}
