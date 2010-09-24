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
    Light* lgh = new Light ();
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
    delete lgh;
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
    int color = lgh->getColor();
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
    float constant = lgh->getConstantAttenuation ();
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
    float intensity = lgh->getIntensity ();
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
    float linear = lgh->getLinearAttenuation ();
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
    int mode = lgh->getMode ();
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
    float quadratic = lgh->getQuadraticAttenuation ();
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
    float angle = lgh->getSpotAngle ();
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
    float expo = lgh->getSpotExponent ();
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
    lgh->setAttenuation (constant, linear, quadratic);
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
    lgh->setColor (RGB);
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
    lgh->setIntensity (intensity);
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
    lgh->setMode (mode);
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
    lgh->setSpotAngle (angle);
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
    lgh->setSpotExponent (exponent);
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
    lgh->print (cout) << "\n";
}
