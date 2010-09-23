#include "jni-glut.hpp"
#ifndef GL_GLEXT_PROTOTYPES
#define GL_GLEXT_PROTOTYPES
#endif
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glext.h>
#include <GL/glut.h>
#include <iostream>
using namespace std;


/*
 * Class:     JniGlut
 * Method:    jni_glut_init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JniGlut_jni_1glut_1init
  (JNIEnv* env, jobject obj)
{
    cout << "jni_glut_init is called.\n";
    int   argc = 1;
    char* argv[1] = {(char*)"Hello world."}; 

    glutInit            (&argc, argv);
    glutInitDisplayMode (GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
    glutCreateWindow    (argv[0]);

}
