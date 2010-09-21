#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1initialize
  (JNIEnv* env, jobject obj);

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1finalize
  (JNIEnv* env, jobject obj);

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_getCompositingMode
 * Signature: ()Lorg/karlsland/m3g/CompositingMode;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Appearance_jni_1getCompositingMode
  (JNIEnv* env, jobject obj);

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_getFog
 * Signature: ()Lorg/karlsland/m3g/Fog;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Appearance_jni_1getFog
  (JNIEnv* env, jobject obj)
{
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_getLayer
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Appearance_jni_1getLayer
  (JNIEnv* env, jobject obj)
{
    return 0;
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_getMaterial
 * Signature: ()Lorg/karlsland/m3g/Material;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Appearance_jni_1getMaterial
  (JNIEnv* env, jobject obj)
{
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_getPolygonMode
 * Signature: ()Lorg/karlsland/m3g/PolygonMode;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Appearance_jni_1getPolygonMode
  (JNIEnv* env, jobject obj)
{
    return (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_getTexture
 * Signature: (I)Lorg/karlsland/m3g/Texture2D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Appearance_jni_1getTexture
  (JNIEnv* env, jobject obj, jint)
{
    return (jobject)NULL;
}


/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_setCompositingMode
 * Signature: (Lorg/karlsland/m3g/CompositingMode;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1setCompositingMode
  (JNIEnv* env, jobject obj, jobject compositingMode)
{

}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_setFog
 * Signature: (Lorg/karlsland/m3g/Fog;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1setFog
  (JNIEnv* env, jobject obj, jobject fog)
{

}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_setLayer
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1setLayer
  (JNIEnv* env, jobject obj, jint layer)
{

}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_setMaterial
 * Signature: (Lorg/karlsland/m3g/Material;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1setMaterial
  (JNIEnv* env, jobject obj, jobject material)
{

}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_setPolygonMode
 * Signature: (Lorg/karlsland/m3g/PolygonMode;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1setPolygonMode
  (JNIEnv* env, jobject obj, jobject polygonMode)
{

}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_setTexture
 * Signature: (ILorg/karlsland/m3g/Texture2D;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1setTexture
  (JNIEnv* env, jobject obj, jint index, jobject texture)
{

}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1print
  (JNIEnv *, jobject)
{

}

