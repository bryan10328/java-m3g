#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1initialize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Appearance: initilize is called.\n";
    Appearance* app = new Appearance ();
    setNativePointer (env, obj, app);
    jobject entity = env->NewGlobalRef (obj);
    app->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Appearance: finalize is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, obj);
    delete app;
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_getCompositingMode
 * Signature: ()Lorg/karlsland/m3g/CompositingMode;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Appearance_jni_1getCompositingMode
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Appearance: getCompositingMode is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, obj);
    CompositingMode* cmode = app->getCompositingMode ();
    return (cmode != NULL) ? (jobject)cmode->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_getFog
 * Signature: ()Lorg/karlsland/m3g/Fog;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Appearance_jni_1getFog
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Appearance: getFog is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, obj);
    Fog* fog = app->getFog ();
    return (fog != NULL) ? (jobject)fog->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_getLayer
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Appearance_jni_1getLayer
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Appearance: getLayer is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, obj);
    int layer = app->getLayer ();
    return layer;
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_getMaterial
 * Signature: ()Lorg/karlsland/m3g/Material;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Appearance_jni_1getMaterial
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Appearance: getMaterial is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, obj);
    Material* mat = app->getMaterial ();
    return (mat != NULL) ? (jobject)mat->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_getPolygonMode
 * Signature: ()Lorg/karlsland/m3g/PolygonMode;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Appearance_jni_1getPolygonMode
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Appearance: getPolygonMode is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, obj);
    PolygonMode* pmode = app->getPolygonMode ();
    return (pmode != NULL) ? (jobject)pmode->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_getTexture
 * Signature: (I)Lorg/karlsland/m3g/Texture2D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Appearance_jni_1getTexture
  (JNIEnv* env, jobject obj, jint index)
{
    cout << "Java-Appearance: getTexture is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, obj);
    Texture2D* tex = app->getTexture (index);
    return (tex != NULL) ? (jobject)tex->getExportedEntity() : (jobject)NULL;
}


/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_setCompositingMode
 * Signature: (Lorg/karlsland/m3g/CompositingMode;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1setCompositingMode
  (JNIEnv* env, jobject obj, jobject compositingMode)
{
    cout << "Java-Appearance: getCompositingMode is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, obj);
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, compositingMode);
    app->setCompositingMode (cmode);
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_setFog
 * Signature: (Lorg/karlsland/m3g/Fog;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1setFog
  (JNIEnv* env, jobject obj, jobject fog)
{
    cout << "Java-Appearance: setFog is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, obj);
    Fog* fg = (Fog*)getNativePointer (env, fog);
    app->setFog (fg);
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_setLayer
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1setLayer
  (JNIEnv* env, jobject obj, jint layer)
{
    cout << "Java-Appearance: setLayer is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, obj);
    app->setLayer (layer);
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_setMaterial
 * Signature: (Lorg/karlsland/m3g/Material;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1setMaterial
  (JNIEnv* env, jobject obj, jobject material)
{
    cout << "Java-Appearance: setMaterial is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, obj);
    Material* mat = (Material*)getNativePointer (env, material);
    app->setMaterial (mat);
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_setPolygonMode
 * Signature: (Lorg/karlsland/m3g/PolygonMode;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1setPolygonMode
  (JNIEnv* env, jobject obj, jobject polygonMode)
{
    cout << "Java-Appearance: setPolygonMode is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, obj);
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, polygonMode);
    app->setPolygonMode (pmode);
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_setTexture
 * Signature: (ILorg/karlsland/m3g/Texture2D;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1setTexture
  (JNIEnv* env, jobject obj, jint index, jobject texture)
{
    cout << "Java-Appearance: setTexture is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, obj);
    Texture2D* tex = (Texture2D*)getNativePointer (env, texture);
    app->setTexture (index, tex);
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Appearance: print is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, obj);
    app->print (cout);
}

