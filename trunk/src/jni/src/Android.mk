
LOCAL_PATH := $(call my-dir)

# libm3g.so用
include $(CLEAR_VARS)
LOCAL_MODULE    := prebuild-libm3g
LOCAL_SRC_FILES := external/lib/android/libm3g.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE    := java-m3g
LOCAL_SRC_FILES :=           \
java-AnimationController.cpp \
java-AnimationTrack.cpp      \
java-Appearance.cpp          \
java-Background.cpp          \
java-Camera.cpp              \
java-CompositingMode.cpp     \
java-Fog.cpp                 \
java-Graphics3D.cpp          \
java-Group.cpp               \
java-Image2D.cpp             \
java-IndexBuffer.cpp         \
java-KeyframeSequence.cpp    \
java-Light.cpp               \
java-Loader.cpp              \
java-Material.cpp            \
java-Mesh.cpp                \
java-MorphingMesh.cpp        \
java-Node.cpp                \
java-Object3D.cpp            \
java-PolygonMode.cpp         \
java-RayIntersection.cpp     \
java-SkinnedMesh.cpp         \
java-Sprite3D.cpp            \
java-Texture2D.cpp           \
java-Transform.cpp           \
java-Transformable.cpp       \
java-TriangleStripArray.cpp  \
java-VertexArray.cpp         \
java-VertexBuffer.cpp        \
java-World.cpp               \
java-initialize.cpp          \
java-m3g-common.cpp          \
java-Log.cpp
LOCAL_CPPFLAGS  += -fexceptions -lrtti
LOCAL_LDLIBS    := -llog
LOCAL_STATIC_LIBRARIES := prebuild-libm3g
LOCAL_C_INCLUDES       := ./jni/external/include
include $(BUILD_SHARED_LIBRARY)