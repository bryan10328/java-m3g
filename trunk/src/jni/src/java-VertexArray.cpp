#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"


using namespace std;
using namespace m3g;
/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_initialize
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1initialize
  (JNIEnv* env, jobject thiz, jint numVertices, jint numComponents, jint componentSize)
{
    cout << "Java-VertexArray: initiazlize is called.\n";
    VertexArray* varry = NULL;
    __TRY__;
    varry = new VertexArray (numVertices, numComponents, componentSize);
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer  (env, thiz, varry);
    bindJavaReference (env, thiz, varry);
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexArray: finalize is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    releaseJavaReference (env, varry);
    addUsedObject (varry);
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_get
 * Signature: (II[B)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1get__II_3B
  (JNIEnv* env, jobject thiz, jint firstVertex, jint numVertices, jbyteArray values_array)
{
    cout << "Java-VertexArray: get is called.\n";
    VertexArray* varry  = (VertexArray*)getNativePointer (env, thiz);
    char*        values = getByteArrayPointer (env, values_array);
    __TRY__;
    varry->get (firstVertex, numVertices, values);
    __CATCH__;
    releaseByteArrayPointer (env, values_array, values);
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_get
 * Signature: (II[S)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1get__II_3S
  (JNIEnv* env, jobject thiz, jint firstVertex, jint numVertices, jshortArray values_array)
{
    cout << "Java-VertexArray: get is called.\n";
    VertexArray* varry  = (VertexArray*)getNativePointer (env, thiz);
    short*       values = getShortArrayPointer (env, values_array);
    __TRY__;
    varry->get (firstVertex, numVertices, values);
    __CATCH__;
    releaseShortArrayPointer (env, values_array, values);
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_get
 * Signature: (II[F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1get__II_3F
  (JNIEnv* env, jobject thiz, jint firstVertex, jint numVertices, jfloatArray values_array)
{
    cout << "Java-VertexArray: get is called.\n";
    VertexArray* varry  = (VertexArray*)getNativePointer (env, thiz);
    float*       values = getFloatArrayPointer (env, values_array);
    __TRY__;
    varry->get (firstVertex, numVertices, values);
    __CATCH__;
    releaseFloatArrayPointer (env, values_array, values);
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_getComponentCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_VertexArray_jni_1getComponentCount
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexArray: getComponentCount is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    int count = 0;
    __TRY__;
    count = varry->getComponentCount ();
    __CATCH__;
    return count;
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_getComponentType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_VertexArray_jni_1getComponentType
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexArray: getComponentType is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    int type = 0;
    __TRY__;
    type = varry->getComponentType ();
    __CATCH__;
    return type;
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_getVertexCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_VertexArray_jni_1getVertexCount
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexArray: getVertexCount is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    int count = 0;
    __TRY__;
    count = varry->getVertexCount ();
    __CATCH__;
    return count;
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_set
 * Signature: (II[B)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1set__II_3B
  (JNIEnv* env, jobject thiz, jint firstVertex, jint numVertices, jbyteArray values_array)
{
    cout << "Java-VertexArray: set(char) is called.\n";
    VertexArray* varry  = (VertexArray*)getNativePointer (env, thiz);
    char*        values = getByteArrayPointer (env, values_array);
    __TRY__;
    varry->set (firstVertex, numVertices, values);
    __CATCH__;
    releaseByteArrayPointer (env, values_array, values);
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_set
 * Signature: (II[S)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1set__II_3S
  (JNIEnv* env, jobject thiz, jint firstVertex, jint numVertices, jshortArray values)
{
    cout << "Java-VertexArray: set(short) is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    short* v = env->GetShortArrayElements (values, 0);
    __TRY__;
    varry->set (firstVertex, numVertices, v);
    __CATCH__;
    env->ReleaseShortArrayElements (values, v, 0);
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_set
 * Signature: (II[F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1set__II_3F
  (JNIEnv* env, jobject thiz, jint firstVertex, jint numVertices, jfloatArray values_array)
{
    cout << "Java-VertexArray: set(float) is called.\n";
    VertexArray* varry  = (VertexArray*)getNativePointer (env, thiz);
    float*       values = getFloatArrayPointer (env, values_array);
    __TRY__;
    varry->set (firstVertex, numVertices, values);
    __CATCH__;
    releaseFloatArrayPointer (env, values_array, values);
}

/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_VertexArray_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexArray: print is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    varry->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}


/*
 * Class:     org_karlsland_m3g_VertexArray
 * Method:    jni_print_raw_data
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_VertexArray_jni_1print_1raw_1data
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-VertexArray: print_raw_array is called.\n";
    VertexArray* varry = (VertexArray*)getNativePointer (env, thiz);
    __TRY__;
    varry->print_raw_data (cout) << "\n";
    __CATCH__;
}


void Java_new_VertexArray         (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java VertexArray.\n";
    VertexArray* varry     = dynamic_cast<VertexArray*>(obj);
    jobject      varry_obj = allocJavaObject (env, "org/karlsland/m3g/VertexArray");
    setNativePointer  (env, varry_obj, varry);
    bindJavaReference (env, varry_obj, varry);

    Java_build_Object3D    (env, varry_obj, varry);
    Java_build_VertexArray (env, varry_obj, varry);

    env->DeleteLocalRef (varry_obj);
}


void Java_build_VertexArray (JNIEnv* env, jobject varry_obj, m3g::VertexArray* varry)
{
    // nothing to do
}


