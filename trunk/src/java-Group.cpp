#include <jni.h>
#include <iostream>
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
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Group: initiazlize is called.\n";
    Group* grp = new Group ();
    setEntity (env, obj, grp);
    jobject entity = env->NewGlobalRef (obj);
    grp->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Group
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Group_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Group: finalize is called.\n";
    Group* grp = (Group*)getEntity (env, obj);
    delete grp;
}

/*
 * Class:     org_karlsland_m3g_Group
 * Method:    jni_addChild
 * Signature: (Lorg/karlsland/m3g/Node;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Group_jni_1addChild
  (JNIEnv* env, jobject obj, jobject child)
{
    cout << "Java-Group: addChild is called.\n";
    Group* grp = (Group*)getEntity (env, obj);
    Node* node = (Node*)getEntity (env, child);
    grp->addChild (node);
}

/*
 * Class:     org_karlsland_m3g_Group
 * Method:    jni_getChild
 * Signature: (I)Lorg/karlsland/m3g/Node;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Group_jni_1getChild
  (JNIEnv* env, jobject obj, jint index)
{
    cout << "Java-Group: getChild is called.\n";
    Group* grp = (Group*)getEntity (env, obj);
    Node* node = grp->getChild (index);
    return (jobject)node->getExportedEntity();
}

/*
 * Class:     org_karlsland_m3g_Group
 * Method:    jni_getChildCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Group_jni_1getChildCount
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Group: getChildCount is called.\n";
    Group* grp = (Group*)getEntity (env, obj);
    int count = grp->getChildCount ();
    return count;
}

/*
 * Class:     org_karlsland_m3g_Group
 * Method:    jni_pick
 * Signature: (IFFLorg/karlsland/m3g/Camera;Lorg/karlsland/m3g/RayIntersection;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Group_jni_1pick__IFFLorg_karlsland_m3g_Camera_2Lorg_karlsland_m3g_RayIntersection_2
  (JNIEnv* env, jobject obj, jint scope, jfloat x, jfloat y, jobject camera, jobject ri)
{
    cout << "Java-Group: pick is called.\n";
    //Group* grp = (Group*)getEntity (env, obj);
    // Not implemented.
    return false;
}

/*
 * Class:     org_karlsland_m3g_Group
 * Method:    jni_pick
 * Signature: (IFFFFFLorg/karlsland/m3g/RayIntersection;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Group_jni_1pick__IFFFFFLorg_karlsland_m3g_RayIntersection_2
  (JNIEnv* env, jobject obj, jint scope, jfloat ox, jfloat oy, jfloat dx, jfloat dy, jfloat dz, jobject ri)
{
    cout << "Java-Group: finalize is called.\n";
    //Group* grp = (Group*)getEntity (env, obj);
    // Not implemented.
    return false;
}

/*
 * Class:     org_karlsland_m3g_Group
 * Method:    jni_removeChild
 * Signature: (Lorg/karlsland/m3g/Node;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Group_jni_1removeChild
  (JNIEnv* env, jobject obj, jobject child)
{
    cout << "Java-Group: pick is called.\n";
    Group* grp = (Group*)getEntity (env, obj);
    Node* node = (Node*)getEntity (env, child);
    grp->removeChild (node);
}

/*
 * Class:     org_karlsland_m3g_Group
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Group_jni_1print
  (JNIEnv *, jobject)
{

}
