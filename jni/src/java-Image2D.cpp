#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_initialize
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1initialize__III
  (JNIEnv* env, jobject thiz, jint format, jint width, jint height)
{
    //cout << "Java-Image2D: initiazlize1 is called.\n";
    Image2D* img = NULL;
    __TRY__;
    img = new Image2D (format, width, height);
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer  (env, thiz, img);
    bindJavaReference (env, thiz, img);
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_initialize
 * Signature: (III[B)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1initialize__III_3B
  (JNIEnv* env, jobject thiz, jint format, jint width, jint height, jbyteArray pixels_array)
{
    //cout << "Java-Image2D: initiazlize2 is called.\n";
    char*    pixels = getByteArrayPointer (env, pixels_array);
    Image2D* img    = NULL;
    __TRY__;
    img = new Image2D (format, width, height, pixels);
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    releaseByteArrayPointer (env, pixels_array, pixels);
    setNativePointer  (env, thiz, img);
    bindJavaReference (env, thiz, img);
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_initialize
 * Signature: (III[B[B)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1initialize__III_3B_3B
  (JNIEnv* env, jobject thiz, jint format, jint width, jint height, jbyteArray pixels_array, jbyteArray palette_array)
{
    //cout << "Java-Image2D: initiazlize3 is called.\n";
    char*    pixels  = getByteArrayPointer (env, pixels_array);
    char*    palette = getByteArrayPointer (env, palette_array);
    Image2D* img     = NULL;
    __TRY__;
    img = new Image2D (format, width, height, (unsigned char*)pixels, palette);
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    releaseByteArrayPointer (env, pixels_array, pixels);
    releaseByteArrayPointer (env, palette_array, palette);
    setNativePointer  (env, thiz, img);
    bindJavaReference (env, thiz, img);
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_initialize
 * Signature: (ILjava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1initialize__ILjava_lang_Object_2
  (JNIEnv* env, jobject thiz, jint format, jobject image)
{
    //cout << "Java-Image2D: initiazlize4 is called.\n";

    // MIDPやAWTなどのImageクラス
    // 詳細不明。現在では未実装。
}



/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-Image2D: finalize is called.\n";
    Image2D* img = (Image2D*)getNativePointer (env, thiz);
    releaseJavaReference (env, img);
    addUsedObject (img);
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_getFormat
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Image2D_jni_1getFormat
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-Image2D: getFormat is called.\n";
    Image2D* img = (Image2D*)getNativePointer (env, thiz);
    int format = 0;
    __TRY__;
    format = img->getFormat ();
    __CATCH__;
    return format;
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_getHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Image2D_jni_1getHeight
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-Image2D: getHeight is called.\n";
    Image2D* img = (Image2D*)getNativePointer (env, thiz);
    int height = 0;
    __TRY__;
    height = img->getHeight ();
    __CATCH__;
    return height;
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_getWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Image2D_jni_1getWidth
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-Image2D: getWidth is called.\n";
    Image2D* img   = (Image2D*)getNativePointer (env, thiz);
    int      width = 0;
    __TRY__;
    width = img->getWidth ();
    __CATCH__;
    return width;
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_isMutable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Image2D_jni_1isMutable
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-Image2D: isMutable is called.\n";
    Image2D* img = (Image2D*)getNativePointer (env, thiz);
    bool     mut = false;
    __TRY__;
    mut = img->isMutable ();
    __CATCH__;
    return mut;
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_set
 * Signature: (IIII[B)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1set
  (JNIEnv* env, jobject thiz, jint x, jint y, jint width, jint height, jbyteArray pixels_array)
{
    //cout << "Java-Image2D: set is called.\n";
    Image2D* img    = (Image2D*)getNativePointer (env, thiz);
    char*    pixels = getByteArrayPointer (env, pixels_array);
    __TRY__;
    img->set (x, y, width, height, pixels);
    __CATCH__;
    releaseByteArrayPointer (env, pixels_array, pixels);
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_Image2D_jni_1print
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-Image2D: print is called.\n";
    Image2D* img = (Image2D*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    img->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}


/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_writePng
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1writePng
  (JNIEnv* env, jobject thiz, jstring fileName)
{
    //cout << "Java-Image2D: writePng is called.\n";
    Image2D*    img  = (Image2D*)getNativePointer (env, thiz);
    const char* file_name = env->GetStringUTFChars (fileName, 0);
    img->writePNG (file_name);
    env->ReleaseStringUTFChars (fileName, file_name);
}



void Java_new_Image2D             (JNIEnv* env, m3g::Object3D* obj)
{
    //cout << "Java-Loader: build java Image2D.\n";
    Image2D* img     = dynamic_cast<Image2D*>(obj);
    jobject  img_obj = allocJavaObject (env, "org/karlsland/m3g/Image2D");
    setNativePointer  (env, img_obj, img);
    bindJavaReference (env, img_obj, img);

    Java_build_Object3D (env, img_obj, img);
    Java_build_Image2D  (env, img_obj, img);

    env->DeleteLocalRef (img_obj);
}


void Java_build_Image2D (JNIEnv* env, jobject img_obj, m3g::Image2D* img)
{
    // nothing to do
}
