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
    Image2D*    img = (Image2D*)getNativePointer (env, image);
    Appearance* app = (Appearance*)getNativePointer (env, appearance);
    Sprite3D*   spr;
    __TRY__;
    spr = new Sprite3D (scaled, img, app);
    __CATCH_VOID__;
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
    __TRY__;
    delete spr;
    __CATCH_VOID__;
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
    Appearance* app;
    __TRY__;
    app = spr->getAppearance ();
    __CATCH_JOBJECT__;
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
    int height;
    __TRY__;
    height = spr->getCropHeight ();
    __CATCH_INT__;
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
    int width;
    __TRY__;
    width = spr->getCropWidth ();
    __CATCH_INT__;
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
    int x;
    __TRY__;
    x = spr->getCropX ();
    __CATCH_INT__;
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
    int y;
    __TRY__;
    y = spr->getCropY ();
    __CATCH_INT__;
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
    Image2D*  img;
    __TRY__;
    img = spr->getImage ();
    __CATCH_JOBJECT__;
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
    bool scaled;
    __TRY__;
    scaled = spr->isScaled ();
    __CATCH_BOOL__;
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
    Sprite3D*   spr = (Sprite3D*)getNativePointer (env, obj);
    Appearance* app = (Appearance*)getNativePointer (env, appearance);
    __TRY__;
    spr->setAppearance (app);
    __CATCH_VOID__;
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
    __TRY__;
    spr->setCrop (cropX, cropY, width, height);
    __CATCH_VOID__;
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
    Image2D*  img = (Image2D*)getNativePointer (env, image);
    __TRY__;
    spr->setImage (img);
    __CATCH_VOID__;
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
    __TRY__;
    spr->print (cout) << "\n";
    __CATCH_VOID__;
}
