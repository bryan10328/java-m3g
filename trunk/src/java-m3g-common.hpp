#ifndef __JAVA_M3G_COMMON_HPP__
#define __JAVA_M3G_COMMON_HPP__

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
    if (fid > 0) {
        env->SetLongField (obj, fid, (long)entity);
    }
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


#endif

