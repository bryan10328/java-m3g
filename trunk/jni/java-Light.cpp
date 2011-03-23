#include <jni.h>
#include <iostream>
#include <sstream>
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
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Light: initilize is called.\n";
    Light* lgh = NULL;
    __TRY__;
    lgh = new Light ();
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer (env, thiz, lgh);
    jobject entity = env->NewWeakGlobalRef (thiz);
    lgh->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Light: finalize is called.\n";
    Light* lgh = (Light*)getNativePointer (env, thiz);
    env->DeleteWeakGlobalRef ((jobject)lgh->getExportedEntity());
    __TRY__;
    delete lgh;
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getColor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Light_jni_1getColor
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Light: getColor is called.\n";
    Light* lgh = (Light*)getNativePointer (env, thiz);
    int color = 0;
    __TRY__;
    color = lgh->getColor();
    __CATCH__;
    return color;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getConstantAttenuation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Light_jni_1getConstantAttenuation
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Light: getConstantAttenuation is called.\n";
    Light* lgh = (Light*)getNativePointer (env, thiz);
    float constant = 0;
    __TRY__;
    constant = lgh->getConstantAttenuation ();
    __CATCH__;
    return constant;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getIntensity
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Light_jni_1getIntensity
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Light: getIntensity is called.\n";
    Light* lgh = (Light*)getNativePointer (env, thiz);
    float intensity = 0;
    __TRY__;
    intensity = lgh->getIntensity ();
    __CATCH__;
    return intensity;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getLinearAttenuation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Light_jni_1getLinearAttenuation
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Light: getLinearAttenuation is called.\n";
    Light* lgh = (Light*)getNativePointer (env, thiz);
    float linear = 0;
    __TRY__;
    linear = lgh->getLinearAttenuation ();
    __CATCH__;
    return linear;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getMode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Light_jni_1getMode
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Light: getMode is called.\n";
    Light* lgh = (Light*)getNativePointer (env, thiz);
    int mode = 0;
    __TRY__;
    mode = lgh->getMode ();
    __CATCH__;
    return mode;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getQuadraticAttenuation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Light_jni_1getQuadraticAttenuation
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Light: getQuadraticAttenation is called.\n";
    Light* lgh = (Light*)getNativePointer (env, thiz);
    float  quadratic = 0;
    __TRY__;
    quadratic = lgh->getQuadraticAttenuation ();
    __CATCH__;
    return quadratic;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getSpotAngle
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Light_jni_1getSpotAngle
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Light: getSpotAngle is called.\n";
    Light* lgh   = (Light*)getNativePointer (env, thiz);
    float  angle = 0;
    __TRY__;
    angle = lgh->getSpotAngle ();
    __CATCH__;
    return angle;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_getSpotExponent
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Light_jni_1getSpotExponent
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Light: getSpotExponent is called.\n";
    Light* lgh  = (Light*)getNativePointer (env, thiz);
    float  expo = 0;
    __TRY__;
    expo = lgh->getSpotExponent ();
    __CATCH__;
    return expo;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_setAttenuation
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1setAttenuation
  (JNIEnv* env, jobject thiz, jfloat constant, jfloat linear, jfloat quadratic)
{
    cout << "Java-Light: setAttenuation is called.\n";
    Light* lgh = (Light*)getNativePointer (env, thiz);
    __TRY__;
    lgh->setAttenuation (constant, linear, quadratic);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_setColor
 * Signature: (I)I
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1setColor
  (JNIEnv* env, jobject thiz, jint RGB)
{
    cout << "Java-Light: setColor is called.\n";
    Light* lgh = (Light*)getNativePointer (env, thiz);
    __TRY__;
    lgh->setColor (RGB);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_setIntensity
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1setIntensity
  (JNIEnv* env, jobject thiz, jfloat intensity)
{
    cout << "Java-Light: setIntensity is called.\n";
    Light* lgh = (Light*)getNativePointer (env, thiz);
    __TRY__;
    lgh->setIntensity (intensity);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_setMode
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1setMode
  (JNIEnv* env, jobject thiz, jint mode)
{
    cout << "Java-Light: setMode is called.\n";
    Light* lgh = (Light*)getNativePointer (env, thiz);
    __TRY__;
    lgh->setMode (mode);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_setSpotAngle
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1setSpotAngle
  (JNIEnv* env, jobject thiz, jfloat angle)
{
    cout << "Java-Light: setSpotAngle is called.\n";
    Light* lgh = (Light*)getNativePointer (env, thiz);
    __TRY__;
    lgh->setSpotAngle (angle);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_setSpotExponent
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Light_jni_1setSpotExponent
  (JNIEnv* env, jobject thiz, jfloat exponent)
{
    cout << "Java-Light: setSpotExponent is called.\n";
    Light* lgh = (Light*)getNativePointer (env, thiz);
    __TRY__;
    lgh->setSpotExponent (exponent);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Light
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_Light_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Light: print is called.\n";
    Light* lgh = (Light*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    lgh->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}

void Java_new_Light               (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java Light.\n";
    Light*  lgh     = dynamic_cast<Light*>(obj);
    jobject lgh_obj = allocJavaObject (env, "org/karlsland/m3g/Light", lgh);

    Java_build_Object3D      (env, lgh_obj, lgh);
    Java_build_Transformable (env, lgh_obj, lgh);
    Java_build_Node          (env, lgh_obj, lgh);
    Java_build_Light         (env, lgh_obj, lgh);
}

void Java_build_Light (JNIEnv* env, jobject lgh_obj, m3g::Light* lgh)
{
    // nothing to do
}
