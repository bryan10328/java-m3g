#include <jni.h>
#include <vector>
#include <iostream>
#include <cstdarg>
#include "m3g/m3g.hpp"
#include "java-m3g-common.hpp"
using namespace m3g;
using namespace std;


std::vector<m3g::Object*> used_objs;
char error_string[256];


void setErrorString (const char* format, ...)
{
    va_list args;
    va_start (args, format);
    vsnprintf (error_string, 255, format, args);
    va_end (args);
}

const char* getErrorString ()
{
    return error_string;
}

void addUsedObject (m3g::Object* obj)
{
    if (obj == NULL) {
        cout << "Java-M3G: obj is NULL\n";
        return;
    }

    used_objs.push_back (obj);
}

void deleteUsedObjects ()
{
    for (int i = 0; i < (int)used_objs.size(); i++) {
        delete used_objs[i];
    }
    used_objs.clear ();
}


JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved)
{
    cout << "Java-M3G: OnLoad is called.\n";

    return JNI_VERSION_1_4;
}

