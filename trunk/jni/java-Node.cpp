#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1initialize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Node: initiazlize is called.\n";
    Node* node;
    __TRY__;
    node = new Node ();
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer (env, thiz, node);
    jobject entity = env->NewWeakGlobalRef (thiz);
    node->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Node: finalize is called.\n";
    Node* node = (Node*)getNativePointer (env, thiz);
    env->DeleteWeakGlobalRef ((jobject)node->getExportedEntity());
    __TRY__;
    delete node;
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_align
 * Signature: (Lorg/karlsland/m3g/Node;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1align
  (JNIEnv* env, jobject thiz, jobject reference)
{
    cout << "Java-Node: align is called.\n";
    Node* node   = (Node*)getNativePointer (env, thiz);
    Node* target = (Node*)getNativePointer (env, reference);
    __TRY__;
    node->align (target);
    __CATCH__;
}


/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_getAlignmentReference
 * Signature: (I)Lorg/karlsland/m3g/Node;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Node_jni_1getAlignmentReference
  (JNIEnv* env, jobject thiz, jint axis)
{
    cout << "Java-Node: getAlignmentReference is called.\n";
    Node* node = (Node*)getNativePointer (env, thiz);
    Node* ref  = NULL;
    __TRY__;
    ref = node->getAlignmentReference (axis);
    __CATCH__;
    return (ref != NULL) ? (jobject)ref->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_getAlignmentTarget
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Node_jni_1getAlignmentTarget
  (JNIEnv* env, jobject thiz, jint axis)
{
    cout << "Java-Node: getAlignmentTarget is called.\n";
    Node* node   = (Node*)getNativePointer (env, thiz);
    int   target = 0;
    __TRY__;
    target = node->getAlignmentTarget (axis);
    __CATCH__;
    return target;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_getAlphaFactor
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Node_jni_1getAlphaFactor
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Node: getAlphaFactor is called.\n";
    Node* node  = (Node*)getNativePointer (env, thiz);
    float alpha = 0;
    __TRY__;
    alpha = node->getAlphaFactor ();
    __CATCH__;
    return alpha;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_getParent
 * Signature: ()Lorg/karlsland/m3g/Node;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Node_jni_1getParent
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Node: getParent is called.\n";
    Node* node = (Node*)getNativePointer (env, thiz);
    Node* parent = NULL;
    __TRY__;
    parent = node->getParent ();
    __CATCH__;
    return (parent != NULL) ? (jobject)parent->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_getScope
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Node_jni_1getScope
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Node: getScope is called.\n";
    Node* node = (Node*)getNativePointer (env, thiz);
    int scope = 0;
    __TRY__;
    scope = node->getScope ();
    __CATCH__;
    return scope;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_getTransformTo
 * Signature: (Lorg/karlsland/m3g/Node;Lorg/karlsland/m3g/Transform;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Node_jni_1getTransformTo
  (JNIEnv* env, jobject thiz, jobject target, jobject transform)
{
    cout << "Java-Node: getTransdformTo is called.\n";
    Node*      node  = (Node*)getNativePointer (env, thiz);
    Node*      targt = (Node*)getNativePointer (env, target);
    Transform* trans = (Transform*)getNativePointer (env, transform);
    bool enable = false;
    __TRY__;
    enable = node->getTransformTo (targt, trans);
    __CATCH__;
    return enable;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_isPickingEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Node_jni_1isPickingEnabled
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Node: isPickingEnable is called.\n";
    Node* node = (Node*)getNativePointer (env, thiz);
    bool  enable = false;
    __TRY__;
    enable = node->isPickingEnabled ();
    __CATCH__;
    return enable;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_isRenderingEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Node_jni_1isRenderingEnabled
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Node: isRenderingEnabled is called.\n";
    Node* node   = (Node*)getNativePointer (env, thiz);
    bool  enable = false;
    __TRY__;
    enable = node->isRenderingEnabled ();
    __CATCH__;
    return enable;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_setAlignment
 * Signature: (Lorg/karlsland/m3g/Node;ILorg/karlsland/m3g/Node;I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1setAlignment
  (JNIEnv* env, jobject thiz, jobject zRef, jint zTarget, jobject yRef, jint yTarget)
{
    cout << "Java-Node: setAlignement is called.\n";
    Node* node  = (Node*)getNativePointer (env, thiz);
    Node* z_ref = (Node*)getNativePointer (env, zRef);
    Node* y_ref = (Node*)getNativePointer (env, yRef);
    __TRY__;
    node->setAlignment (z_ref, zTarget, y_ref, yTarget);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_setAlphaFactor
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1setAlphaFactor
  (JNIEnv* env, jobject thiz, jfloat alpha)
{
    cout << "Java-Node: setAlphaFactor is called.\n";
    Node* node = (Node*)getNativePointer (env, thiz);
    __TRY__;
    node->setAlphaFactor (alpha);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_setPickingEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1setPickingEnable
  (JNIEnv* env, jobject thiz, jboolean enable)
{
    cout << "Java-Node: setPickingEnable is called.\n";
    Node* node = (Node*)getNativePointer (env, thiz);
    __TRY__;
    node->setPickingEnable (enable);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_setRenderingEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1setRenderingEnable
  (JNIEnv* env, jobject thiz, jboolean enable)
{
    cout << "Java-Node: setRenderingEnable is called.\n";
    Node* node = (Node*)getNativePointer (env, thiz);
    __TRY__;
    node->setRenderingEnable (enable);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_setScope
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1setScope
  (JNIEnv* env, jobject thiz, jint scope)
{
    cout << "Java-Node: setScope is called.\n";
    Node* node = (Node*)getNativePointer (env, thiz);
    __TRY__;
    node->setScope (scope);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_Node_jni_1print
  (JNIEnv* env, jobject thiz)
{
    cout << "Java-Node: print is called.\n";
    Node* node = (Node*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    node->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}


void Java_build_Node (JNIEnv* env, jobject node_obj, m3g::Node* node)
{
    jclass   node_class  = env->GetObjectClass (node_obj);
    jfieldID node_parent = env->GetFieldID (node_class, "parent", "Lorg/karlsland/m3g/Node;");
    jfieldID node_yRef   = env->GetFieldID (node_class, "yRef"  , "Lorg/karlsland/m3g/Node;");
    jfieldID node_zRef   = env->GetFieldID (node_class, "zRef"  , "Lorg/karlsland/m3g/Node;");

    Node* parent = node->getParent ();
    if (parent) {
        env->SetObjectField (node_obj, node_parent, (jobject)parent->getExportedEntity());
    }

    Node* yRef = node->getAlignmentReference (Node::Y_AXIS);
    if (yRef) {
        if (yRef->getExportedEntity() == 0) {
            Java_new_JavaM3GObject (env, yRef);
        }
        env->SetObjectField (node_obj, node_yRef, (jobject)yRef->getExportedEntity());
    }

    Node* zRef = node->getAlignmentReference (Node::Z_AXIS);
    if (zRef) {
        if (zRef->getExportedEntity() == 0) {
            Java_new_JavaM3GObject (env, zRef);
        }
        env->SetObjectField (node_obj, node_zRef, (jobject)zRef->getExportedEntity());
    }

    // 注意:このほかにNode* duplicatedを持っているが
    // Rubyでしか使わないハックなので無視する
}
