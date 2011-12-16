
# jni-opengl srcs
file (GLOB JNI_OPENGL_SRCS *.cpp)

# jni-opengl target
add_library           (jni-opengl SHARED ${JNI_OPENGL_SRCS})

# =================================
# dependent libraries
# =================================
include_directories   (${JNI_OPENGL_REQUIRED_INCLUDE_DIR})
target_link_libraries (jni-opengl ${JNI_OPENGL_REQUIRED_LIBRARIES})

message (STATUS "JNI_OPENGL_REQUIRED_INCLUDE_DIR = ${JNI_OPENGL_REQUIRED_INCLUDE_DIR}")
message (STATUS "JNI_OPENGL_REQUIRED_LIBRARIES = ${JNI_OPENGL_REQUIRED_LIBRARIES}")



# installer
install (TARGETS jni-opengl LIBRARY DESTINATION lib/linux)

