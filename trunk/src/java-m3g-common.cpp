#include <jni.h>
#include <iostream>
#include <typeinfo>
#include "m3g.hpp"
#include "java-Loader.hpp"
#include "java-m3g-common.hpp"
using namespace m3g;
using namespace std;

// 注意: M3Gの仕様では「使われる方」が必ずファイルの先頭に近い方に入っている。
// 従って前からデコードしていけばgetExportedEntity()は必ず0でないentityを返す事が保証されている。



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

