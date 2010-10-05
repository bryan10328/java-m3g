#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_initizlie
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1initialize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Background: initilize is called.\n";
    Background* bg;
    __TRY__;
    bg = new Background ();
    __CATCH_VOID__;
    setNativePointer (env, thiz, bg);
    jobject entity = env->NewWeakGlobalRef (thiz);
    bg->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Background: finalize is called.\n";
    Background* bg = (Background*)getNativePointer (env, thiz);
    env->DeleteWeakGlobalRef ((jobject)bg->getExportedEntity());
    __TRY__;
    delete bg;
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getColor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getColor
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Background: getColor is called.\n";
    Background* bg = (Background*)getNativePointer (env, thiz);
    int color;
    __TRY__;
    color = bg->getColor ();
    __CATCH_INT__;
    return color;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getCropHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getCropHeight
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Background: getCropHeight is called.\n";
    Background* bg = (Background*)getNativePointer (env, thiz);
    int height;
    __TRY__;
    height = bg->getCropHeight ();
    __CATCH_INT__;
    return height;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getCropWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getCropWidth
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Background: getCropWidth is called.\n";
    Background* bg = (Background*)getNativePointer (env, thiz);
    int width;
    __TRY__;
    width = bg->getCropWidth ();
    __CATCH_INT__;
    return width;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getCropX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getCropX
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Background: getCropX is called.\n";
    Background* bg = (Background*)getNativePointer (env, thiz);
    int x;
    __TRY__;
    x = bg->getCropX ();
    __CATCH_INT__;
    return x;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getCropY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getCropY
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Background: getCropY is called.\n";
    Background* bg = (Background*)getNativePointer (env, thiz);
    int y;
    __TRY__;
    y = bg->getCropY ();
    __CATCH_INT__;
    return y;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getImage
 * Signature: ()Lorg/karlsland/m3g/Image2D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Background_jni_1getImage
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Background: getImage is called.\n";
    Background* bg = (Background*)getNativePointer (env, thiz);
    Image2D* img;
    __TRY__;
    img = bg->getImage ();
    __CATCH_JOBJECT__;
    return (img != NULL) ? (jobject)img->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getImageModeX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getImageModeX
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Background: getImageModeX is called.\n";
    Background* bg = (Background*)getNativePointer (env, thiz);
    int mode;
    __TRY__;
    mode = bg->getImageModeX ();
    __CATCH_INT__;
    return mode;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getImageModeY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getImageModeY
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Background: getImageModeY is called.\n";
    Background* bg = (Background*)getNativePointer (env, thiz);
    int mode;
    __TRY__;
    mode = bg->getImageModeY ();
    __CATCH_INT__;
    return mode;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_isColorClearEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Background_jni_1isColorClearEnabled
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Background: isColorClearEnabled is called.\n";
    Background* bg = (Background*)getNativePointer (env, thiz);
    bool enabled;
    __TRY__;
    enabled = bg->isColorClearEnabled ();
    __CATCH_BOOL__;
    return enabled;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_isDepthClearEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Background_jni_1isDepthClearEnabled
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Background: isDethClearEnabled is called.\n";
    Background* bg = (Background*)getNativePointer (env, thiz);
    bool enabled;
    __TRY__;
    enabled = bg->isDepthClearEnabled ();
    __CATCH_BOOL__;
    return enabled;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_setColor
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1setColor
  (JNIEnv* env, jobject thiz, jint color)
{
    cout << "Java-Background: setColor is called.\n";
    Background* bg = (Background*)getNativePointer (env, thiz);
    __TRY__;
    bg->setColor (color);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_setColorClearEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1setColorClearEnable
  (JNIEnv* env, jobject thiz, jboolean enable)
{
    cout << "Java-Background: setColorClearEnable is called.\n";
    Background* bg = (Background*)getNativePointer (env, thiz);
    __TRY__;
    bg->setColorClearEnable (enable);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_setCrop
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1setCrop
  (JNIEnv* env, jobject thiz, jint cropX, jint cropY, jint width, jint height)
{
    cout << "Java-Background: setCrop is called.\n";
    Background* bg = (Background*)getNativePointer (env, thiz);
    __TRY__;
    bg->setCrop (cropX, cropY, width, height);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_setDepthClearEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1setDepthClearEnable
  (JNIEnv* env, jobject thiz, jboolean enable)
{
    cout << "Java-Background: setDepthClearEnable is called.\n";
    Background* bg = (Background*)getNativePointer (env, thiz);
    __TRY__;
    bg->setDepthClearEnable (enable);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_setImage
 * Signature: (Lorg/karlsland/m3g/Image2D;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1setImage
  (JNIEnv* env, jobject thiz, jobject image)
{
    cout << "Java-Background: setImage is called.\n";
    Background* bg = (Background*)getNativePointer (env, thiz);
    Image2D*   img = (Image2D*)getNativePointer (env, image);
    __TRY__;
    bg->setImage (img);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_setImageMode
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1setImageMode
  (JNIEnv* env, jobject thiz, jint modeX, jint modeY)
{
    cout << "Java-Background: setImageMode is called.\n";
    Background* bg = (Background*)getNativePointer (env, thiz);
    __TRY__;
    bg->setImageMode (modeX, modeY);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Background: print is called.\n";
    Background* bg = (Background*)getNativePointer (env, thiz);
    __TRY__;
    bg->print (cout) << "\n";
    __CATCH_VOID__;
}


void Java_build_Background (JNIEnv* env, jobject bg_obj, m3g::Background* bg)
{
    jclass   bg_class = env->GetObjectClass (bg_obj);
    jfieldID bg_image = env->GetFieldID     (bg_class, "image", "Lorg/karlsland/m3g/Image2D;");

    Image2D* img = bg->getImage ();
    if (img) {
        env->SetObjectField (bg_obj, bg_image, (jobject)img->getExportedEntity());
    }

}

