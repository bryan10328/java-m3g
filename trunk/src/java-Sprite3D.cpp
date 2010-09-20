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

}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1finalize
  (JNIEnv* env, jobject obj)
{

}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_getAppearance
 * Signature: ()Lorg/karlsland/m3g/Appearance;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1getAppearance
  (JNIEnv* env, jobject obj)
{
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_getCropHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1getCropHeight
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_getCropWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1getCropWidth
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_getCropX
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1getCropX
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_getCropY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1getCropY
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_getImage
 * Signature: ()Lorg/karlsland/m3g/Image2D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1getImage
  (JNIEnv* env, jobject obj)
{
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_isScaled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1isScaled
  (JNIEnv* env, jobject obj)
{
    return false;
}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_setAppearance
 * Signature: (Lorg/karlsland/m3g/Appearance;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1setAppearance
  (JNIEnv* env, jobject obj, jobject appearance)
{

}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_setCrop
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1setCrop
  (JNIEnv* env, jobject obj, jint cropX, jint cropY, jint width, jint height)
{

}

/*
 * Class:     org_karlsland_m3g_Sprite3D
 * Method:    jni_setImage
 * Signature: (Lorg/karlsland/m3g/Image2D;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Sprite3D_jni_1setImage
  (JNIEnv* env, jobject obj, jobject image)
{

}

