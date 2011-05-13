#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;


/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_World_jni_1initialize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-World: initialize is called.\n";
    World* wld = NULL;
    __TRY__;
    wld = new World ();
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer  (env, thiz, wld);
    bindJavaReference (env, thiz, wld);
}

/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_World_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-World: finalize is called.\n";
    World* wld = (World*)getNativePointer (env, thiz);
    releaseJavaReference (env, wld);
    addUsedObject (wld);
}

/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_getActiveCamera
 * Signature: ()Lorg/karlsland/m3g/Camera;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_World_jni_1getActiveCamera
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-World: getActiveCamera is called.\n";
    World*  wld = (World*)getNativePointer (env, thiz);
    Camera* cam = NULL;
    __TRY__;
    cam = wld->getActiveCamera ();
    __CATCH__;
    return getJavaReference (env, cam);
}

/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_getBackground
 * Signature: ()Lorg/karlsland/m3g/Background;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_World_jni_1getBackground
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-World: getBackground is called.\n";
    World*      wld = (World*)getNativePointer (env, thiz);
    Background* bg  = NULL;
    __TRY__;
    bg = wld->getBackground ();
    __CATCH__;
    return getJavaReference (env, bg);
}

/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_setActiveCamera
 * Signature: (Lorg/karlsland/m3g/Camera;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_World_jni_1setActiveCamera
  (JNIEnv* env, jobject thiz, jobject camera)
{
    cout << "Java-World: setActiveCamera is called.\n";
    World*  wld = (World*) getNativePointer (env, thiz);
    Camera* cam = (Camera*)getNativePointer (env, camera);
    __TRY__;
    wld->setActiveCamera (cam);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_setBackground
 * Signature: (Lorg/karlsland/m3g/Background;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_World_jni_1setBackground
  (JNIEnv* env, jobject thiz, jobject background)
{
    cout << "Java-World: setBackground is called.\n";
    World*      wld = (World*)     getNativePointer (env, thiz);
    Background* bg  = (Background*)getNativePointer (env, background);
    __TRY__;
    wld->setBackground (bg);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_World_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-World: print is called.\n";
    World* wld = (World*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    wld->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}

void Java_new_World (JNIEnv* env, m3g::Object3D* obj)
{
    cout << "Java-Loader: build java World.\n";
    World*  wld     = dynamic_cast<World*>(obj);
    jobject wld_obj = allocJavaObject (env, "org/karlsland/m3g/World");
    setNativePointer  (env, wld_obj, wld);
    bindJavaReference (env, wld_obj, wld);

    Java_build_Object3D      (env, wld_obj, wld);
    Java_build_Transformable (env, wld_obj, wld);
    Java_build_Node          (env, wld_obj, wld);
    Java_build_Group         (env, wld_obj, wld);
    Java_build_World         (env, wld_obj, wld);

    env->DeleteLocalRef (wld_obj);
}


void Java_build_World (JNIEnv* env, jobject wld_obj, m3g::World* wld)
{
    jclass   wld_class         = env->GetObjectClass (wld_obj);
    jfieldID wld_active_camera = env->GetFieldID     (wld_class, "activeCamera", "Lorg/karlsland/m3g/Camera;");
    jfieldID wld_background    = env->GetFieldID     (wld_class, "background"  , "Lorg/karlsland/m3g/Background;");

    Camera* cam = wld->getActiveCamera ();
    if (cam) {
        env->SetObjectField (wld_obj, wld_active_camera, getJavaReference(env, cam));
    }

    Background* bg = wld->getBackground ();
    if (bg) {
        env->SetObjectField (wld_obj, wld_background, getJavaReference(env, bg));
    }

    env->DeleteLocalRef (wld_class);
}

