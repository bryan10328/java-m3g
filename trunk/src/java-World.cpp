#include <jni.h>
#include <iostream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;


/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_World_jni_1initialize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-World: initialize is called.\n";
    World* wld = new World ();
    setNativePointer (env, obj, wld);
    jobject entity = env->NewGlobalRef (obj);
    wld->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_World_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-World: finalize is called.\n";
    World* wld = (World*)getNativePointer (env, obj);
    delete wld;
}

/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_getActiveCamera
 * Signature: ()Lorg/karlsland/m3g/Camera;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_World_jni_1getActiveCamera
  (JNIEnv* env, jobject obj)
{
    cout << "Java-World: getActiveCamera is called.\n";
    World* wld = (World*)getNativePointer (env, obj);
    Camera* cam = wld->getActiveCamera ();
    return (cam != NULL) ? (jobject)cam->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_getBackground
 * Signature: ()Lorg/karlsland/m3g/Background;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_World_jni_1getBackground
  (JNIEnv* env, jobject obj)
{
    cout << "Java-World: getBackground is called.\n";
    World* wld = (World*)getNativePointer (env, obj);
    Background* bg = wld->getBackground ();
    return (bg != NULL) ? (jobject)bg->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_setActiveCamera
 * Signature: (Lorg/karlsland/m3g/Camera;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_World_jni_1setActiveCamera
  (JNIEnv* env, jobject obj, jobject camera)
{
    cout << "Java-World: setActiveCamera is called.\n";
    World* wld = (World*)getNativePointer (env, obj);
    Camera* cam = (Camera*)getNativePointer (env, camera);
    wld->setActiveCamera (cam);
}

/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_setBackground
 * Signature: (Lorg/karlsland/m3g/Background;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_World_jni_1setBackground
  (JNIEnv* env, jobject obj, jobject background)
{
    cout << "Java-World: setBackground is called.\n";
    World* wld = (World*)getNativePointer (env, obj);
    Background* bg = (Background*)getNativePointer (env, background);
    wld->setBackground (bg);
}

/*
 * Class:     org_karlsland_m3g_World
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_World_jni_1print
  (JNIEnv* env, jobject obj)
{
    cout << "Java-World: print is called.\n";
    World* wld = (World*)getNativePointer (env, obj);
    wld->print (cout) << "\n";
}
