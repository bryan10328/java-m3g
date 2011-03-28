#include <jni.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <cstdio>
#include "jni-opengl.hpp"
using namespace std;


// g++ -c -fPIC -I/usr/lib/jvm/java-6-openjdk/include *.cpp 
// g++ -shared -lglut -lGL *.o -o libjni-opengl.so

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved)
{
    int   argc   = 1;
    const char* argv[] = {"jni-opengl"};

    printf ("JNI_OnLoad is called.\n");

    glutInit            (&argc, (char**)argv);
    glutInitDisplayMode (GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
    glutCreateWindow    (argv[0]);

    printf ("GLUT is initialized.\n");

    return JNI_VERSION_1_4;
}

