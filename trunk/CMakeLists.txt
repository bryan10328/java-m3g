# =================================
# Java-M3G project config file.
# =================================

# project info
project (Java-M3G)

# required cmake
cmake_minimum_required (VERSION 2.0)

# =================================
# Avairable options
# =================================
# There is no option.

# ================================
# Default Build is "Debug"
# ================================
if (NOT CMAKE_BUILD_TYPE)
    message (STATUS "Build type is not specified, then")
    message (STATUS "  set CMAKE_BUILD_TYPE=Debug")
    set (CMAKE_BUILD_TYPE "Debug")
endif (NOT CMAKE_BUILD_TYPE)
message (STATUS "Configuring Java-M3G for ${CMAKE_BUILD_TYPE}...")

# for "Debug"
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    message (STATUS "  set CMAKE_INSTALL_PREFIX=${CMAKE_SOURCE_DIR}/bin")
    set (CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/bin)
endif (CMAKE_BUILD_TYPE STREQUAL "Debug")

# for "Release"
if  (CMAKE_BUILD_TYPE STREQUAL "Release")
    # nothing
endif (CMAKE_BUILD_TYPE STREQUAL "Release")

# ==================================
# dependend libraries
# ==================================
# ${JNI_LIBRARIES}=libawt.so,libjvmは必要ないのでリンクしない
find_package (JNI   REQUIRED)


#set (JAVA_M3G_REQUIRED_LIBRARIES 
#           ${JNI_LIBRARIES})
set (JAVA_M3G_REQUIRED_INCLUDE_DIR
           ${JNI_INCLUDE_DIRS})


# =============================
# project src
# =============================
# jni has C++ code.
# src has Java code and compiled in Eclipse.
add_subdirectory (jni)


# ================================
# Confirm current configuration
# ================================
# there is no message.


