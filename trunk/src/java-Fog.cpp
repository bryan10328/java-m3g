#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1initialize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Fog: initilize is called.\n";
    Fog* fog = new Fog ();
    setEntity (env, obj, fog);
    jobject entity = env->NewGlobalRef (obj);
    fog->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Fog: finalize is called.\n";
    Fog* fog = (Fog*)getEntity (env, obj);
    delete fog;
}


/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_getColor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Fog_jni_1getColor
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Fog: getColor is called.\n";
    Fog* fog = (Fog*)getEntity (env, obj);
    int RGB = fog->getColor ();
    return RGB;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_getDensity
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Fog_jni_1getDensity
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Fog: getDensity is called.\n";
    Fog* fog = (Fog*)getEntity (env, obj);
    float dens = fog->getDensity ();
    return dens;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_getFarDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Fog_jni_1getFarDistance
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Fog: getFarDistance is called.\n";
    Fog* fog = (Fog*)getEntity (env, obj);
    float far = fog->getFarDistance ();
    return far;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_getMode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Fog_jni_1getMode
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Fog: getMode is called.\n";
    Fog* fog = (Fog*)getEntity (env, obj);
    int mode = fog->getMode ();
    return mode;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_getNearDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Fog_jni_1getNearDistance
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Fog: getNearDistance is called.\n";
    Fog* fog = (Fog*)getEntity (env, obj);
    float near = fog->getNearDistance ();
    return near;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_setColor
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1setColor
  (JNIEnv* env, jobject obj, jint RGB)
{
    cout << "Java-Fog: setColor is called.\n";
    Fog* fog = (Fog*)getEntity (env, obj);
    fog->setColor (RGB);
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_setDensity
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1setDensity
  (JNIEnv* env, jobject obj, jfloat density)
{
    cout << "Java-Fog: setDensity is called.\n";
    Fog* fog = (Fog*)getEntity (env, obj);
    fog->setDensity (density);
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_setLinear
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1setLinear
  (JNIEnv* env, jobject obj, jfloat near, jfloat far)
{
    cout << "Java-Fog: setLinear is called.\n";
    Fog* fog = (Fog*)getEntity (env, obj);
    fog->setLinear (near, far);
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_setMode
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1setMode
  (JNIEnv* env, jobject obj, jint mode)
{
    cout << "Java-Fog: setMode is called.\n";
    Fog* fog = (Fog*)getEntity (env, obj);
    fog->setMode (mode);
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Fog: print is called.\n";
    Fog* fog = (Fog*)getEntity (env, obj);
    fog->print (cout) << "\n";
}
