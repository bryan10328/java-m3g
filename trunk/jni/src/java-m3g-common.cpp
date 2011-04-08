#include <jni.h>
#include <iostream>
#include <typeinfo>
#include "m3g/m3g.hpp"
#include "java-Loader.hpp"
#include "java-m3g-common.hpp"
using namespace m3g;
using namespace std;



void* getNativePointer (JNIEnv* env, jobject obj)
{
    if (obj == 0) {
        return NULL;
    }
    jclass   clazz = env->GetObjectClass (obj);
    jfieldID fid   = env->GetFieldID (clazz, "nativePointer", "J");
    return (void*)env->GetLongField (obj, fid);
}


void setNativePointer (JNIEnv* env, jobject obj, void* pointer)
{
    jclass   clazz = env->GetObjectClass (obj);
    jfieldID fid   = env->GetFieldID (clazz, "nativePointer", "J");
    env->SetLongField (obj, fid, (long)pointer);
}

// 注意: Java側のオブジェクトのコンストラクタは呼ばれない
jobject allocJavaObject (JNIEnv* env, const char* name, m3g::Object* obj)
{
    jclass  clazz  = env->FindClass (name);
    jobject thiz   = env->AllocObject (clazz);
    jobject entity = env->NewWeakGlobalRef (thiz);
    obj->setExportedEntity (entity);
    return entity;
}

int    getByteArrayLength       (JNIEnv* env, jbyteArray  array)
{
    return env->GetArrayLength (array);
}

int    getShortArrayLength      (JNIEnv* env, jshortArray array)
{
    return env->GetArrayLength (array);
}

int    getintArrayLength        (JNIEnv* env, jintArray   array)
{
    return env->GetArrayLength (array);
}

int    getFloatArrayLength      (JNIEnv* env, jfloatArray array)
{
    return env->GetArrayLength (array);
}


char* getByteArrayPointer (JNIEnv* env, jbyteArray array)
{
    char* pointer = NULL;
    if (array) {
        pointer = (char*)env->GetByteArrayElements (array, 0);
    }
    return pointer;
}

short* getShortArrayPointer (JNIEnv* env, jshortArray array)
{
    short* pointer = NULL;
    if (array) {
        pointer = env->GetShortArrayElements (array, 0);
    }
    return pointer;
}
int* getIntArrayPointer (JNIEnv* env, jintArray array)
{
    int* pointer = NULL;
    if (array) {
        pointer = env->GetIntArrayElements (array, 0);
    }
    return pointer;
}
float* getFloatArrayPointer (JNIEnv* env, jfloatArray array)
{
    float* pointer = NULL;
    if (array) {
        pointer = env->GetFloatArrayElements (array, 0);
    }
    return pointer;
}

void releaseByteArrayPointer (JNIEnv* env, jbyteArray array, char* pointer)
{
    if (array && pointer) {
        env->ReleaseByteArrayElements (array, (jbyte*)pointer, 0);
    }
}
void releaseShortArrayPointer (JNIEnv* env, jshortArray array, short* pointer)
{
    if (array && pointer) {
        env->ReleaseShortArrayElements (array, pointer, 0);
    }
}
void releaseIntArrayPointer (JNIEnv* env, jintArray array, int* pointer)
{
    if (array && pointer) {
        env->ReleaseIntArrayElements (array, pointer, 0);
    }
}
void releaseFloatArrayPointer (JNIEnv* env, jfloatArray array, float* pointer)
{
    if (array && pointer) {
        env->ReleaseFloatArrayElements (array, pointer, 0);
    }
}


/**
 * m3g::Objectに相当するJavaオブジェクトを作成する.
 */
void Java_new_JavaM3GObject (JNIEnv* env, m3g::Object3D* obj)
{
        if (typeid(*obj) == typeid(AnimationController))
            Java_new_AnimationController (env, obj);
        else if (typeid(*obj) == typeid(AnimationTrack))
            Java_new_AnimationTrack (env, obj);
        else if (typeid(*obj) == typeid(Appearance))
            Java_new_Appearance (env, obj);
        else if (typeid(*obj) == typeid(Background))
            Java_new_Background (env, obj);
        else if (typeid(*obj) == typeid(Camera))
            Java_new_Camera (env, obj);
        else if (typeid(*obj) == typeid(CompositingMode))
            Java_new_CompositingMode (env, obj);
        else if (typeid(*obj) == typeid(Fog))
            Java_new_Fog (env, obj);
        else if (typeid(*obj) == typeid(Group))
            Java_new_Group (env, obj);
        else if (typeid(*obj) == typeid(Image2D))
            Java_new_Image2D (env, obj);
        else if (typeid(*obj) == typeid(KeyframeSequence))
            Java_new_KeyframeSequence (env, obj);
        else if (typeid(*obj) == typeid(Light))
            Java_new_Light (env, obj);
        else if (typeid(*obj) == typeid(Material))
            Java_new_Material (env, obj);
        else if (typeid(*obj) == typeid(Mesh))
            Java_new_Mesh (env, obj);
        else if (typeid(*obj) == typeid(MorphingMesh))
            Java_new_MorphingMesh (env, obj);
        else if (typeid(*obj) == typeid(PolygonMode))
            Java_new_PolygonMode (env, obj);
        else if (typeid(*obj) == typeid(SkinnedMesh))
            Java_new_SkinnedMesh (env, obj);
        else if (typeid(*obj) == typeid(Sprite3D))
            Java_new_Sprite3D (env, obj);
        else if (typeid(*obj) == typeid(Texture2D))
            Java_new_Texture2D (env, obj);
        else if (typeid(*obj) == typeid(TriangleStripArray))
            Java_new_TriangleStripArray (env, obj);
        else if (typeid(*obj) == typeid(VertexArray))
            Java_new_VertexArray (env, obj);
        else if (typeid(*obj) == typeid(VertexBuffer))
            Java_new_VertexBuffer (env, obj);
        else if (typeid(*obj) == typeid(World))
            Java_new_World (env, obj);
        else {
            cout << "java-m3g-common: Unknwon object.\n";
        }
}

