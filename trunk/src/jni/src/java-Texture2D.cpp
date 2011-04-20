#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/Image2D;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Texture2D_jni_1initialize
  (JNIEnv* env, jobject thiz, jobject image)
{
    cout << "Java-Texture: initilize is called.\n";
    Image2D*   img = (Image2D*)getNativePointer (env, image);
    Texture2D* tex = NULL;
    __TRY__;
    tex = new Texture2D (img);
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer (env, thiz, tex);
    jobject entity = env->NewGlobalRef (thiz);
    tex->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Texture2D_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Texture2D: finalize is called. 1\n";
    Texture2D* tex = (Texture2D*)getNativePointer (env, thiz);
    env->DeleteGlobalRef ((jobject)tex->getExportedEntity());
    addUsedObject (tex);
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_getBlendColor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Texture2D_jni_1getBlendColor
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Texture2D: getBlendColor is called.\n";
    Texture2D* tex = (Texture2D*)getNativePointer (env, thiz);
    int color = 0;
    __TRY__;
    color = tex->getBlendColor ();
    __CATCH__;
    return color;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_getBlending
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Texture2D_jni_1getBlending
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Texture2D: getBlending is called.\n";
    Texture2D* tex = (Texture2D*)getNativePointer (env, thiz);
    int blending;
    __TRY__;
    blending = tex->getBlending ();
    __CATCH__;
    return blending;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_getImage
 * Signature: ()Lorg/karlsland/m3g/Image2D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Texture2D_jni_1getImage
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Texture2D: getImage is called.\n";
    Texture2D* tex = (Texture2D*)getNativePointer (env, thiz);
    Image2D*   img = NULL;
    __TRY__;
    img = tex->getImage ();
    __CATCH__;
    return (img != NULL) ? (jobject)img->getExportedEntity() : (jobject)0;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_getImageFilter
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Texture2D_jni_1getImageFilter
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Texture2D: getImageFilter is called.\n";
    Texture2D* tex = (Texture2D*)getNativePointer (env, thiz);
    int filter = 0;
    __TRY__;
    filter = tex->getImageFilter ();
    __CATCH__;
    return filter;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_getLevelFilter
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Texture2D_jni_1getLevelFilter
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Texture2D: getLevelFilter is called.\n";
    Texture2D* tex = (Texture2D*)getNativePointer (env, thiz);
    int filter = 0;
    __TRY__;
    filter = tex->getLevelFilter ();
    __CATCH__;
    return filter;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_getWrappingS
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Texture2D_jni_1getWrappingS
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Texture2D: getWrappingS is called.\n";
    Texture2D* tex = (Texture2D*)getNativePointer (env, thiz);
    int wrap = 0;
    __TRY__;
    wrap = tex->getWrappingS ();
    __CATCH__;
    return wrap;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_getWrappingT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Texture2D_jni_1getWrappingT
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Texture2D: getWrappingT is called.\n";
    Texture2D* tex = (Texture2D*)getNativePointer (env, thiz);
    int wrap = 0;
    __TRY__;
    wrap = tex->getWrappingT ();
    __CATCH__;
    return wrap;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_setBlendColor
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Texture2D_jni_1setBlendColor
  (JNIEnv* env, jobject thiz, jint RGB)
{
    cout << "Java-Texture2D: setBlendColor is called.\n";
    Texture2D* tex = (Texture2D*)getNativePointer (env, thiz);
    __TRY__;
    tex->setBlendColor (RGB);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_setBlending
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Texture2D_jni_1setBlending
  (JNIEnv* env, jobject thiz, jint func)
{
    cout << "Java-Texture2D: setBlending is called.\n";
    Texture2D* tex = (Texture2D*)getNativePointer (env, thiz);
    __TRY__;
    tex->setBlending (func);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_setFiltering
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Texture2D_jni_1setFiltering
  (JNIEnv* env, jobject thiz, jint levelFilter, jint imageFilter)
{
    cout << "Java-Texture2D: setFiltering is called.\n";
    Texture2D* tex = (Texture2D*)getNativePointer (env, thiz);
    __TRY__;
    tex->setFiltering (levelFilter, imageFilter);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_setImage
 * Signature: (Lorg/karlsland/m3g/Image2D;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Texture2D_jni_1setImage
  (JNIEnv* env, jobject thiz, jobject image)
{
    cout << "Java-Texture2D: setImage is called.\n";
    Texture2D* tex = (Texture2D*)getNativePointer (env, thiz);
    Image2D*   img = (Image2D*)getNativePointer (env, image);
    __TRY__;
    tex->setImage (img);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_setWrapping
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Texture2D_jni_1setWrapping
  (JNIEnv* env, jobject thiz, jint wrapS, jint wrapT)
{
    cout << "Java-Texture2D: setWrapping is called.\n";
    Texture2D* tex = (Texture2D*)getNativePointer (env, thiz);
    __TRY__;
    tex->setWrapping (wrapS, wrapT);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_Texture2D_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Texture2D: print is called.\n";
    Texture2D* tex = (Texture2D*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    tex->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}

void Java_new_Texture2D           (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java Texture2D.\n";
    Texture2D* tex       = dynamic_cast<Texture2D*>(obj);
    jobject    tex_obj   = allocJavaObject     (env, "org/karlsland/m3g/Texture2D", tex);

    Java_build_Object3D  (env, tex_obj, tex);
    Java_build_Texture2D (env, tex_obj, tex);

    env->DeleteLocalRef (tex_obj);
}

void Java_build_Texture2D (JNIEnv* env, jobject tex_obj, m3g::Texture2D* tex)
{
    jclass     tex_class = env->GetObjectClass (tex_obj);
    jfieldID   tex_image = env->GetFieldID     (tex_class, "image", "Lorg/karlsland/m3g/Image2D;");

    Image2D* img = tex->getImage ();
    if (img) {
        env->SetObjectField (tex_obj, tex_image, (jobject)tex->getExportedEntity());
    }


}
