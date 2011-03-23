#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Group
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Group_jni_1initialize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Group: initiazlize is called.\n";
    Group* grp = NULL;
    __TRY__;
    grp = new Group ();
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer (env, thiz, grp);
    jobject entity = env->NewWeakGlobalRef (thiz);
    grp->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Group
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Group_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Group: finalize is called.\n";
    Group* grp = (Group*)getNativePointer (env, thiz);
    env->DeleteWeakGlobalRef ((jobject)grp->getExportedEntity());
    __TRY__;
    delete grp;
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Group
 * Method:    jni_addChild
 * Signature: (Lorg/karlsland/m3g/Node;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Group_jni_1addChild
  (JNIEnv* env, jobject thiz, jobject child)
{
    cout << "Java-Group: addChild is called.\n";
    Group* grp = (Group*)getNativePointer (env, thiz);
    Node*  node = (Node*)getNativePointer (env, child);
    __TRY__;
    grp->addChild (node);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Group
 * Method:    jni_getChild
 * Signature: (I)Lorg/karlsland/m3g/Node;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Group_jni_1getChild
  (JNIEnv* env, jobject thiz, jint index)
{
    cout << "Java-Group: getChild is called.\n";
    Group* grp  = (Group*)getNativePointer (env, thiz);
    Node*  node = NULL;
    __TRY__;
    node = grp->getChild (index);
    __CATCH__;
    return (node != NULL) ? (jobject)node->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Group
 * Method:    jni_getChildCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Group_jni_1getChildCount
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Group: getChildCount is called.\n";
    Group* grp = (Group*)getNativePointer (env, thiz);
    int count = 0;
    __TRY__;
    count = grp->getChildCount ();
    __CATCH__;
    return count;
}

/*
 * Class:     org_karlsland_m3g_Group
 * Method:    jni_pick
 * Signature: (IFFLorg/karlsland/m3g/Camera;Lorg/karlsland/m3g/RayIntersection;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Group_jni_1pick__IFFLorg_karlsland_m3g_Camera_2Lorg_karlsland_m3g_RayIntersection_2
  (JNIEnv* env, jobject thiz, jint scope, jfloat x, jfloat y, jobject camera, jobject rayIntersection)
{
    cout << "Java-Group: pick1 is called.\n";
    Group*           grp = (Group*)getNativePointer (env, thiz);
    Camera*          cam = (Camera*)getNativePointer (env, camera);
    RayIntersection* ri  = (RayIntersection*)getNativePointer (env, rayIntersection);
    bool picked = false;
    __TRY__;
    picked = grp->pick (scope, x, y, cam, ri);
    __CATCH__;
    return picked;
}

/*
 * Class:     org_karlsland_m3g_Group
 * Method:    jni_pick
 * Signature: (IFFFFFFLorg/karlsland/m3g/RayIntersection;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Group_jni_1pick__IFFFFFFLorg_karlsland_m3g_RayIntersection_2
(JNIEnv* env, jobject thiz, jint scope, jfloat ox, jfloat oy, jfloat oz, jfloat dx, jfloat dy, jfloat dz, jobject rayIntersection)
{
    cout << "Java-Group: pick2 is called.\n";
    Group*           grp = (Group*)getNativePointer (env, thiz);
    RayIntersection* ri  = (RayIntersection*)getNativePointer (env, rayIntersection);
    bool picked = false;
    __TRY__;
    picked = grp->pick (scope, ox, oy, oz, dx, dy, dz, ri);
    __CATCH__;
    return picked;
}

/*
 * Class:     org_karlsland_m3g_Group
 * Method:    jni_removeChild
 * Signature: (Lorg/karlsland/m3g/Node;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Group_jni_1removeChild
  (JNIEnv* env, jobject thiz, jobject child)
{
    cout << "Java-Group: removeChild is called.\n";
    Group* grp  = (Group*)getNativePointer (env, thiz);
    Node*  node = (Node*)getNativePointer (env, child);
    __TRY__;
    grp->removeChild (node);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Group
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_Group_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Group: print is called.\n";
    Group* grp = (Group*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    grp->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
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


void Java_build_Group (JNIEnv* env, jobject grp_obj, m3g::Group* grp)
{
    jclass   grp_class    = env->GetObjectClass (grp_obj);
    jfieldID grp_children = env->GetFieldID     (grp_class, "children", "Ljava/util/List;");


    jclass    children_class = env->FindClass   ("java/util/ArrayList");
    jmethodID children_init  = env->GetMethodID (children_class, "<init>", "()V");
    jmethodID children_add   = env->GetMethodID (children_class, "add", "(Ljava/lang/Object;)Z");
    jobject   children_obj   = env->NewObject   (children_class, children_init);

    for (int i = 0; i < grp->getChildCount(); i++) {
        Node* child = grp->getChild (i);
        if (child) {
            if (child->getExportedEntity() == 0) {
                Java_new_JavaM3GObject (env, child);
            }
            env->CallObjectMethod (children_obj, children_add, (jobject)child->getExportedEntity());
        }
    }

    env->SetObjectField (grp_obj, grp_children, children_obj);

}
