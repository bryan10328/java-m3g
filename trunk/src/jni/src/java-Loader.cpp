#include <jni.h>
#include <iostream>
#include <sstream>
#include <typeinfo>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "java-Loader.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;

// これ何だっけ?
void Java_build_objects (JNIEnv* env, const std::vector<Object3D*>& objs);


/*
 * Class:     org_karlsland_m3g_Loader
 * Method:    jni_load
 * Signature: ([BI)[Lorg/karlsland/m3g/Object3D;
 */
JNIEXPORT jobjectArray JNICALL Java_org_karlsland_m3g_Loader_jni_1load___3BI
  (JNIEnv* env, jclass clazz, jbyteArray data_array, jint offset)
{
    cout << "Java-Loader: load1 is called.\n";
    vector<Object3D*> objs;
    int   length = getByteArrayLength  (env, data_array);
    char* data   = getByteArrayPointer (env, data_array);
    __TRY__;
    objs = Loader::load (length, data, offset);
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return (jobjectArray)0;
    }
    releaseByteArrayPointer (env, data_array, data);

    cout << "Java-Loader: create " << objs.size() << " Object3D array.\n";
    int          size        = objs.size();
    jclass       obj3d_class = env->FindClass ("org/karlsland/m3g/Object3D");
    jobjectArray arry_obj    = env->NewObjectArray (size, obj3d_class, NULL);
    for (int i = 0; i < size; i++) {
        env->SetObjectArrayElement (arry_obj, i, (jobject)objs[i]->getExportedEntity());
    }
    cout << "Java-Loader: created.\n";
    
    return arry_obj;
}


/*
 * Class:     org_karlsland_m3g_Loader
 * Method:    jni_load
 * Signature: (Ljava/lang/String;)[Lorg/karlsland/m3g/Object3D;
 */
JNIEXPORT jobjectArray JNICALL Java_org_karlsland_m3g_Loader_jni_1load__Ljava_lang_String_2
  (JNIEnv* env, jclass clazz, jstring fileName)
{
    cout << "Java-Loader: load2 is called.\n";
    const char* file_name = env->GetStringUTFChars (fileName, 0);
    cout << "Java-Loader: open file-name = " << file_name << "\n";

    vector<Object3D*> objs;
    __TRY__;
    objs = Loader::load (file_name);
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return (jobjectArray)0;
    }
    env->ReleaseStringUTFChars (fileName, file_name);
    cout << "Java-Loader: opened\n";

    cout << "Java-Loader: start of build java objects.\n";
    Java_build_objects (env, objs);
    cout << "Java-Loader: end of build java objects.\n";
    
    cout << "Java-Loader: create " << objs.size() << " Object3D array.\n";
    int          size        = objs.size();
    jclass       obj3d_class = env->FindClass ("org/karlsland/m3g/Object3D");
    jobjectArray arry_obj    = env->NewObjectArray (size, obj3d_class, NULL);

    for (int i = 0; i < size; i++) {
        env->SetObjectArrayElement (arry_obj, i, (jobject)objs[i]->getExportedEntity());
    }
    cout << "Java-Loader: created.\n";

    //jclass obj3d_class = env->FindClass ("org/karlsland/m3g/Object3D");
    //jobjectArray arry_obj = env->NewObjectArray (0, obj3d_class, NULL);

    return arry_obj;
}





void Java_build_objects (JNIEnv* env, const std::vector<Object3D*>& objs)
{
    for (int i = 0; i < (int)objs.size(); i++) {
        if (typeid(*objs[i]) == typeid(AnimationController))
            Java_new_AnimationController (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(AnimationTrack))
            Java_new_AnimationTrack (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(Appearance))
            Java_new_Appearance (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(Background))
            Java_new_Background (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(Camera))
            Java_new_Camera (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(CompositingMode))
            Java_new_CompositingMode (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(Fog))
            Java_new_Fog (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(Group))
            Java_new_Group (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(Image2D))
            Java_new_Image2D (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(KeyframeSequence))
            Java_new_KeyframeSequence (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(Light))
            Java_new_Light (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(Material))
            Java_new_Material (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(Mesh))
            Java_new_Mesh (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(MorphingMesh))
            Java_new_MorphingMesh (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(PolygonMode))
            Java_new_PolygonMode (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(SkinnedMesh))
            Java_new_SkinnedMesh (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(Sprite3D))
            Java_new_Sprite3D (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(Texture2D))
            Java_new_Texture2D (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(TriangleStripArray))
            Java_new_TriangleStripArray (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(VertexArray))
            Java_new_VertexArray (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(VertexBuffer))
            Java_new_VertexBuffer (env, objs[i]);
        else if (typeid(*objs[i]) == typeid(World))
            Java_new_World (env, objs[i]);
        else {
            cout << "Java-Loader: Unknwon object.\n";
        }

        jthrowable err = env->ExceptionOccurred ();
        if (err > 0) {
            env->ExceptionDescribe ();
            return;
        }
    }

}
