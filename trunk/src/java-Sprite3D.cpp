#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;


/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_initialize
 * Signature: (ZLorg/karlsland/m3g/Image2D;Lorg/karlsland/m3g/Appearance;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1initialize
  (JNIEnv* env, jobject obj, jboolean scaled, jobject image, jobject appearance)
{
    cout << "Java-Sprite3D: initilize is called.\n";
    Image2D* img = (Image2D*)getNativePointer (env, image);
    Appearance* app = (Appearance*)getNativePointer (env, appearance);
    Sprite3D* spr = new Sprite3D (scaled, img, app);
    setNativePointer (env, obj, spr);
    jobject entity = env->NewGlobalRef (obj);
    spr->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Sprite3D: finalize is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, obj);
    delete spr;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_getAppearance
 * Signature: ()Lorg/karlsland/m3g/Appearance;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1getAppearance
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Sprite3D: getAppearance is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, obj);
    Appearance* app = spr->getAppearance ();
    return (app != NULL) ? (jobject)app->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_getCropHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1getCropHeight
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Sprite3D: getCropHeight is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, obj);
    int height = spr->getCropHeight ();
    return height;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_getCropWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1getCropWidth
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Sprite3D: getCropWidth is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, obj);
    int width = spr->getCropWidth ();
    return width;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_getCropX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1getCropX
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Sprite3D: getCropX is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, obj);
    int x = spr->getCropX ();
    return x;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_getCropY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1getCropY
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Sprite3D: getCropY is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, obj);
    int y = spr->getCropY ();
    return y;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_getImage
 * Signature: ()Lorg/karlsland/m3g/Image2D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1getImage
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Sprite3D: getImage is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, obj);
    Image2D* img = spr->getImage ();
    return (img != NULL) ? (jobject)img->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_isScaled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1isScaled
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Sprite3D: isScaled is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, obj);
    bool scaled = spr->isScaled ();
    return scaled;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_setAppearance
 * Signature: (Lorg/karlsland/m3g/Appearance;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1setAppearance
  (JNIEnv* env, jobject obj, jobject appearance)
{
    cout << "Java-Sprite3D: setAppearance is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, obj);
    Appearance* app = (Appearance*)getNativePointer (env, appearance);
    spr->setAppearance (app);
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_setCrop
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1setCrop
  (JNIEnv* env, jobject obj, jint cropX, jint cropY, jint width, jint height)
{
    cout << "Java-Sprite3D: setCrop is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, obj);
    spr->setCrop (cropX, cropY, width, height);
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_setImage
 * Signature: (Lorg/karlsland/m3g/Image2D;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1setImage
  (JNIEnv* env, jobject obj, jobject image)
{
    cout << "Java-Sprite3D: setImage is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, obj);
    Image2D* img = (Image2D*)getNativePointer (env, image);
    spr->setImage (img);
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Sprite3D: print is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, obj);
    spr->print (cout) << "\n";
}
