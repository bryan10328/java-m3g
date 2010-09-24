#include <jni.h>
#include <iostream>
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
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Node: initiazlize is called.\n";
    Node* node = new Node ();
    setNativePointer (env, obj, node);
    jobject entity = env->NewGlobalRef (obj);
    node->setExportedEntity (entity);
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1finalize
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Node: finalize is called.\n";
    Node* node = (Node*)getNativePointer (env, obj);
    delete node;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_align
 * Signature: (Lorg/karlsland/m3g/Node;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1align
  (JNIEnv* env, jobject obj, jobject reference)
{
    cout << "Java-Node: align is called.\n";
    Node* node = (Node*)getNativePointer (env, obj);
    Node* target = (Node*)getNativePointer (env, reference);
    node->align (target);
}


/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_getAlignmentReference
 * Signature: (I)Lorg/karlsland/m3g/Node;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Node_jni_1getAlignmentReference
  (JNIEnv* env, jobject obj, jint axis)
{
    cout << "Java-Node: getAlignmentReference is called.\n";
    Node* node = (Node*)getNativePointer (env, obj);
    Node* ref = node->getAlignmentReference (axis);
    return (ref != NULL) ? (jobject)ref->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_getAlignmentTarget
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Node_jni_1getAlignmentTarget
  (JNIEnv* env, jobject obj, jint axis)
{
    cout << "Java-Node: getAlignmentTarget is called.\n";
    Node* node = (Node*)getNativePointer (env, obj);
    int target = node->getAlignmentTarget (axis);
    return target;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_getAlphaFactor
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_org_karlsland_m3g_Node_jni_1getAlphaFactor
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Node:  is called.\n";
    Node* node = (Node*)getNativePointer (env, obj);
    float alpha = node->getAlphaFactor ();
    return alpha;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_getParent
 * Signature: ()Lorg/karlsland/m3g/Node;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Node_jni_1getParent
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Node: getParent is called.\n";
    Node* node = (Node*)getNativePointer (env, obj);
    Node* parent = node->getParent ();
    return (parent != NULL) ? (jobject)parent->getExportedEntity() : (jobject)NULL;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_getScope
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Node_jni_1getScope
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Node: getScope is called.\n";
    Node* node = (Node*)getNativePointer (env, obj);
    int scope = node->getScope ();
    return scope;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_getTransformTo
 * Signature: (Lorg/karlsland/m3g/Node;Lorg/karlsland/m3g/Transform;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Node_jni_1getTransformTo
  (JNIEnv* env, jobject obj, jobject target, jobject transform)
{
    cout << "Java-Node: getTransdformTo is called.\n";
    Node* node = (Node*)getNativePointer (env, obj);
    Node* targt = (Node*)getNativePointer (env, target);
    Transform* trans = (Transform*)getNativePointer (env, transform);
    bool enable = node->getTransformTo (targt, trans);
    return enable;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_isPickingEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Node_jni_1isPickingEnabled
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Node: isPickingEnable is called.\n";
    Node* node = (Node*)getNativePointer (env, obj);
    bool enable = node->isPickingEnabled ();
    return enable;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_isRenderingEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_Node_jni_1isRenderingEnabled
  (JNIEnv* env, jobject obj)
{
    cout << "Java-Node: isRenderingEnabled is called.\n";
    Node* node = (Node*)getNativePointer (env, obj);
    bool enable = node->isRenderingEnabled ();
    return enable;
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_setAlignment
 * Signature: (Lorg/karlsland/m3g/Node;ILorg/karlsland/m3g/Node;I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1setAlignment
  (JNIEnv* env, jobject obj, jobject zRef, jint zTarget, jobject yRef, jint yTarget)
{
    cout << "Java-Node: setAlignement is called.\n";
    Node* node = (Node*)getNativePointer (env, obj);
    Node* z_ref = (Node*)getNativePointer (env, zRef);
    Node* y_ref = (Node*)getNativePointer (env, yRef);
    node->setAlignment (z_ref, zTarget, y_ref, yTarget);
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_setAlphaFactor
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1setAlphaFactor
  (JNIEnv* env, jobject obj, jfloat alpha)
{
    cout << "Java-Node: setAlphaFactor is called.\n";
    Node* node = (Node*)getNativePointer (env, obj);
    node->setAlphaFactor (alpha);
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_setPickingEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1setPickingEnable
  (JNIEnv* env, jobject obj, jboolean enable)
{
    cout << "Java-Node: setPickingEnable is called.\n";
    Node* node = (Node*)getNativePointer (env, obj);
    node->setPickingEnable (enable);
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_setRenderingEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1setRenderingEnable
  (JNIEnv* env, jobject obj, jboolean enable)
{
    cout << "Java-Node: setRenderingEnable is called.\n";
    Node* node = (Node*)getNativePointer (env, obj);
    node->setRenderingEnable (enable);
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_setScope
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1setScope
  (JNIEnv* env, jobject obj, jint scope)
{
    cout << "Java-Node: setScope is called.\n";
    Node* node = (Node*)getNativePointer (env, obj);
    node->setScope (scope);
}

/*
 * Class:     org_karlsland_m3g_Node
 * Method:    jni_print
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Node_jni_1print
  (JNIEnv* env, jobject obj)
{
    Node* node = (Node*)getNativePointer (env, obj);
    node->print (cout) << "\n";
}
