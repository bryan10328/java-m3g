#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1initialize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-VertexBuffer: initiazlize is called.\n";
    VertexBuffer* vbuf = new VertexBuffer ();
    setNativePointer (env, obj, vbuf);
    jobject entity = env->NewGlobalRef (obj);
    vbuf->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-VertexBuffer: finalize is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, obj);
    delete vbuf;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_getColors
 * Signature: ()Lorg/karlsland/m3g/VertexArray;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1getColors
  (JNIEnv* env, jobject obj)
{
    cout << "Java-VertexBuffer: getColors is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, obj);
    VertexArray* colors = vbuf->getColors ();
    return (colors != NULL) ? (jobject)colors->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_getDefaultColor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1getDefaultColor
  (JNIEnv* env, jobject obj)
{
    cout << "Java-VertexBuffer: getDefaultColor is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, obj);
    int color = vbuf->getDefaultColor ();
    return color;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_getNormals
 * Signature: ()Lorg/karlsland/m3g/VertexArray;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1getNormals
  (JNIEnv* env, jobject obj)
{
    cout << "Java-VertexBuffer: getNormals is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, obj);
    VertexArray* normals = (VertexArray*)vbuf->getNormals();
    return (normals != NULL) ? (jobject)normals->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_getPositions
 * Signature: ([F)Lorg/karlsland/m3g/VertexArray;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1getPositions
  (JNIEnv* env, jobject obj, jfloatArray scaleBias)
{
    cout << "Java-VertexBuffer: getPositions is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, obj);
    cout << "scaleBias = " << scaleBias << "\n";
    float* scale_bias = NULL;
    if (scaleBias != NULL) {
        scale_bias = env->GetFloatArrayElements (scaleBias, 0);
    }
    cout << "scale_bias = " << scale_bias << "\n";
    VertexArray* positions = vbuf->getPositions (scale_bias);
    if (scaleBias != NULL) {
        env->ReleaseFloatArrayElements (scaleBias, scale_bias, 0);
    }
    cout << "Java-VertexBuffer: getPositions is out.\n";
    return (positions != NULL) ? (jobject)positions->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_getTexCoords
 * Signature: (I[F)Lorg/karlsland/m3g/VertexArray;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1getTexCoords
  (JNIEnv* env, jobject obj, jint index, jfloatArray scaleBias)
{
    cout << "Java-VertexBuffer: getTexCoords is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, obj);
    float* scale_bias = NULL;
    if (scaleBias) {
        scale_bias = env->GetFloatArrayElements (scaleBias, 0);
    }
    VertexArray* tex_coords = vbuf->getTexCoords (index, scale_bias);
    if (scaleBias) {
        env->ReleaseFloatArrayElements (scaleBias, scale_bias, 0);
    }
    return (tex_coords != NULL) ? (jobject)tex_coords->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_getVertexCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1getVertexCount
  (JNIEnv* env, jobject obj)
{
    cout << "Java-VertexBuffer: getVetexCount is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, obj);
    int count = vbuf->getVertexCount ();
    return count;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_setColors
 * Signature: (Lorg/karlsland/m3g/VertexArray;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1setColors
  (JNIEnv* env, jobject obj, jobject colors)
{
    cout << "Java-VertexBuffer: setColors is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, obj);
    VertexArray*  colrs = (VertexArray*)getNativePointer (env, colors);
    vbuf->setColors (colrs);
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_setDefaultColor
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1setDefaultColor
  (JNIEnv* env, jobject obj, jint ARGB)
{
    cout << "Java-VertexBuffer: setDefaultColor is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, obj);
    vbuf->setDefaultColor (ARGB);
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_setNormals
 * Signature: (Lorg/karlsland/m3g/VertexArray;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1setNormals
  (JNIEnv* env, jobject obj, jobject normals)
{
    cout << "Java-VertexBuffer: setNormals is called.\n";
    VertexBuffer* vbuf   = (VertexBuffer*)getNativePointer (env, obj);
    VertexArray*  normls = (VertexArray*)getNativePointer (env, normals);
    vbuf->setNormals (normls);
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_setPositions
 * Signature: (Lorg/karlsland/m3g/VertexArray;F[F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1setPositions
  (JNIEnv* env, jobject obj, jobject positions, jfloat scale, jfloatArray bias)
{
    cout << "Java-VertexBuffer: setPositions is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, obj);
    VertexArray*  poss = (VertexArray*)getNativePointer (env, positions);
    float*        bs   = env->GetFloatArrayElements (bias, 0);
    vbuf->setPositions (poss, scale, bs);
    env->ReleaseFloatArrayElements (bias, bs, 0);
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_setTexCoords
 * Signature: (ILorg/karlsland/m3g/VertexArray;F[F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1setTexCoords
  (JNIEnv* env, jobject obj, jint index, jobject texCoords, jfloat scale, jfloatArray bias)
{
    cout << "Java-VertexBuffer: setTexCoords is called.\n";
    VertexBuffer* vbuf       = (VertexBuffer*)getNativePointer (env, obj);
    VertexArray*  tex_coords = (VertexArray*)getNativePointer (env, texCoords);
    float*        biaas      = env->GetFloatArrayElements (bias, 0);
    vbuf->setTexCoords (index, tex_coords, scale, biaas);
    env->ReleaseFloatArrayElements (bias, biaas, 0);
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-VertexBuffer: print is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, obj);
    vbuf->print (cout) << "\n";
}
