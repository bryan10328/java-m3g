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
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Background: initilize is called.\n";
    Background* bg = new Background ();
    setNativePointer (env, obj, bg);
    jobject entity = env->NewGlobalRef (obj);
    bg->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Background: finalize is called.\n";
    Background* bg = (Background*)getNativePointer (env, obj);
    delete bg;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getColor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getColor
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Background: getColor is called.\n";
    Background* bg = (Background*)getNativePointer (env, obj);
    int color = bg->getColor ();
    return color;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getCropHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getCropHeight
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Background: getCropHeight is called.\n";
    Background* bg = (Background*)getNativePointer (env, obj);
    int height = bg->getCropHeight ();
    return height;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getCropWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getCropWidth
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Background: getCropWidth is called.\n";
    Background* bg = (Background*)getNativePointer (env, obj);
    int width = bg->getCropWidth ();
    return width;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getCropX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getCropX
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Background: getCropX is called.\n";
    Background* bg = (Background*)getNativePointer (env, obj);
    int x = bg->getCropX ();
    return x;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getCropY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getCropY
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Background: getCropY is called.\n";
    Background* bg = (Background*)getNativePointer (env, obj);
    int y = bg->getCropY ();
    return y;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getImage
 * Signature: ()Lorg/karlsland/m3g/Image2D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Background_jni_1getImage
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Background: getImage is called.\n";
    Background* bg = (Background*)getNativePointer (env, obj);
    Image2D* img = bg->getImage ();
    return (img != NULL) ? (jobject)img->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getImageModeX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getImageModeX
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Background: getImageModeX is called.\n";
    Background* bg = (Background*)getNativePointer (env, obj);
    int mode = bg->getImageModeX ();
    return mode;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getImageModeY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getImageModeY
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Background: getImageModeY is called.\n";
    Background* bg = (Background*)getNativePointer (env, obj);
    int mode = bg->getImageModeY ();
    return mode;
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_isColorClearEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Background_jni_1isColorClearEnabled
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Background: isColorClearEnabled is called.\n";
    Background* bg = (Background*)getNativePointer (env, obj);
    bool enabled = bg->isColorClearEnabled ();
    return enabled;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_isDepthClearEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Background_jni_1isDepthClearEnabled
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Background: isDethClearEnabled is called.\n";
    Background* bg = (Background*)getNativePointer (env, obj);
    bool enabled = bg->isDepthClearEnabled ();
    return enabled;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_setColor
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1setColor
  (JNIEnv* env, jobject obj, jint color)
{
    cout << "Java-Background: setColor is called.\n";
    Background* bg = (Background*)getNativePointer (env, obj);
    bg->setColor (color);
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_setColorClearEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1setColorClearEnable
  (JNIEnv* env, jobject obj, jboolean enable)
{
    cout << "Java-Background: setColorClearEnable is called.\n";
    Background* bg = (Background*)getNativePointer (env, obj);
    bg->setColorClearEnable (enable);
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_setCrop
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1setCrop
  (JNIEnv* env, jobject obj, jint cropX, jint cropY, jint width, jint height)
{
    cout << "Java-Background: setCrop is called.\n";
    Background* bg = (Background*)getNativePointer (env, obj);
    bg->setCrop (cropX, cropY, width, height);
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_setDepthClearEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1setDepthClearEnable
  (JNIEnv* env, jobject obj, jboolean enable)
{
    cout << "Java-Background: setDepthClearEnable is called.\n";
    Background* bg = (Background*)getNativePointer (env, obj);
    bg->setDepthClearEnable (enable);
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_setImage
 * Signature: (Lorg/karlsland/m3g/Image2D;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1setImage
  (JNIEnv* env, jobject obj, jobject image)
{
    cout << "Java-Background: setImage is called.\n";
    Background* bg = (Background*)getNativePointer (env, obj);
    Image2D*   img = (Image2D*)getNativePointer (env, image);
    img->print (cout) << "\n";
    cout << "1--------\n";
    bg->setImage (img);
    cout << "2--------\n";
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_setImageMode
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1setImageMode
  (JNIEnv* env, jobject obj, jint modeX, jint modeY)
{
    cout << "Java-Background: setImageMode is called.\n";
    Background* bg = (Background*)getNativePointer (env, obj);
    bg->setImageMode (modeX, modeY);
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Background: print is called.\n";
    Background* bg = (Background*)getNativePointer (env, obj);
    bg->print (cout) << "\n";
}
