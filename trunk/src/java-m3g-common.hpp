#ifndef __JAVA_M3G_COMMON_HPP__
#define __JAVA_M3G_COMMON_HPP__

#include "m3g.hpp"


static inline 
void* getNativePointer (JNIEnv* env, jobject obj)
{
    if (obj == 0) {
        return NULL;
    }
    jclass   clazz = env->GetObjectClass (obj);
    jfieldID fid   = env->GetFieldID (clazz, "nativePointer", "J");
    return (void*)env->GetLongField (obj, fid);
}

static inline
void setNativePointer (JNIEnv* env, jobject obj, void* entity)
{
    jclass   clazz = env->GetObjectClass (obj);
    jfieldID fid   = env->GetFieldID (clazz, "nativePointer", "J");
    env->SetLongField (obj, fid, (long)entity);
}

// 注意: Java側のオブジェクトのコンストラクタは呼ばれない
static inline
jobject allocJavaObject (JNIEnv* env, const char* name, m3g::Object* obj)
{
    jclass  clazz  = env->FindClass (name);
    jobject thiz   = env->AllocObject (clazz);
    jobject entity = env->NewWeakGlobalRef (thiz);
    obj->setExportedEntity (entity);
    return entity;
}


#define __TRY__ try {
#define __CATCH_VOID__ } \
        catch (const m3g::ArithmeticException&       e) { jclass clazz = env->FindClass("java/lang/ArithmaticException"            ); env->ThrowNew(clazz, e.what()); return; } \
        catch (const m3g::IllegalArgumentException&  e) { jclass clazz = env->FindClass("java/lang/IllegalArgumentException"       ); env->ThrowNew(clazz, e.what()); return; } \
        catch (const m3g::IllegalStateException&     e) { jclass clazz = env->FindClass("java/lang/IllegalStateException"          ); env->ThrowNew(clazz, e.what()); return; } \
        catch (const m3g::IndexOutOfBoundsException& e) { jclass clazz = env->FindClass("java/lang/IndexOutOfBoundsException"      ); env->ThrowNew(clazz, e.what()); return; } \
        catch (const m3g::IOException&               e) { jclass clazz = env->FindClass("java/lang/IOException"                    ); env->ThrowNew(clazz, e.what()); return; } \
        catch (const m3g::NullPointerException&      e) { jclass clazz = env->FindClass("java/lang/NullPointerException"           ); env->ThrowNew(clazz, e.what()); return; } \
        catch (const m3g::SecurityException&         e) { jclass clazz = env->FindClass("java/lang/SecurityException"              ); env->ThrowNew(clazz, e.what()); return; } \
        catch (const m3g::NotImplementedException&   e) { jclass clazz = env->FindClass("java/lang/UnsupportedOperationException"  ); env->ThrowNew(clazz, e.what()); return; } \
        catch (const m3g::OpenGLException&           e) { jclass clazz = env->FindClass("java/lang/UnsupportedOperationException"  ); env->ThrowNew(clazz, e.what()); return; } \
        catch (const m3g::InternalException&         e) { jclass clazz = env->FindClass("java/lang/UnsupportedOperationException"  ); env->ThrowNew(clazz, e.what()); return; } \
        catch (...)                                     { jclass clazz = env->FindClass("java/lang/UnsupportedOperationException"  ); env->ThrowNew(clazz, "Unknown exception."); return; }
#define __CATCH_INT__ } \
        catch (const m3g::ArithmeticException&       e) { jclass clazz = env->FindClass("java/lang/ArithmaticException"            ); env->ThrowNew(clazz, e.what()); return 0; } \
        catch (const m3g::IllegalArgumentException&  e) { jclass clazz = env->FindClass("java/lang/IllegalArgumentException"       ); env->ThrowNew(clazz, e.what()); return 0; } \
        catch (const m3g::IllegalStateException&     e) { jclass clazz = env->FindClass("java/lang/IllegalStateException"          ); env->ThrowNew(clazz, e.what()); return 0; } \
        catch (const m3g::IndexOutOfBoundsException& e) { jclass clazz = env->FindClass("java/lang/IndexOutOfBoundsException"      ); env->ThrowNew(clazz, e.what()); return 0; } \
        catch (const m3g::IOException&               e) { jclass clazz = env->FindClass("java/lang/IOException"                    ); env->ThrowNew(clazz, e.what()); return 0; } \
        catch (const m3g::NullPointerException&      e) { jclass clazz = env->FindClass("java/lang/NullPointerException"           ); env->ThrowNew(clazz, e.what()); return 0; } \
        catch (const m3g::SecurityException&         e) { jclass clazz = env->FindClass("java/lang/SecurityException"              ); env->ThrowNew(clazz, e.what()); return 0; } \
        catch (const m3g::NotImplementedException&   e) { jclass clazz = env->FindClass("java/lang/UnsupportedOperationException"  ); env->ThrowNew(clazz, e.what()); return 0; } \
        catch (const m3g::OpenGLException&           e) { jclass clazz = env->FindClass("java/lang/UnsupportedOperationException"  ); env->ThrowNew(clazz, e.what()); return 0; } \
        catch (const m3g::InternalException&         e) { jclass clazz = env->FindClass("java/lang/UnsupportedOperationException"  ); env->ThrowNew(clazz, e.what()); return 0; } \
        catch (...)                                     { jclass clazz = env->FindClass("java/lang/UnsupportedOperationException"  ); env->ThrowNew(clazz, "Unknown exception."); return 0; } 
#define __CATCH_BOOL__ __CATCH_INT__
#define __CATCH_FLOAT__ __CATCH_INT__
#define __CATCH_JOBJECT__ } \
        catch (const m3g::ArithmeticException&       e) { jclass clazz = env->FindClass("java/lang/ArithmaticException"            ); env->ThrowNew(clazz, e.what()); return (jobject)NULL; } \
        catch (const m3g::IllegalArgumentException&  e) { jclass clazz = env->FindClass("java/lang/IllegalArgumentException"       ); env->ThrowNew(clazz, e.what()); return (jobject)NULL; } \
        catch (const m3g::IllegalStateException&     e) { jclass clazz = env->FindClass("java/lang/IllegalStateException"          ); env->ThrowNew(clazz, e.what()); return (jobject)NULL; } \
        catch (const m3g::IndexOutOfBoundsException& e) { jclass clazz = env->FindClass("java/lang/IndexOutOfBoundsException"      ); env->ThrowNew(clazz, e.what()); return (jobject)NULL; } \
        catch (const m3g::IOException&               e) { jclass clazz = env->FindClass("java/lang/IOException"                    ); env->ThrowNew(clazz, e.what()); return (jobject)NULL; } \
        catch (const m3g::NullPointerException&      e) { jclass clazz = env->FindClass("java/lang/NullPointerException"           ); env->ThrowNew(clazz, e.what()); return (jobject)NULL; } \
        catch (const m3g::SecurityException&         e) { jclass clazz = env->FindClass("java/lang/SecurityException"              ); env->ThrowNew(clazz, e.what()); return (jobject)NULL; } \
        catch (const m3g::NotImplementedException&   e) { jclass clazz = env->FindClass("java/lang/UnsupportedOperationException"  ); env->ThrowNew(clazz, e.what()); return (jobject)NULL; } \
        catch (const m3g::OpenGLException&           e) { jclass clazz = env->FindClass("java/lang/UnsupportedOperationException"  ); env->ThrowNew(clazz, e.what()); return (jobject)NULL; } \
        catch (const m3g::InternalException&         e) { jclass clazz = env->FindClass("java/lang/UnsupportedOperationException"  ); env->ThrowNew(clazz, e.what()); return (jobject)NULL; } \
        catch (...)                                     { jclass clazz = env->FindClass("java/lang/UnsupportedOperationException"  ); env->ThrowNew(clazz, "Unknown exception."); return (jobject)NULL; } 
#define __CATCH_JOBJECT_ARRAY__ } \
        catch (const m3g::ArithmeticException&       e) { jclass clazz = env->FindClass("java/lang/ArithmaticException"            ); env->ThrowNew(clazz, e.what()); return (jobjectArray)NULL; } \
        catch (const m3g::IllegalArgumentException&  e) { jclass clazz = env->FindClass("java/lang/IllegalArgumentException"       ); env->ThrowNew(clazz, e.what()); return (jobjectArray)NULL; } \
        catch (const m3g::IllegalStateException&     e) { jclass clazz = env->FindClass("java/lang/IllegalStateException"          ); env->ThrowNew(clazz, e.what()); return (jobjectArray)NULL; } \
        catch (const m3g::IndexOutOfBoundsException& e) { jclass clazz = env->FindClass("java/lang/IndexOutOfBoundsException"      ); env->ThrowNew(clazz, e.what()); return (jobjectArray)NULL; } \
        catch (const m3g::IOException&               e) { jclass clazz = env->FindClass("java/lang/IOException"                    ); env->ThrowNew(clazz, e.what()); return (jobjectArray)NULL; } \
        catch (const m3g::NullPointerException&      e) { jclass clazz = env->FindClass("java/lang/NullPointerException"           ); env->ThrowNew(clazz, e.what()); return (jobjectArray)NULL; } \
        catch (const m3g::SecurityException&         e) { jclass clazz = env->FindClass("java/lang/SecurityException"              ); env->ThrowNew(clazz, e.what()); return (jobjectArray)NULL; } \
        catch (const m3g::NotImplementedException&   e) { jclass clazz = env->FindClass("java/lang/UnsupportedOperationException"  ); env->ThrowNew(clazz, e.what()); return (jobjectArray)NULL; } \
        catch (const m3g::OpenGLException&           e) { jclass clazz = env->FindClass("java/lang/UnsupportedOperationException"  ); env->ThrowNew(clazz, e.what()); return (jobjectArray)NULL; } \
        catch (const m3g::InternalException&         e) { jclass clazz = env->FindClass("java/lang/UnsupportedOperationException"  ); env->ThrowNew(clazz, e.what()); return (jobjectArray)NULL; } \
        catch (...)                                     { jclass clazz = env->FindClass("java/lang/UnsupportedOperationException"  ); env->ThrowNew(clazz, "Unknown exception."); return (jobjectArray)NULL; } 


void Java_build_AnimationController (JNIEnv* env, jobject controller_obj, m3g::AnimationController* controller);
void Java_build_AnimationTrack      (JNIEnv* env, jobject track_obj     , m3g::AnimationTrack*      track);
void Java_build_Appearance          (JNIEnv* env, jobject app_obj       , m3g::Appearance*          app);
void Java_build_Background          (JNIEnv* env, jobject bg_obj        , m3g::Background*          bg);
void Java_build_Camera              (JNIEnv* env, jobject cam_obj       , m3g::Camera*              cam);
void Java_build_CompositingMode     (JNIEnv* env, jobject cmode_obj     , m3g::CompositingMode*     cmode);
void Java_build_Fog                 (JNIEnv* env, jobject fog_obj       , m3g::Fog*                 fog);
void Java_build_Graphics3D          (JNIEnv* env, jobject g3d_obj       , m3g::Graphics3D*          g3d);
void Java_build_Group               (JNIEnv* env, jobject grp_obj       , m3g::Group*               grp);
void Java_build_Image2D             (JNIEnv* env, jobject img_obj       , m3g::Image2D*             img);
void Java_build_IndexBuffer         (JNIEnv* env, jobject ibuf_obj      , m3g::IndexBuffer*         ibuf);
void Java_build_KeyframeSequence    (JNIEnv* env, jobject key_seq_obj   , m3g::KeyframeSequence*    key_seq);
void Java_build_Light               (JNIEnv* env, jobject lgh_obj       , m3g::Light*               lgh);
void Java_build_Material            (JNIEnv* env, jobject mat_obj       , m3g::Material*            mat);
void Java_build_Mesh                (JNIEnv* env, jobject mesh_obj      , m3g::Mesh*                mesh);
void Java_build_MorphingMesh        (JNIEnv* env, jobject mesh_obj      , m3g::MorphingMesh*        mesh);
void Java_build_Node                (JNIEnv* env, jobject node_obj      , m3g::Node*                node);
void Java_build_Object3D            (JNIEnv* env, jobject obj3d_obj     , m3g::Object3D*            obj3d);
void Java_build_PolygonMode         (JNIEnv* env, jobject pmode_obj     , m3g::PolygonMode*         pmode);
void Java_build_RayIntersection     (JNIEnv* env, jobject ri_obj        , m3g::RayIntersection*     ri);
void Java_build_SkinnedMesh         (JNIEnv* env, jobject mesh_obj      , m3g::SkinnedMesh*         mesh);
void Java_build_Sprite3D            (JNIEnv* env, jobject spr_obj       , m3g::Sprite3D*            spr);
void Java_build_Texture2D           (JNIEnv* env, jobject tex_obj       , m3g::Texture2D*           tex);
void Java_build_Transform           (JNIEnv* env, jobject trans_obj     , m3g::Transform*           trans);
void Java_build_Transformable       (JNIEnv* env, jobject trans_obj     , m3g::Transformable*       trans);
void Java_build_TriangleStripArray  (JNIEnv* env, jobject tris_obj      , m3g::TriangleStripArray*  tris);
void Java_build_VertexArray         (JNIEnv* env, jobject varry_obj     , m3g::VertexArray*         varry);
void Java_build_VertexBuffer        (JNIEnv* env, jobject vbuf_obj      , m3g::VertexBuffer*        vbuf);
void Java_build_World               (JNIEnv* env, jobject wld_obj       , m3g::World*               wld);




#endif

