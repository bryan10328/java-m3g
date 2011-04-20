#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;


/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_initialize
 * Signature: (ZLorg/karlsland/m3g/Image2D;Lorg/karlsland/m3g/Appearance;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1initialize
  (JNIEnv* env, jobject thiz, jboolean scaled, jobject image, jobject appearance)
{
    cout << "Java-Sprite3D: initilize is called.\n";
    Image2D*    img = (Image2D*)getNativePointer (env, image);
    Appearance* app = (Appearance*)getNativePointer (env, appearance);
    Sprite3D*   spr = NULL;
    __TRY__;
    spr = new Sprite3D (scaled, img, app);
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer (env, thiz, spr);
    jobject entity = env->NewGlobalRef (thiz);
    spr->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Sprite3D: finalize is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, thiz);
    env->DeleteGlobalRef ((jobject)spr->getExportedEntity());
    addUsedObject (spr);
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_getAppearance
 * Signature: ()Lorg/karlsland/m3g/Appearance;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1getAppearance
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Sprite3D: getAppearance is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, thiz);
    Appearance* app = NULL;
    __TRY__;
    app = spr->getAppearance ();
    __CATCH__;
    return (app != NULL) ? (jobject)app->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_getCropHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1getCropHeight
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Sprite3D: getCropHeight is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, thiz);
    int height = 0;
    __TRY__;
    height = spr->getCropHeight ();
    __CATCH__;
    return height;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_getCropWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1getCropWidth
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Sprite3D: getCropWidth is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, thiz);
    int width = 0;
    __TRY__;
    width = spr->getCropWidth ();
    __CATCH__;
    return width;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_getCropX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1getCropX
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Sprite3D: getCropX is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, thiz);
    int x = 0;
    __TRY__;
    x = spr->getCropX ();
    __CATCH__;
    return x;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_getCropY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1getCropY
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Sprite3D: getCropY is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, thiz);
    int y = 0;
    __TRY__;
    y = spr->getCropY ();
    __CATCH__;
    return y;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_getImage
 * Signature: ()Lorg/karlsland/m3g/Image2D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1getImage
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Sprite3D: getImage is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, thiz);
    Image2D*  img = NULL;
    __TRY__;
    img = spr->getImage ();
    __CATCH__;
    return (img != NULL) ? (jobject)img->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_isScaled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1isScaled
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Sprite3D: isScaled is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, thiz);
    bool scaled = false;
    __TRY__;
    scaled = spr->isScaled ();
    __CATCH__;
    return scaled;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_setAppearance
 * Signature: (Lorg/karlsland/m3g/Appearance;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1setAppearance
  (JNIEnv* env, jobject thiz, jobject appearance)
{
    cout << "Java-Sprite3D: setAppearance is called.\n";
    Sprite3D*   spr = (Sprite3D*)getNativePointer (env, thiz);
    Appearance* app = (Appearance*)getNativePointer (env, appearance);
    __TRY__;
    spr->setAppearance (app);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_setCrop
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1setCrop
  (JNIEnv* env, jobject thiz, jint cropX, jint cropY, jint width, jint height)
{
    cout << "Java-Sprite3D: setCrop is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, thiz);
    __TRY__;
    spr->setCrop (cropX, cropY, width, height);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_setImage
 * Signature: (Lorg/karlsland/m3g/Image2D;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1setImage
  (JNIEnv* env, jobject thiz, jobject image)
{
    cout << "Java-Sprite3D: setImage is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, thiz);
    Image2D*  img = (Image2D*)getNativePointer (env, image);
    __TRY__;
    spr->setImage (img);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Sprite3D: print is called.\n";
    Sprite3D* spr = (Sprite3D*)getNativePointer (env, thiz);
    ostringstream oss;
   __TRY__;
   spr->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}


void Java_new_Sprite3D            (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java Sprite3D.\n";
    Sprite3D* spr     = dynamic_cast<Sprite3D*>(obj);
    jobject   spr_obj = allocJavaObject     (env, "org/karlsland/m3g/Sprite3D", spr);

    Java_build_Object3D (env, spr_obj, spr);
    Java_build_Sprite3D (env, spr_obj, spr);

    env->DeleteLocalRef (spr_obj);
}

void Java_build_Sprite3D (JNIEnv* env, jobject spr_obj, m3g::Sprite3D* spr)
{
    jclass    spr_class      = env->GetObjectClass (spr_obj);
    jfieldID  spr_appearance = env->GetFieldID     (spr_class, "appearance", "Lorg/karlsland/m3g/Appearance;");
    jfieldID  spr_image      = env->GetFieldID     (spr_class, "image"     , "Lorg/karlsland/m3g/Image2D;");

    Appearance* app = spr->getAppearance ();
    if (app) {
        env->SetObjectField (spr_obj, spr_appearance, (jobject)app->getExportedEntity());
    }

    Image2D* img = spr->getImage ();
    if (img) {
        env->SetObjectField (spr_obj, spr_image, (jobject)img->getExportedEntity());
    }

}
