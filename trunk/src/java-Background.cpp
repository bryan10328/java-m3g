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
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1initizlie
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getColor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getColor
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getCropHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getCropHeight
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getCropWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getCropWidth
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getCropX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getCropX
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getCropY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getCropY
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getImage
 * Signature: ()Lorg/karlsland/m3g/Image2D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Background_jni_1getImage
  (JNIEnv* env, jobject obj)
{
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getImageModeX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getImageModeX
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_getImageModeY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Background_jni_1getImageModeY
  (JNIEnv* env, jobject obj)
{
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
    return false;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_isDepthClearEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Background_jni_1isDepthClearEnabled
  (JNIEnv* env, jobject obj)
{
    return false;
}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_setColor
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1setColor
  (JNIEnv* env, jobject obj, jint color)
{

}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_setColorClearEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1setColorClearEnable
  (JNIEnv* env, jobject obj, jboolean enable)
{

}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_setCrop
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1setCrop
  (JNIEnv* env, jobject obj, jint cropX, jint cropY, jint width, jint height)
{

}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_setDepthClearEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1setDepthClearEnable
  (JNIEnv* env, jobject obj, jboolean enable)
{

}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_setImage
 * Signature: (Lorg/karlsland/m3g/Image2D;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1setImage
  (JNIEnv* env, jobject obj, jobject image)
{

}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_setImageMode
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1setImageMode
  (JNIEnv* env, jobject obj, jint modeX, jint modeY)
{

}

/*
 * Class:     org_karlsland_m3g_Background
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Background_jni_1print
  (JNIEnv *, jobject)
{

}
