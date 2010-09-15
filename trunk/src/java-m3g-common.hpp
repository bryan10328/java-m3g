#ifndef __JAVA_M3G_COMMON_HPP__
#define __JAVA_M3G_COMMON_HPP__

static inline 
long getEntity (JNIEnv* env, jobject obj)
{
    jclass   clazz = env->GetObjectClass (obj);
    jfieldID fid   = env->GetFieldID (clazz, "entity", "J");
    return env->GetLongField (obj, fid);
}

static inline
void setEntity (JNIEnv* env, jobject obj, void* entity)
{
    jclass   clazz = env->GetObjectClass (obj);
    jfieldID fid   = env->GetFieldID (clazz, "entity", "J");
    env->SetLongField (obj, fid, (long)entity);
}


#endif

