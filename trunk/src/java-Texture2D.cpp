#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_initialize
 * Signature: (Lorg/karlsland/m3g/Image2D;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Texture2D_jni_1initialize
  (JNIEnv* env, jobject obj, jobject image)
{

}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Texture2D_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_getBlendColor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Texture2D_jni_1getBlendColor
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_getBlending
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Texture2D_jni_1getBlending
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_getImage
 * Signature: ()Lorg/karlsland/m3g/Image2D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Texture2D_jni_1getImage
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_getImageFilter
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Texture2D_jni_1getImageFilter
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_getLevelFilter
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Texture2D_jni_1getLevelFilter
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_getWrappingS
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Texture2D_jni_1getWrappingS
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_getWrappingT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Texture2D_jni_1getWrappingT
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_setBlendColor
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Texture2D_jni_1setBlendColor
  (JNIEnv* env, jobject obj, jint RGB)
{

}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_setBlending
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Texture2D_jni_1setBlending
  (JNIEnv* env, jobject obj, jint func)
{

}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_setFiltering
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Texture2D_jni_1setFiltering
  (JNIEnv* env, jobject obj, jint levelFilter, jint imageFilter)
{

}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_setImage
 * Signature: (Lorg/karlsland/m3g/Image2D;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Texture2D_jni_1setImage
  (JNIEnv* env, jobject obj, jobject image)
{

}

/*
 * Class:     org_karlsland_m3g_Texture2D
 * Method:    jni_setWrapping
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Texture2D_jni_1setWrapping
  (JNIEnv* env, jobject obj, jint wrapS, jint wrapT)
{

}

