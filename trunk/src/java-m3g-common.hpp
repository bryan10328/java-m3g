#ifndef __JAVA_M3G_COMMON_HPP__
#define __JAVA_M3G_COMMON_HPP__

static inline 
void* getNativePointer (JNIEnv* env, jobject obj)
{
    if (obj == 0) {
        return NULL;
    }
    jclass   clazz = env->GetObjectClass (obj);
    jfieldID fid   = env->GetFieldID (clazz, "entity", "J");
    return (void*)env->GetLongField (obj, fid);
}

static inline
void setNativePointer (JNIEnv* env, jobject obj, void* entity)
{
    jclass   clazz = env->GetObjectClass (obj);
    jfieldID fid   = env->GetFieldID (clazz, "entity", "J");
    env->SetLongField (obj, fid, (long)entity);
}


#endif

