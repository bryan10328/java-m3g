#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1initialize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Fog: initilize is called.\n";
    Fog* fog = NULL;
    __TRY__;
    fog = new Fog ();
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer (env, thiz, fog);
    jobject entity = env->NewWeakGlobalRef (thiz);
    fog->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Fog: finalize is called.\n";
    Fog* fog = (Fog*)getNativePointer (env, thiz);
    env->DeleteWeakGlobalRef ((jobject)fog->getExportedEntity());
    __TRY__;
    delete fog;
    __CATCH__;
}


/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_getColor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Fog_jni_1getColor
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Fog: getColor is called.\n";
    Fog* fog = (Fog*)getNativePointer (env, thiz);
    int RGB = 0;
    __TRY__;
    RGB = fog->getColor ();
    __CATCH__;
    return RGB;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_getDensity
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Fog_jni_1getDensity
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Fog: getDensity is called.\n";
    Fog* fog = (Fog*)getNativePointer (env, thiz);
    float dens = 0;
    __TRY__;
    dens = fog->getDensity ();
    __CATCH__;
    return dens;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_getFarDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Fog_jni_1getFarDistance
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Fog: getFarDistance is called.\n";
    Fog* fog = (Fog*)getNativePointer (env, thiz);
    float far = 0;
    __TRY__;
    far = fog->getFarDistance ();
    __CATCH__;
    return far;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_getMode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Fog_jni_1getMode
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Fog: getMode is called.\n";
    Fog* fog = (Fog*)getNativePointer (env, thiz);
    int mode = 0;
    __TRY__;
    mode = fog->getMode ();
    __CATCH__;
    return mode;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_getNearDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Fog_jni_1getNearDistance
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Fog: getNearDistance is called.\n";
    Fog* fog = (Fog*)getNativePointer (env, thiz);
    float near = 0;
    __TRY__;
    near = fog->getNearDistance ();
    __CATCH__;
    return near;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_setColor
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1setColor
  (JNIEnv* env, jobject thiz, jint RGB)
{
    cout << "Java-Fog: setColor is called.\n";
    Fog* fog = (Fog*)getNativePointer (env, thiz);
    __TRY__;
    fog->setColor (RGB);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_setDensity
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1setDensity
  (JNIEnv* env, jobject thiz, jfloat density)
{
    cout << "Java-Fog: setDensity is called.\n";
    Fog* fog = (Fog*)getNativePointer (env, thiz);
    __TRY__;
    fog->setDensity (density);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_setLinear
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1setLinear
  (JNIEnv* env, jobject thiz, jfloat near, jfloat far)
{
    cout << "Java-Fog: setLinear is called.\n";
    Fog* fog = (Fog*)getNativePointer (env, thiz);
    __TRY__;
    fog->setLinear (near, far);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_setMode
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Fog_jni_1setMode
  (JNIEnv* env, jobject thiz, jint mode)
{
    cout << "Java-Fog: setMode is called.\n";
    Fog* fog = (Fog*)getNativePointer (env, thiz);
    __TRY__;
    fog->setMode (mode);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Fog
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_Fog_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Fog: print is called.\n";
    Fog* fog = (Fog*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    fog->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}


void Java_new_Fog                 (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java Fog.\n";
    Fog*    fog     = dynamic_cast<Fog*>(obj);
    jobject fog_obj = allocJavaObject (env, "org/karlsland/m3g/Fog", fog);

    Java_build_Object3D (env, fog_obj, fog);
    Java_build_Fog      (env, fog_obj, fog);
}

void Java_build_Fog (JNIEnv* env, jobject fog_obj, m3g::Fog* fog)
{
    // nothing to do
}
