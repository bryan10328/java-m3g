#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_initialize
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1initialize__III
  (JNIEnv* env, jobject obj, jint format, jint width, jint height)
{
    cout << "Java-Image2D: initiazlize1 is called.\n";
    Image2D* img = new Image2D (format, width, height);
    setNativePointer (env, obj, img);
    jobject entity = env->NewGlobalRef (obj);
    img->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_initialize
 * Signature: (III[B)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1initialize__III_3B
  (JNIEnv* env, jobject obj, jint format, jint width, jint height, jbyteArray image)
{
    cout << "Java-Image2D: initiazlize2 is called.\n";
    char* pixels = (char*)env->GetByteArrayElements (image, 0);
    Image2D* img = new Image2D (format, width, height, pixels);
    env->ReleaseByteArrayElements (image, (jbyte*)pixels, 0);
    setNativePointer (env, obj, img);
    jobject entity = env->NewGlobalRef (obj);
    img->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_initialize
 * Signature: (III[B[B)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1initialize__III_3B_3B
  (JNIEnv* env, jobject obj, jint format, jint width, jint height, jbyteArray image, jbyteArray palette)
{
    cout << "Java-Image2D: initiazlize3 is called.\n";
    char* pixels = (char*)env->GetByteArrayElements (image, 0);
    char* palte  = (char*)env->GetByteArrayElements (palette, 0);
    cout << "piexels = " << (void*)pixels << "\n";
    cout << "palte = " << (void*)palte << "\n";
    Image2D* img = new Image2D (format, width, height, pixels, palte);
    cout << "out\n";
    env->ReleaseByteArrayElements (image, (jbyte*)pixels, 0);
    env->ReleaseByteArrayElements (palette, (jbyte*)palte, 0);
    setNativePointer (env, obj, img);
    jobject entity = env->NewGlobalRef (obj);
    img->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_initialize
 * Signature: (ILjava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1initialize__ILjava_lang_Object_2
  (JNIEnv* env, jobject obj, jint format, jobject image)
{
    cout << "Java-Image2D: initiazlize4 is called.\n";

    // MIDPやAWTなどのImageクラス
    // 詳細不明。現在では未実装。
}



/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Image2D: finalize is called.\n";
    Image2D* img = (Image2D*)getNativePointer (env, obj);
    delete img;
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_getFormat
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Image2D_jni_1getFormat
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Image2D: getFormat is called.\n";
    Image2D* img = (Image2D*)getNativePointer (env, obj);
    int format = img->getFormat ();
    return format;
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_getHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Image2D_jni_1getHeight
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Image2D: getHeight is called.\n";
    Image2D* img = (Image2D*)getNativePointer (env, obj);
    int height = img->getHeight ();
    return height;
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_getWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Image2D_jni_1getWidth
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Image2D: getWidth is called.\n";
    Image2D* img = (Image2D*)getNativePointer (env, obj);
    int width = img->getWidth ();
    return width;
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_isMutable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Image2D_jni_1isMutable
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Image2D: isMutable is called.\n";
    Image2D* img = (Image2D*)getNativePointer (env, obj);
    bool mut = img->isMutable ();
    return mut;
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_set
 * Signature: (IIII[B)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1set
  (JNIEnv* env, jobject obj, jint x, jint y, jint width, jint height, jbyteArray image)
{
    cout << "Java-Image2D: set is called.\n";
    Image2D* img = (Image2D*)getNativePointer (env, obj);
    char* pixels = (char*)env->GetByteArrayElements (image, 0);
    img->set (x, y, width, height, pixels);
    env->ReleaseByteArrayElements (image, (jbyte*)pixels, 0);
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Image2D: print is called.\n";
    Image2D* img = (Image2D*)getNativePointer (env, obj);
    img->print (cout) << "\n";
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_writePng
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1writePng
  (JNIEnv* env, jobject obj, jstring file_name)
{
    cout << "Java-Image2D: writePng is called.\n";
    jboolean        copied;
    Image2D*    img  = (Image2D*)getNativePointer (env, obj);
    const char* name = env->GetStringUTFChars (file_name, &copied);
    img->writePNG (name);
    if (copied) {
        env->ReleaseStringUTFChars (file_name, name);
    }
}
