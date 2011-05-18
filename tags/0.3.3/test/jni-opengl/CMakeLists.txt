project (JNI-OPENGL)

cmake_minimum_required (VERSION 2.0)

# build type = Debug (default)
set (CMAKE_BUILD_TYPE "Debug")

set (CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/bin)


# dependend libraries
find_package (JNI    REQUIRED)
find_package (OpenGL REQUIRED)
find_package (GLUT   REQUIRED)

set (JNI_OPENGL_REQUIRED_LIBRARIES
         GL
	 GLEW
         glut)
set (JNI_OPENGL_REQUIRED_INCLUDE_DIR 
         ${JNI_INCLUDE_DIRS}
         ${OPENGL_INCLUDE_DIR}
         ${GLUT_INCLUDE_DIR})

add_subdirectory (src)