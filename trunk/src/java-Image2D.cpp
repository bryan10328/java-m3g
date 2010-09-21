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
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1initialize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_getFormat
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Image2D_jni_1getFormat
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_getHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Image2D_jni_1getHeight
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_getWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Image2D_jni_1getWidth
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_isMutable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Image2D_jni_1isMutable
  (JNIEnv* env, jobject obj)
{
    return false;
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_set
 * Signature: (IIII[B)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1set
  (JNIEnv* env, jobject obj, jint x, jint y, jint width, jint height, jbyteArray image)
{

}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1print
  (JNIEnv *, jobject)
{
}

/*
 * Class:     org_karlsland_m3g_Image2D
 * Method:    jni_writePng
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Image2D_jni_1writePng
  (JNIEnv *, jobject, jstring)
{

}
