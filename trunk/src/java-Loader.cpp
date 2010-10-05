#include <jni.h>
#include <iostream>
#include <typeinfo>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
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
  (JNIEnv* env, jclass clazz, jbyteArray data, jint offset)
{
    cout << "Java-Loader: load1 is called.\n";
    return (jobjectArray)NULL;
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
    objs = Loader::load ("simple.png");
    __CATCH_JOBJECT_ARRAY__;
    cout << "Java-Loader: opened\n";
    env->ReleaseStringUTFChars (fileName, file_name);

    cout << "Java-Loader: start mapping.\n";
    Java_build_objects (env, objs);
    cout << "Java-Loader: end mapping.\n";
    
    cout << "Java-Loader: create " << objs.size() << " Object3D array.\n";
    int    size  = objs.size();
    jclass array = env->FindClass ("org/karlsland/m3g/Object3D");
    cout << "array = " << array << "\n";
    jobjectArray arry = env->NewObjectArray (size, array, NULL);
    for (int i = 0; i < size; i++) {
        env->SetObjectArrayElement (arry, i, (jobject)objs[i]->getExportedEntity());
    }
    cout << "Java-Loader: created.\n";
    return arry;
}



void Java_new_AnimationController (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java AnimationController.\n";
    AnimationController* controller     = dynamic_cast<AnimationController*>(obj);
    jobject              controller_obj = allocJavaObject (env, "org/karlsland/m3g/AnimationController", controller);
    
    Java_build_Object3D            (env, controller_obj, controller);
    Java_build_AnimationController (env, controller_obj, controller);
}

void Java_new_AnimationTrack      (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java AnimationTrack.\n";
    AnimationTrack* track     = dynamic_cast<AnimationTrack*>(obj);
    jobject         track_obj = allocJavaObject (env, "org/karlsland/m3g/AnimationTrack", track);

    Java_build_Object3D       (env, track_obj, track);
    Java_build_AnimationTrack (env, track_obj, track);
}


void Java_new_Appearance          (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java Appearance.\n";
    Appearance* app     = dynamic_cast<Appearance*>(obj);
    jobject     app_obj = allocJavaObject (env, "org/karlsland/m3g/Appearance", app);

    Java_build_Object3D   (env, app_obj, app);
    Java_build_Appearance (env, app_obj, app);
}


void Java_new_Background          (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java Background.\n";
    Background* bg     = dynamic_cast<Background*>(obj);
    jobject     bg_obj = allocJavaObject (env, "org/karlsland/m3g/Background", bg);

    Java_build_Object3D   (env, bg_obj, bg);
    Java_build_Background (env, bg_obj, bg);
}


void Java_new_Camera              (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java Camera.\n";
    Camera* cam     = dynamic_cast<Camera*>(obj);
    jobject cam_obj = allocJavaObject (env, "org/karlsland/m3g/Camera", cam);

    Java_build_Object3D (env, cam_obj, cam);
    Java_build_Camera   (env, cam_obj, cam);
}


void Java_new_CompositingMode     (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java CompositingMode.\n";
    CompositingMode* cmode     = dynamic_cast<CompositingMode*>(obj);
    jobject          cmode_obj = allocJavaObject (env, "org/karlsland/m3g/CompositingMode", cmode);

    Java_build_Object3D        (env, cmode_obj, cmode);
    Java_build_CompositingMode (env, cmode_obj, cmode);
}

void Java_new_Fog                 (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java Fog.\n";
    Fog*    fog     = dynamic_cast<Fog*>(obj);
    jobject fog_obj = allocJavaObject (env, "org/karlsland/m3g/Fog", fog);

    Java_build_Object3D (env, fog_obj, fog);
    Java_build_Fog      (env, fog_obj, fog);
}

void Java_new_Group               (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java Group.\n";
    Group*   grp     = dynamic_cast<Group*>(obj);
    jobject  grp_obj = allocJavaObject (env, "org/karlsland/m3g/Group", grp);

    Java_build_Object3D      (env, grp_obj, grp);
    Java_build_Transformable (env, grp_obj, grp);
    Java_build_Node          (env, grp_obj, grp);
    Java_build_Group         (env, grp_obj, grp);
}


void Java_new_Image2D             (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java Image2D.\n";
    Image2D* img     = dynamic_cast<Image2D*>(obj);
    jobject  img_obj = allocJavaObject (env, "org/karlsland/m3g/Image2D", img);

    Java_build_Object3D (env, img_obj, img);
    Java_build_Image2D  (env, img_obj, img);
}

void Java_new_KeyframeSequence    (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java KeyframeSequence.\n";
    KeyframeSequence* key_seq     = dynamic_cast<KeyframeSequence*>(obj);
    jobject           key_seq_obj = allocJavaObject (env, "org/karlsland/m3g/KeyframeSequence", key_seq);

    Java_build_Object3D         (env, key_seq_obj, key_seq);
    Java_build_KeyframeSequence (env, key_seq_obj, key_seq);
}


void Java_new_Light               (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java Light.\n";
    Light*  lgh     = dynamic_cast<Light*>(obj);
    jobject lgh_obj = allocJavaObject (env, "org/karlsland/m3g/Light", lgh);

    Java_build_Object3D (env, lgh_obj, lgh);
    Java_build_Light    (env, lgh_obj, lgh);
}

void Java_new_Material            (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java Material.\n";
    Material* mat     = dynamic_cast<Material*>(obj);
    jobject   mat_obj = allocJavaObject (env, "org/karlsland/m3g/Material", mat);

    Java_build_Object3D (env, mat_obj, mat);
    Java_build_Material (env, mat_obj, mat);
}

void Java_new_Mesh                (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java Mesh.\n";
    Mesh*    mesh             = dynamic_cast<Mesh*>(obj);
    jobject  mesh_obj         = allocJavaObject (env, "org/karlsland/m3g/Mesh", mesh);

    Java_build_Object3D      (env, mesh_obj, mesh);
    Java_build_Transformable (env, mesh_obj, mesh);
    Java_build_Node          (env, mesh_obj, mesh);
    Java_build_Mesh          (env, mesh_obj, mesh);
}

void Java_new_MorphingMesh        (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java MorphingMesh.\n";
    MorphingMesh* mesh         = dynamic_cast<MorphingMesh*>(obj);
    jobject       mesh_obj     = allocJavaObject (env, "org/karlsland/m3g/MorphingMesh", mesh);

    Java_build_Object3D      (env, mesh_obj, mesh);
    Java_build_Transformable (env, mesh_obj, mesh);
    Java_build_Node          (env, mesh_obj, mesh);
    Java_build_Mesh          (env, mesh_obj, mesh);
    Java_build_MorphingMesh  (env, mesh_obj, mesh);
}

void Java_new_PolygonMode         (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java PolygonMode.\n";
    PolygonMode* pmode     = dynamic_cast<PolygonMode*>(obj);
    jobject      pmode_obj = allocJavaObject (env, "org/karlsland/m3g/PolygonMode", pmode);

    Java_build_Object3D    (env, pmode_obj, pmode);
    Java_build_PolygonMode (env, pmode_obj, pmode);
}

void Java_new_SkinnedMesh         (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java SkinnedMesh.\n";
    SkinnedMesh* mesh          = dynamic_cast<SkinnedMesh*>(obj);
    jobject      mesh_obj      = allocJavaObject (env, "org/karlsland/m3g/SkinnedMesh", mesh);

    Java_build_Object3D      (env, mesh_obj, mesh);
    Java_build_Transformable (env, mesh_obj, mesh);
    Java_build_Node          (env, mesh_obj, mesh);
    Java_build_Mesh          (env, mesh_obj, mesh);
    Java_build_SkinnedMesh  (env, mesh_obj, mesh);
}


void Java_new_Sprite3D            (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java Sprite3D.\n";
    Sprite3D* spr            = dynamic_cast<Sprite3D*>(obj);
    jobject   spr_obj        = allocJavaObject     (env, "org/karlsland/m3g/Sprite3D", spr);

    Java_build_Object3D (env, spr_obj, spr);
    Java_build_Sprite3D (env, spr_obj, spr);
}

void Java_new_Texture2D           (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java Texture2D.\n";
    Texture2D* tex       = dynamic_cast<Texture2D*>(obj);
    jobject    tex_obj   = allocJavaObject     (env, "org/karlsland/m3g/Texture2D", tex);

    Java_build_Object3D  (env, tex_obj, tex);
    Java_build_Texture2D (env, tex_obj, tex);

}

void Java_new_TriangleStripArray  (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java TriangleStripArray.\n";
    TriangleStripArray* tris     = dynamic_cast<TriangleStripArray*>(obj);
    jobject             tris_obj = allocJavaObject (env, "org/karlsland/m3g/TriangleStripArray", tris);

    Java_build_Object3D           (env, tris_obj, tris);
    Java_build_IndexBuffer        (env, tris_obj, tris);
    Java_build_TriangleStripArray (env, tris_obj, tris);
}

void Java_new_VertexArray         (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java VertexArray.\n";
    VertexArray* varry     = dynamic_cast<VertexArray*>(obj);
    jobject      varry_obj = allocJavaObject (env, "org/karlsland/m3g/VertexArray", varry);

    Java_build_Object3D    (env, varry_obj, varry);
    Java_build_VertexArray (env, varry_obj, varry);
}

void Java_new_VertexBuffer        (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java VertexBuffer.\n";
    VertexBuffer* vbuf     = dynamic_cast<VertexBuffer*>(obj);
    jobject       vbuf_obj = allocJavaObject (env, "org/karlsland/m3g/VertexBuffer", vbuf);

    Java_build_Object3D     (env, vbuf_obj, vbuf);
    Java_build_VertexBuffer (env, vbuf_obj, vbuf);
}

void Java_new_World               (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java World.\n";
    World*  wld     = dynamic_cast<World*>(obj);
    jobject wld_obj = allocJavaObject (env, "org/karlsland/m3g/World", wld);

    Java_build_Object3D (env, wld_obj, wld);
    Java_build_World    (env, wld_obj, wld);
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
    }

}
