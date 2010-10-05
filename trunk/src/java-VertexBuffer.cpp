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
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexBuffer: initiazlize is called.\n";
    VertexBuffer* vbuf;
    __TRY__;
    vbuf = new VertexBuffer ();
    __CATCH_VOID__;
    setNativePointer (env, thiz, vbuf);
    jobject entity = env->NewWeakGlobalRef (thiz);
    vbuf->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexBuffer: finalize is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, thiz);
    env->DeleteWeakGlobalRef ((jobject)vbuf->getExportedEntity());
    __TRY__;
    delete vbuf;
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_getColors
 * Signature: ()Lorg/karlsland/m3g/VertexArray;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1getColors
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexBuffer: getColors is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, thiz);
    VertexArray*  colors;
    __TRY__;
    colors = vbuf->getColors ();
    __CATCH_JOBJECT__;
    return (colors != NULL) ? (jobject)colors->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_getDefaultColor
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1getDefaultColor
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexBuffer: getDefaultColor is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, thiz);
    int color;
    __TRY__;
    color = vbuf->getDefaultColor ();
    __CATCH_INT__;
    return color;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_getNormals
 * Signature: ()Lorg/karlsland/m3g/VertexArray;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1getNormals
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexBuffer: getNormals is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, thiz);
    VertexArray*  normals;
    __TRY__;
    normals = vbuf->getNormals();
    __CATCH_JOBJECT__;
    return (normals != NULL) ? (jobject)normals->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_getPositions
 * Signature: ([F)Lorg/karlsland/m3g/VertexArray;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1getPositions
  (JNIEnv* env, jobject thiz, jfloatArray scaleBias)
{
    cout << "Java-VertexBuffer: getPositions is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, thiz);
    float* scale_bias = NULL;
    if (scaleBias != NULL) {
        scale_bias = env->GetFloatArrayElements (scaleBias, 0);
    }
    VertexArray* positions;
    __TRY__;
    positions = vbuf->getPositions (scale_bias);
    __CATCH_JOBJECT__;
    if (scaleBias != NULL) {
        env->ReleaseFloatArrayElements (scaleBias, scale_bias, 0);
    }
    return (positions != NULL) ? (jobject)positions->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_getTexCoords
 * Signature: (I[F)Lorg/karlsland/m3g/VertexArray;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1getTexCoords
  (JNIEnv* env, jobject thiz, jint index, jfloatArray scaleBias)
{
    cout << "Java-VertexBuffer: getTexCoords is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, thiz);
    float* scale_bias = NULL;
    if (scaleBias) {
        scale_bias = env->GetFloatArrayElements (scaleBias, 0);
    }
    VertexArray* tex_coords;
    __TRY__;
    tex_coords = vbuf->getTexCoords (index, scale_bias);
    __CATCH_JOBJECT__;
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
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexBuffer: getVetexCount is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, thiz);
    int count;
    __TRY__;
    count = vbuf->getVertexCount ();
    __CATCH_INT__;
    return count;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_setColors
 * Signature: (Lorg/karlsland/m3g/VertexArray;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1setColors
  (JNIEnv* env, jobject thiz, jobject colors)
{
    cout << "Java-VertexBuffer: setColors is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, thiz);
    VertexArray*  colrs = (VertexArray*)getNativePointer (env, colors);
    __TRY__;
    vbuf->setColors (colrs);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_setDefaultColor
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1setDefaultColor
  (JNIEnv* env, jobject thiz, jint ARGB)
{
    cout << "Java-VertexBuffer: setDefaultColor is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, thiz);
    __TRY__;
    vbuf->setDefaultColor (ARGB);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_setNormals
 * Signature: (Lorg/karlsland/m3g/VertexArray;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1setNormals
  (JNIEnv* env, jobject thiz, jobject normals)
{
    cout << "Java-VertexBuffer: setNormals is called.\n";
    VertexBuffer* vbuf   = (VertexBuffer*)getNativePointer (env, thiz);
    VertexArray*  normls = (VertexArray*)getNativePointer (env, normals);
    __TRY__;
    vbuf->setNormals (normls);
    __CATCH_VOID__;
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_setPositions
 * Signature: (Lorg/karlsland/m3g/VertexArray;F[F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1setPositions
  (JNIEnv* env, jobject thiz, jobject positions, jfloat scale, jfloatArray bias)
{
    cout << "Java-VertexBuffer: setPositions is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, thiz);
    VertexArray*  poss = (VertexArray*)getNativePointer (env, positions);
    float*        bs   = env->GetFloatArrayElements (bias, 0);
    __TRY__;
    vbuf->setPositions (poss, scale, bs);
    __CATCH_VOID__;
    env->ReleaseFloatArrayElements (bias, bs, 0);
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_setTexCoords
 * Signature: (ILorg/karlsland/m3g/VertexArray;F[F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1setTexCoords
  (JNIEnv* env, jobject thiz, jint index, jobject texCoords, jfloat scale, jfloatArray bias)
{
    cout << "Java-VertexBuffer: setTexCoords is called.\n";
    VertexBuffer* vbuf       = (VertexBuffer*)getNativePointer (env, thiz);
    VertexArray*  tex_coords = (VertexArray*)getNativePointer (env, texCoords);
    float*        biaas      = env->GetFloatArrayElements (bias, 0);
    __TRY__;
    vbuf->setTexCoords (index, tex_coords, scale, biaas);
    __CATCH_VOID__;
    env->ReleaseFloatArrayElements (bias, biaas, 0);
}

/*
 * Class:     org_karlsland_m3g_VertexBuffer
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexBuffer_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexBuffer: print is called.\n";
    VertexBuffer* vbuf = (VertexBuffer*)getNativePointer (env, thiz);
    __TRY__;
    vbuf->print (cout) << "\n";
    __CATCH_VOID__;
}

void Java_build_VertexBuffer (JNIEnv* env, jobject vbuf_obj, m3g::VertexBuffer* vbuf)
{
    jclass   vbuf_class      = env->GetObjectClass (vbuf_obj);
    jfieldID vbuf_positions  = env->GetFieldID     (vbuf_class, "positions", "Lorg/karlsland/m3g/VertexArray;");
    jfieldID vbuf_normals    = env->GetFieldID     (vbuf_class, "normals"  , "Lorg/karlsland/m3g/VertexArray;");
    jfieldID vbuf_colors     = env->GetFieldID     (vbuf_class, "colors"   , "Lorg/karlsland/m3g/VertexArray;");
    jfieldID vbuf_tex_coords = env->GetFieldID     (vbuf_class, "texCoords", "Ljava/util/List;");

    VertexArray* positions = vbuf->getPositions (0);
    if (positions) {
        env->SetObjectField (vbuf_obj, vbuf_positions, (jobject)positions->getExportedEntity());
    }

    VertexArray* normals = vbuf->getNormals ();
    if (normals) {
        env->SetObjectField (vbuf_obj, vbuf_normals, (jobject)normals->getExportedEntity());
    }

    VertexArray* colors = vbuf->getColors ();
    if (colors) {
        env->SetObjectField (vbuf_obj, vbuf_colors, (jobject)colors->getExportedEntity());
    }

    jclass    tex_coords_class = env->FindClass   ("java/util/ArrayList");
    jmethodID tex_coords_init  = env->GetMethodID (tex_coords_class, "<init>", "()V");
    jmethodID tex_coords_add   = env->GetMethodID (tex_coords_class, "add", "(Lorg/karlsland/m3g/VertexArray;)Z");
    jobject   tex_coords_obj   = env->NewObject   (tex_coords_class, tex_coords_init);
    
    for (int i = 0; i < MAX_TEXTURE_UNITS; i++) {
        VertexArray* varry = vbuf->getTexCoords (i, 0);
        if (varry) {
            env->CallObjectMethod (tex_coords_obj, tex_coords_add, (jobject)varry->getExportedEntity());
        } else {
            env->CallObjectMethod (tex_coords_obj, tex_coords_add, (jobject)0);
        }
    }

    env->SetObjectField (vbuf_obj, vbuf_tex_coords, tex_coords_obj);

}
