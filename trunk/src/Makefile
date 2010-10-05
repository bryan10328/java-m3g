SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)
TARGET = libjavam3g.so
CXX = g++
CXXFLAGS = -Wall -g -shared -fPIC -fno-strict-aliasing \
           -I/usr/lib/jvm/java-6-openjdk/include/ \
           -I/usr/include/m3g
LD = g++
LDFLAGS = -shared -lm3g -lGL -lGLU -lpng -ljpeg
LIBS = 


all: $(OBJS)
	$(LD) $(LDFLAGS) $^ $(LIBS) -o $(TARGET)
	@echo done.

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -c

install: $(TARGET)
	install -c -m 0755 $(TARGET) /usr/lib
	mkdir -p /usr/include/m3g
	cp *.hpp /usr/include/m3g

depend:
	makedepend -- $(CXXFLAGS) -- $(SRCS)

clean:
	rm -rf *.o *.so *~ *.class
	@echo done.

# DO NOT DELETE

java-AnimationController.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-AnimationController.o: /usr/include/stdio.h /usr/include/features.h
java-AnimationController.o: /usr/include/bits/predefs.h
java-AnimationController.o: /usr/include/sys/cdefs.h
java-AnimationController.o: /usr/include/bits/wordsize.h
java-AnimationController.o: /usr/include/gnu/stubs.h
java-AnimationController.o: /usr/include/gnu/stubs-64.h
java-AnimationController.o: /usr/include/bits/types.h
java-AnimationController.o: /usr/include/bits/typesizes.h
java-AnimationController.o: /usr/include/libio.h /usr/include/_G_config.h
java-AnimationController.o: /usr/include/wchar.h
java-AnimationController.o: /usr/include/bits/stdio_lim.h
java-AnimationController.o: /usr/include/bits/sys_errlist.h
java-AnimationController.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h
java-AnimationController.o: java-m3g.hpp java-m3g-common.hpp
java-AnimationController.o: /usr/include/m3g/m3g.hpp
java-AnimationController.o: /usr/include/m3g/m3gdef.hpp
java-AnimationController.o: /usr/include/m3g/Graphics3D.hpp
java-AnimationController.o: /usr/include/m3g/Object.hpp
java-AnimationController.o: /usr/include/m3g/Object3D.hpp
java-AnimationController.o: /usr/include/m3g/m3ginternal.hpp
java-AnimationController.o: /usr/include/m3g/AnimationController.hpp
java-AnimationController.o: /usr/include/m3g/AnimationTrack.hpp
java-AnimationController.o: /usr/include/m3g/Appearance.hpp
java-AnimationController.o: /usr/include/m3g/Background.hpp
java-AnimationController.o: /usr/include/m3g/CompositingMode.hpp
java-AnimationController.o: /usr/include/m3g/Fog.hpp
java-AnimationController.o: /usr/include/m3g/Image2D.hpp
java-AnimationController.o: /usr/include/m3g/IndexBuffer.hpp
java-AnimationController.o: /usr/include/m3g/TriangleStripArray.hpp
java-AnimationController.o: /usr/include/m3g/KeyframeSequence.hpp
java-AnimationController.o: /usr/include/m3g/Keyframe.hpp
java-AnimationController.o: /usr/include/m3g/Material.hpp
java-AnimationController.o: /usr/include/m3g/PolygonMode.hpp
java-AnimationController.o: /usr/include/m3g/Transformable.hpp
java-AnimationController.o: /usr/include/m3g/Quaternion.hpp
java-AnimationController.o: /usr/include/m3g/Transform.hpp
java-AnimationController.o: /usr/include/m3g/Matrix.hpp
java-AnimationController.o: /usr/include/m3g/Node.hpp
java-AnimationController.o: /usr/include/m3g/Camera.hpp
java-AnimationController.o: /usr/include/m3g/Group.hpp
java-AnimationController.o: /usr/include/m3g/World.hpp
java-AnimationController.o: /usr/include/m3g/Light.hpp
java-AnimationController.o: /usr/include/m3g/Mesh.hpp
java-AnimationController.o: /usr/include/m3g/MorphingMesh.hpp
java-AnimationController.o: /usr/include/m3g/SkinnedMesh.hpp
java-AnimationController.o: /usr/include/m3g/BoneIndex.hpp
java-AnimationController.o: /usr/include/m3g/Sprite3D.hpp
java-AnimationController.o: /usr/include/m3g/Texture2D.hpp
java-AnimationController.o: /usr/include/m3g/VertexArray.hpp
java-AnimationController.o: /usr/include/m3g/VertexBuffer.hpp
java-AnimationController.o: /usr/include/m3g/RayIntersection.hpp
java-AnimationController.o: /usr/include/m3g/Vector.hpp
java-AnimationController.o: /usr/include/m3g/Loader.hpp
java-AnimationController.o: /usr/include/m3g/M3GReader.hpp
java-AnimationController.o: /usr/include/m3g/InMemoryStream.hpp
java-AnimationController.o: /usr/include/m3g/M3GStruct.hpp
java-AnimationController.o: /usr/include/m3g/Exception.hpp
java-AnimationController.o: /usr/include/m3g/RenderState.hpp
java-AnimationTrack.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-AnimationTrack.o: /usr/include/stdio.h /usr/include/features.h
java-AnimationTrack.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-AnimationTrack.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-AnimationTrack.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-AnimationTrack.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-AnimationTrack.o: /usr/include/_G_config.h /usr/include/wchar.h
java-AnimationTrack.o: /usr/include/bits/stdio_lim.h
java-AnimationTrack.o: /usr/include/bits/sys_errlist.h
java-AnimationTrack.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h
java-AnimationTrack.o: java-m3g.hpp java-m3g-common.hpp
java-AnimationTrack.o: /usr/include/m3g/m3g.hpp /usr/include/m3g/m3gdef.hpp
java-AnimationTrack.o: /usr/include/m3g/Graphics3D.hpp
java-AnimationTrack.o: /usr/include/m3g/Object.hpp
java-AnimationTrack.o: /usr/include/m3g/Object3D.hpp
java-AnimationTrack.o: /usr/include/m3g/m3ginternal.hpp
java-AnimationTrack.o: /usr/include/m3g/AnimationController.hpp
java-AnimationTrack.o: /usr/include/m3g/AnimationTrack.hpp
java-AnimationTrack.o: /usr/include/m3g/Appearance.hpp
java-AnimationTrack.o: /usr/include/m3g/Background.hpp
java-AnimationTrack.o: /usr/include/m3g/CompositingMode.hpp
java-AnimationTrack.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-AnimationTrack.o: /usr/include/m3g/IndexBuffer.hpp
java-AnimationTrack.o: /usr/include/m3g/TriangleStripArray.hpp
java-AnimationTrack.o: /usr/include/m3g/KeyframeSequence.hpp
java-AnimationTrack.o: /usr/include/m3g/Keyframe.hpp
java-AnimationTrack.o: /usr/include/m3g/Material.hpp
java-AnimationTrack.o: /usr/include/m3g/PolygonMode.hpp
java-AnimationTrack.o: /usr/include/m3g/Transformable.hpp
java-AnimationTrack.o: /usr/include/m3g/Quaternion.hpp
java-AnimationTrack.o: /usr/include/m3g/Transform.hpp
java-AnimationTrack.o: /usr/include/m3g/Matrix.hpp /usr/include/m3g/Node.hpp
java-AnimationTrack.o: /usr/include/m3g/Camera.hpp /usr/include/m3g/Group.hpp
java-AnimationTrack.o: /usr/include/m3g/World.hpp /usr/include/m3g/Light.hpp
java-AnimationTrack.o: /usr/include/m3g/Mesh.hpp
java-AnimationTrack.o: /usr/include/m3g/MorphingMesh.hpp
java-AnimationTrack.o: /usr/include/m3g/SkinnedMesh.hpp
java-AnimationTrack.o: /usr/include/m3g/BoneIndex.hpp
java-AnimationTrack.o: /usr/include/m3g/Sprite3D.hpp
java-AnimationTrack.o: /usr/include/m3g/Texture2D.hpp
java-AnimationTrack.o: /usr/include/m3g/VertexArray.hpp
java-AnimationTrack.o: /usr/include/m3g/VertexBuffer.hpp
java-AnimationTrack.o: /usr/include/m3g/RayIntersection.hpp
java-AnimationTrack.o: /usr/include/m3g/Vector.hpp
java-AnimationTrack.o: /usr/include/m3g/Loader.hpp
java-AnimationTrack.o: /usr/include/m3g/M3GReader.hpp
java-AnimationTrack.o: /usr/include/m3g/InMemoryStream.hpp
java-AnimationTrack.o: /usr/include/m3g/M3GStruct.hpp
java-AnimationTrack.o: /usr/include/m3g/Exception.hpp
java-AnimationTrack.o: /usr/include/m3g/RenderState.hpp
java-Appearance.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-Appearance.o: /usr/include/stdio.h /usr/include/features.h
java-Appearance.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-Appearance.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-Appearance.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-Appearance.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-Appearance.o: /usr/include/_G_config.h /usr/include/wchar.h
java-Appearance.o: /usr/include/bits/stdio_lim.h
java-Appearance.o: /usr/include/bits/sys_errlist.h
java-Appearance.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-Appearance.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-Appearance.o: /usr/include/m3g/m3gdef.hpp
java-Appearance.o: /usr/include/m3g/Graphics3D.hpp
java-Appearance.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-Appearance.o: /usr/include/m3g/m3ginternal.hpp
java-Appearance.o: /usr/include/m3g/AnimationController.hpp
java-Appearance.o: /usr/include/m3g/AnimationTrack.hpp
java-Appearance.o: /usr/include/m3g/Appearance.hpp
java-Appearance.o: /usr/include/m3g/Background.hpp
java-Appearance.o: /usr/include/m3g/CompositingMode.hpp
java-Appearance.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-Appearance.o: /usr/include/m3g/IndexBuffer.hpp
java-Appearance.o: /usr/include/m3g/TriangleStripArray.hpp
java-Appearance.o: /usr/include/m3g/KeyframeSequence.hpp
java-Appearance.o: /usr/include/m3g/Keyframe.hpp
java-Appearance.o: /usr/include/m3g/Material.hpp
java-Appearance.o: /usr/include/m3g/PolygonMode.hpp
java-Appearance.o: /usr/include/m3g/Transformable.hpp
java-Appearance.o: /usr/include/m3g/Quaternion.hpp
java-Appearance.o: /usr/include/m3g/Transform.hpp /usr/include/m3g/Matrix.hpp
java-Appearance.o: /usr/include/m3g/Node.hpp /usr/include/m3g/Camera.hpp
java-Appearance.o: /usr/include/m3g/Group.hpp /usr/include/m3g/World.hpp
java-Appearance.o: /usr/include/m3g/Light.hpp /usr/include/m3g/Mesh.hpp
java-Appearance.o: /usr/include/m3g/MorphingMesh.hpp
java-Appearance.o: /usr/include/m3g/SkinnedMesh.hpp
java-Appearance.o: /usr/include/m3g/BoneIndex.hpp
java-Appearance.o: /usr/include/m3g/Sprite3D.hpp
java-Appearance.o: /usr/include/m3g/Texture2D.hpp
java-Appearance.o: /usr/include/m3g/VertexArray.hpp
java-Appearance.o: /usr/include/m3g/VertexBuffer.hpp
java-Appearance.o: /usr/include/m3g/RayIntersection.hpp
java-Appearance.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-Appearance.o: /usr/include/m3g/M3GReader.hpp
java-Appearance.o: /usr/include/m3g/InMemoryStream.hpp
java-Appearance.o: /usr/include/m3g/M3GStruct.hpp
java-Appearance.o: /usr/include/m3g/Exception.hpp
java-Appearance.o: /usr/include/m3g/RenderState.hpp
java-Background.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-Background.o: /usr/include/stdio.h /usr/include/features.h
java-Background.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-Background.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-Background.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-Background.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-Background.o: /usr/include/_G_config.h /usr/include/wchar.h
java-Background.o: /usr/include/bits/stdio_lim.h
java-Background.o: /usr/include/bits/sys_errlist.h
java-Background.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-Background.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-Background.o: /usr/include/m3g/m3gdef.hpp
java-Background.o: /usr/include/m3g/Graphics3D.hpp
java-Background.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-Background.o: /usr/include/m3g/m3ginternal.hpp
java-Background.o: /usr/include/m3g/AnimationController.hpp
java-Background.o: /usr/include/m3g/AnimationTrack.hpp
java-Background.o: /usr/include/m3g/Appearance.hpp
java-Background.o: /usr/include/m3g/Background.hpp
java-Background.o: /usr/include/m3g/CompositingMode.hpp
java-Background.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-Background.o: /usr/include/m3g/IndexBuffer.hpp
java-Background.o: /usr/include/m3g/TriangleStripArray.hpp
java-Background.o: /usr/include/m3g/KeyframeSequence.hpp
java-Background.o: /usr/include/m3g/Keyframe.hpp
java-Background.o: /usr/include/m3g/Material.hpp
java-Background.o: /usr/include/m3g/PolygonMode.hpp
java-Background.o: /usr/include/m3g/Transformable.hpp
java-Background.o: /usr/include/m3g/Quaternion.hpp
java-Background.o: /usr/include/m3g/Transform.hpp /usr/include/m3g/Matrix.hpp
java-Background.o: /usr/include/m3g/Node.hpp /usr/include/m3g/Camera.hpp
java-Background.o: /usr/include/m3g/Group.hpp /usr/include/m3g/World.hpp
java-Background.o: /usr/include/m3g/Light.hpp /usr/include/m3g/Mesh.hpp
java-Background.o: /usr/include/m3g/MorphingMesh.hpp
java-Background.o: /usr/include/m3g/SkinnedMesh.hpp
java-Background.o: /usr/include/m3g/BoneIndex.hpp
java-Background.o: /usr/include/m3g/Sprite3D.hpp
java-Background.o: /usr/include/m3g/Texture2D.hpp
java-Background.o: /usr/include/m3g/VertexArray.hpp
java-Background.o: /usr/include/m3g/VertexBuffer.hpp
java-Background.o: /usr/include/m3g/RayIntersection.hpp
java-Background.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-Background.o: /usr/include/m3g/M3GReader.hpp
java-Background.o: /usr/include/m3g/InMemoryStream.hpp
java-Background.o: /usr/include/m3g/M3GStruct.hpp
java-Background.o: /usr/include/m3g/Exception.hpp
java-Background.o: /usr/include/m3g/RenderState.hpp
java-Camera.o: /usr/lib/jvm/java-6-openjdk/include/jni.h /usr/include/stdio.h
java-Camera.o: /usr/include/features.h /usr/include/bits/predefs.h
java-Camera.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
java-Camera.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h
java-Camera.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
java-Camera.o: /usr/include/libio.h /usr/include/_G_config.h
java-Camera.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
java-Camera.o: /usr/include/bits/sys_errlist.h
java-Camera.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-Camera.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-Camera.o: /usr/include/m3g/m3gdef.hpp /usr/include/m3g/Graphics3D.hpp
java-Camera.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-Camera.o: /usr/include/m3g/m3ginternal.hpp
java-Camera.o: /usr/include/m3g/AnimationController.hpp
java-Camera.o: /usr/include/m3g/AnimationTrack.hpp
java-Camera.o: /usr/include/m3g/Appearance.hpp
java-Camera.o: /usr/include/m3g/Background.hpp
java-Camera.o: /usr/include/m3g/CompositingMode.hpp /usr/include/m3g/Fog.hpp
java-Camera.o: /usr/include/m3g/Image2D.hpp /usr/include/m3g/IndexBuffer.hpp
java-Camera.o: /usr/include/m3g/TriangleStripArray.hpp
java-Camera.o: /usr/include/m3g/KeyframeSequence.hpp
java-Camera.o: /usr/include/m3g/Keyframe.hpp /usr/include/m3g/Material.hpp
java-Camera.o: /usr/include/m3g/PolygonMode.hpp
java-Camera.o: /usr/include/m3g/Transformable.hpp
java-Camera.o: /usr/include/m3g/Quaternion.hpp /usr/include/m3g/Transform.hpp
java-Camera.o: /usr/include/m3g/Matrix.hpp /usr/include/m3g/Node.hpp
java-Camera.o: /usr/include/m3g/Camera.hpp /usr/include/m3g/Group.hpp
java-Camera.o: /usr/include/m3g/World.hpp /usr/include/m3g/Light.hpp
java-Camera.o: /usr/include/m3g/Mesh.hpp /usr/include/m3g/MorphingMesh.hpp
java-Camera.o: /usr/include/m3g/SkinnedMesh.hpp
java-Camera.o: /usr/include/m3g/BoneIndex.hpp /usr/include/m3g/Sprite3D.hpp
java-Camera.o: /usr/include/m3g/Texture2D.hpp
java-Camera.o: /usr/include/m3g/VertexArray.hpp
java-Camera.o: /usr/include/m3g/VertexBuffer.hpp
java-Camera.o: /usr/include/m3g/RayIntersection.hpp
java-Camera.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-Camera.o: /usr/include/m3g/M3GReader.hpp
java-Camera.o: /usr/include/m3g/InMemoryStream.hpp
java-Camera.o: /usr/include/m3g/M3GStruct.hpp /usr/include/m3g/Exception.hpp
java-Camera.o: /usr/include/m3g/RenderState.hpp
java-CompositingMode.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-CompositingMode.o: /usr/include/stdio.h /usr/include/features.h
java-CompositingMode.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-CompositingMode.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-CompositingMode.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-CompositingMode.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-CompositingMode.o: /usr/include/_G_config.h /usr/include/wchar.h
java-CompositingMode.o: /usr/include/bits/stdio_lim.h
java-CompositingMode.o: /usr/include/bits/sys_errlist.h
java-CompositingMode.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h
java-CompositingMode.o: java-m3g.hpp java-m3g-common.hpp
java-CompositingMode.o: /usr/include/m3g/m3g.hpp /usr/include/m3g/m3gdef.hpp
java-CompositingMode.o: /usr/include/m3g/Graphics3D.hpp
java-CompositingMode.o: /usr/include/m3g/Object.hpp
java-CompositingMode.o: /usr/include/m3g/Object3D.hpp
java-CompositingMode.o: /usr/include/m3g/m3ginternal.hpp
java-CompositingMode.o: /usr/include/m3g/AnimationController.hpp
java-CompositingMode.o: /usr/include/m3g/AnimationTrack.hpp
java-CompositingMode.o: /usr/include/m3g/Appearance.hpp
java-CompositingMode.o: /usr/include/m3g/Background.hpp
java-CompositingMode.o: /usr/include/m3g/CompositingMode.hpp
java-CompositingMode.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-CompositingMode.o: /usr/include/m3g/IndexBuffer.hpp
java-CompositingMode.o: /usr/include/m3g/TriangleStripArray.hpp
java-CompositingMode.o: /usr/include/m3g/KeyframeSequence.hpp
java-CompositingMode.o: /usr/include/m3g/Keyframe.hpp
java-CompositingMode.o: /usr/include/m3g/Material.hpp
java-CompositingMode.o: /usr/include/m3g/PolygonMode.hpp
java-CompositingMode.o: /usr/include/m3g/Transformable.hpp
java-CompositingMode.o: /usr/include/m3g/Quaternion.hpp
java-CompositingMode.o: /usr/include/m3g/Transform.hpp
java-CompositingMode.o: /usr/include/m3g/Matrix.hpp /usr/include/m3g/Node.hpp
java-CompositingMode.o: /usr/include/m3g/Camera.hpp
java-CompositingMode.o: /usr/include/m3g/Group.hpp /usr/include/m3g/World.hpp
java-CompositingMode.o: /usr/include/m3g/Light.hpp /usr/include/m3g/Mesh.hpp
java-CompositingMode.o: /usr/include/m3g/MorphingMesh.hpp
java-CompositingMode.o: /usr/include/m3g/SkinnedMesh.hpp
java-CompositingMode.o: /usr/include/m3g/BoneIndex.hpp
java-CompositingMode.o: /usr/include/m3g/Sprite3D.hpp
java-CompositingMode.o: /usr/include/m3g/Texture2D.hpp
java-CompositingMode.o: /usr/include/m3g/VertexArray.hpp
java-CompositingMode.o: /usr/include/m3g/VertexBuffer.hpp
java-CompositingMode.o: /usr/include/m3g/RayIntersection.hpp
java-CompositingMode.o: /usr/include/m3g/Vector.hpp
java-CompositingMode.o: /usr/include/m3g/Loader.hpp
java-CompositingMode.o: /usr/include/m3g/M3GReader.hpp
java-CompositingMode.o: /usr/include/m3g/InMemoryStream.hpp
java-CompositingMode.o: /usr/include/m3g/M3GStruct.hpp
java-CompositingMode.o: /usr/include/m3g/Exception.hpp
java-CompositingMode.o: /usr/include/m3g/RenderState.hpp
java-Fog.o: /usr/lib/jvm/java-6-openjdk/include/jni.h /usr/include/stdio.h
java-Fog.o: /usr/include/features.h /usr/include/bits/predefs.h
java-Fog.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
java-Fog.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h
java-Fog.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
java-Fog.o: /usr/include/libio.h /usr/include/_G_config.h
java-Fog.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
java-Fog.o: /usr/include/bits/sys_errlist.h
java-Fog.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-Fog.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-Fog.o: /usr/include/m3g/m3gdef.hpp /usr/include/m3g/Graphics3D.hpp
java-Fog.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-Fog.o: /usr/include/m3g/m3ginternal.hpp
java-Fog.o: /usr/include/m3g/AnimationController.hpp
java-Fog.o: /usr/include/m3g/AnimationTrack.hpp
java-Fog.o: /usr/include/m3g/Appearance.hpp /usr/include/m3g/Background.hpp
java-Fog.o: /usr/include/m3g/CompositingMode.hpp /usr/include/m3g/Fog.hpp
java-Fog.o: /usr/include/m3g/Image2D.hpp /usr/include/m3g/IndexBuffer.hpp
java-Fog.o: /usr/include/m3g/TriangleStripArray.hpp
java-Fog.o: /usr/include/m3g/KeyframeSequence.hpp
java-Fog.o: /usr/include/m3g/Keyframe.hpp /usr/include/m3g/Material.hpp
java-Fog.o: /usr/include/m3g/PolygonMode.hpp
java-Fog.o: /usr/include/m3g/Transformable.hpp
java-Fog.o: /usr/include/m3g/Quaternion.hpp /usr/include/m3g/Transform.hpp
java-Fog.o: /usr/include/m3g/Matrix.hpp /usr/include/m3g/Node.hpp
java-Fog.o: /usr/include/m3g/Camera.hpp /usr/include/m3g/Group.hpp
java-Fog.o: /usr/include/m3g/World.hpp /usr/include/m3g/Light.hpp
java-Fog.o: /usr/include/m3g/Mesh.hpp /usr/include/m3g/MorphingMesh.hpp
java-Fog.o: /usr/include/m3g/SkinnedMesh.hpp /usr/include/m3g/BoneIndex.hpp
java-Fog.o: /usr/include/m3g/Sprite3D.hpp /usr/include/m3g/Texture2D.hpp
java-Fog.o: /usr/include/m3g/VertexArray.hpp
java-Fog.o: /usr/include/m3g/VertexBuffer.hpp
java-Fog.o: /usr/include/m3g/RayIntersection.hpp /usr/include/m3g/Vector.hpp
java-Fog.o: /usr/include/m3g/Loader.hpp /usr/include/m3g/M3GReader.hpp
java-Fog.o: /usr/include/m3g/InMemoryStream.hpp
java-Fog.o: /usr/include/m3g/M3GStruct.hpp /usr/include/m3g/Exception.hpp
java-Fog.o: /usr/include/m3g/RenderState.hpp
java-Graphics3D.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-Graphics3D.o: /usr/include/stdio.h /usr/include/features.h
java-Graphics3D.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-Graphics3D.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-Graphics3D.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-Graphics3D.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-Graphics3D.o: /usr/include/_G_config.h /usr/include/wchar.h
java-Graphics3D.o: /usr/include/bits/stdio_lim.h
java-Graphics3D.o: /usr/include/bits/sys_errlist.h
java-Graphics3D.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-Graphics3D.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-Graphics3D.o: /usr/include/m3g/m3gdef.hpp
java-Graphics3D.o: /usr/include/m3g/Graphics3D.hpp
java-Graphics3D.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-Graphics3D.o: /usr/include/m3g/m3ginternal.hpp
java-Graphics3D.o: /usr/include/m3g/AnimationController.hpp
java-Graphics3D.o: /usr/include/m3g/AnimationTrack.hpp
java-Graphics3D.o: /usr/include/m3g/Appearance.hpp
java-Graphics3D.o: /usr/include/m3g/Background.hpp
java-Graphics3D.o: /usr/include/m3g/CompositingMode.hpp
java-Graphics3D.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-Graphics3D.o: /usr/include/m3g/IndexBuffer.hpp
java-Graphics3D.o: /usr/include/m3g/TriangleStripArray.hpp
java-Graphics3D.o: /usr/include/m3g/KeyframeSequence.hpp
java-Graphics3D.o: /usr/include/m3g/Keyframe.hpp
java-Graphics3D.o: /usr/include/m3g/Material.hpp
java-Graphics3D.o: /usr/include/m3g/PolygonMode.hpp
java-Graphics3D.o: /usr/include/m3g/Transformable.hpp
java-Graphics3D.o: /usr/include/m3g/Quaternion.hpp
java-Graphics3D.o: /usr/include/m3g/Transform.hpp /usr/include/m3g/Matrix.hpp
java-Graphics3D.o: /usr/include/m3g/Node.hpp /usr/include/m3g/Camera.hpp
java-Graphics3D.o: /usr/include/m3g/Group.hpp /usr/include/m3g/World.hpp
java-Graphics3D.o: /usr/include/m3g/Light.hpp /usr/include/m3g/Mesh.hpp
java-Graphics3D.o: /usr/include/m3g/MorphingMesh.hpp
java-Graphics3D.o: /usr/include/m3g/SkinnedMesh.hpp
java-Graphics3D.o: /usr/include/m3g/BoneIndex.hpp
java-Graphics3D.o: /usr/include/m3g/Sprite3D.hpp
java-Graphics3D.o: /usr/include/m3g/Texture2D.hpp
java-Graphics3D.o: /usr/include/m3g/VertexArray.hpp
java-Graphics3D.o: /usr/include/m3g/VertexBuffer.hpp
java-Graphics3D.o: /usr/include/m3g/RayIntersection.hpp
java-Graphics3D.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-Graphics3D.o: /usr/include/m3g/M3GReader.hpp
java-Graphics3D.o: /usr/include/m3g/InMemoryStream.hpp
java-Graphics3D.o: /usr/include/m3g/M3GStruct.hpp
java-Graphics3D.o: /usr/include/m3g/Exception.hpp
java-Graphics3D.o: /usr/include/m3g/RenderState.hpp
java-Group.o: /usr/lib/jvm/java-6-openjdk/include/jni.h /usr/include/stdio.h
java-Group.o: /usr/include/features.h /usr/include/bits/predefs.h
java-Group.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
java-Group.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h
java-Group.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
java-Group.o: /usr/include/libio.h /usr/include/_G_config.h
java-Group.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
java-Group.o: /usr/include/bits/sys_errlist.h
java-Group.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-Group.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-Group.o: /usr/include/m3g/m3gdef.hpp /usr/include/m3g/Graphics3D.hpp
java-Group.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-Group.o: /usr/include/m3g/m3ginternal.hpp
java-Group.o: /usr/include/m3g/AnimationController.hpp
java-Group.o: /usr/include/m3g/AnimationTrack.hpp
java-Group.o: /usr/include/m3g/Appearance.hpp /usr/include/m3g/Background.hpp
java-Group.o: /usr/include/m3g/CompositingMode.hpp /usr/include/m3g/Fog.hpp
java-Group.o: /usr/include/m3g/Image2D.hpp /usr/include/m3g/IndexBuffer.hpp
java-Group.o: /usr/include/m3g/TriangleStripArray.hpp
java-Group.o: /usr/include/m3g/KeyframeSequence.hpp
java-Group.o: /usr/include/m3g/Keyframe.hpp /usr/include/m3g/Material.hpp
java-Group.o: /usr/include/m3g/PolygonMode.hpp
java-Group.o: /usr/include/m3g/Transformable.hpp
java-Group.o: /usr/include/m3g/Quaternion.hpp /usr/include/m3g/Transform.hpp
java-Group.o: /usr/include/m3g/Matrix.hpp /usr/include/m3g/Node.hpp
java-Group.o: /usr/include/m3g/Camera.hpp /usr/include/m3g/Group.hpp
java-Group.o: /usr/include/m3g/World.hpp /usr/include/m3g/Light.hpp
java-Group.o: /usr/include/m3g/Mesh.hpp /usr/include/m3g/MorphingMesh.hpp
java-Group.o: /usr/include/m3g/SkinnedMesh.hpp /usr/include/m3g/BoneIndex.hpp
java-Group.o: /usr/include/m3g/Sprite3D.hpp /usr/include/m3g/Texture2D.hpp
java-Group.o: /usr/include/m3g/VertexArray.hpp
java-Group.o: /usr/include/m3g/VertexBuffer.hpp
java-Group.o: /usr/include/m3g/RayIntersection.hpp
java-Group.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-Group.o: /usr/include/m3g/M3GReader.hpp
java-Group.o: /usr/include/m3g/InMemoryStream.hpp
java-Group.o: /usr/include/m3g/M3GStruct.hpp /usr/include/m3g/Exception.hpp
java-Group.o: /usr/include/m3g/RenderState.hpp
java-Image2D.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-Image2D.o: /usr/include/stdio.h /usr/include/features.h
java-Image2D.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-Image2D.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-Image2D.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-Image2D.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-Image2D.o: /usr/include/_G_config.h /usr/include/wchar.h
java-Image2D.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
java-Image2D.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-Image2D.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-Image2D.o: /usr/include/m3g/m3gdef.hpp /usr/include/m3g/Graphics3D.hpp
java-Image2D.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-Image2D.o: /usr/include/m3g/m3ginternal.hpp
java-Image2D.o: /usr/include/m3g/AnimationController.hpp
java-Image2D.o: /usr/include/m3g/AnimationTrack.hpp
java-Image2D.o: /usr/include/m3g/Appearance.hpp
java-Image2D.o: /usr/include/m3g/Background.hpp
java-Image2D.o: /usr/include/m3g/CompositingMode.hpp /usr/include/m3g/Fog.hpp
java-Image2D.o: /usr/include/m3g/Image2D.hpp /usr/include/m3g/IndexBuffer.hpp
java-Image2D.o: /usr/include/m3g/TriangleStripArray.hpp
java-Image2D.o: /usr/include/m3g/KeyframeSequence.hpp
java-Image2D.o: /usr/include/m3g/Keyframe.hpp /usr/include/m3g/Material.hpp
java-Image2D.o: /usr/include/m3g/PolygonMode.hpp
java-Image2D.o: /usr/include/m3g/Transformable.hpp
java-Image2D.o: /usr/include/m3g/Quaternion.hpp
java-Image2D.o: /usr/include/m3g/Transform.hpp /usr/include/m3g/Matrix.hpp
java-Image2D.o: /usr/include/m3g/Node.hpp /usr/include/m3g/Camera.hpp
java-Image2D.o: /usr/include/m3g/Group.hpp /usr/include/m3g/World.hpp
java-Image2D.o: /usr/include/m3g/Light.hpp /usr/include/m3g/Mesh.hpp
java-Image2D.o: /usr/include/m3g/MorphingMesh.hpp
java-Image2D.o: /usr/include/m3g/SkinnedMesh.hpp
java-Image2D.o: /usr/include/m3g/BoneIndex.hpp /usr/include/m3g/Sprite3D.hpp
java-Image2D.o: /usr/include/m3g/Texture2D.hpp
java-Image2D.o: /usr/include/m3g/VertexArray.hpp
java-Image2D.o: /usr/include/m3g/VertexBuffer.hpp
java-Image2D.o: /usr/include/m3g/RayIntersection.hpp
java-Image2D.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-Image2D.o: /usr/include/m3g/M3GReader.hpp
java-Image2D.o: /usr/include/m3g/InMemoryStream.hpp
java-Image2D.o: /usr/include/m3g/M3GStruct.hpp /usr/include/m3g/Exception.hpp
java-Image2D.o: /usr/include/m3g/RenderState.hpp
java-IndexBuffer.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-IndexBuffer.o: /usr/include/stdio.h /usr/include/features.h
java-IndexBuffer.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-IndexBuffer.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-IndexBuffer.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-IndexBuffer.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-IndexBuffer.o: /usr/include/_G_config.h /usr/include/wchar.h
java-IndexBuffer.o: /usr/include/bits/stdio_lim.h
java-IndexBuffer.o: /usr/include/bits/sys_errlist.h
java-IndexBuffer.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-IndexBuffer.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-IndexBuffer.o: /usr/include/m3g/m3gdef.hpp
java-IndexBuffer.o: /usr/include/m3g/Graphics3D.hpp
java-IndexBuffer.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-IndexBuffer.o: /usr/include/m3g/m3ginternal.hpp
java-IndexBuffer.o: /usr/include/m3g/AnimationController.hpp
java-IndexBuffer.o: /usr/include/m3g/AnimationTrack.hpp
java-IndexBuffer.o: /usr/include/m3g/Appearance.hpp
java-IndexBuffer.o: /usr/include/m3g/Background.hpp
java-IndexBuffer.o: /usr/include/m3g/CompositingMode.hpp
java-IndexBuffer.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-IndexBuffer.o: /usr/include/m3g/IndexBuffer.hpp
java-IndexBuffer.o: /usr/include/m3g/TriangleStripArray.hpp
java-IndexBuffer.o: /usr/include/m3g/KeyframeSequence.hpp
java-IndexBuffer.o: /usr/include/m3g/Keyframe.hpp
java-IndexBuffer.o: /usr/include/m3g/Material.hpp
java-IndexBuffer.o: /usr/include/m3g/PolygonMode.hpp
java-IndexBuffer.o: /usr/include/m3g/Transformable.hpp
java-IndexBuffer.o: /usr/include/m3g/Quaternion.hpp
java-IndexBuffer.o: /usr/include/m3g/Transform.hpp
java-IndexBuffer.o: /usr/include/m3g/Matrix.hpp /usr/include/m3g/Node.hpp
java-IndexBuffer.o: /usr/include/m3g/Camera.hpp /usr/include/m3g/Group.hpp
java-IndexBuffer.o: /usr/include/m3g/World.hpp /usr/include/m3g/Light.hpp
java-IndexBuffer.o: /usr/include/m3g/Mesh.hpp
java-IndexBuffer.o: /usr/include/m3g/MorphingMesh.hpp
java-IndexBuffer.o: /usr/include/m3g/SkinnedMesh.hpp
java-IndexBuffer.o: /usr/include/m3g/BoneIndex.hpp
java-IndexBuffer.o: /usr/include/m3g/Sprite3D.hpp
java-IndexBuffer.o: /usr/include/m3g/Texture2D.hpp
java-IndexBuffer.o: /usr/include/m3g/VertexArray.hpp
java-IndexBuffer.o: /usr/include/m3g/VertexBuffer.hpp
java-IndexBuffer.o: /usr/include/m3g/RayIntersection.hpp
java-IndexBuffer.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-IndexBuffer.o: /usr/include/m3g/M3GReader.hpp
java-IndexBuffer.o: /usr/include/m3g/InMemoryStream.hpp
java-IndexBuffer.o: /usr/include/m3g/M3GStruct.hpp
java-IndexBuffer.o: /usr/include/m3g/Exception.hpp
java-IndexBuffer.o: /usr/include/m3g/RenderState.hpp
java-KeyframeSequence.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-KeyframeSequence.o: /usr/include/stdio.h /usr/include/features.h
java-KeyframeSequence.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-KeyframeSequence.o: /usr/include/bits/wordsize.h
java-KeyframeSequence.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h
java-KeyframeSequence.o: /usr/include/bits/types.h
java-KeyframeSequence.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-KeyframeSequence.o: /usr/include/_G_config.h /usr/include/wchar.h
java-KeyframeSequence.o: /usr/include/bits/stdio_lim.h
java-KeyframeSequence.o: /usr/include/bits/sys_errlist.h
java-KeyframeSequence.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h
java-KeyframeSequence.o: java-m3g.hpp java-m3g-common.hpp
java-KeyframeSequence.o: /usr/include/m3g/m3g.hpp /usr/include/m3g/m3gdef.hpp
java-KeyframeSequence.o: /usr/include/m3g/Graphics3D.hpp
java-KeyframeSequence.o: /usr/include/m3g/Object.hpp
java-KeyframeSequence.o: /usr/include/m3g/Object3D.hpp
java-KeyframeSequence.o: /usr/include/m3g/m3ginternal.hpp
java-KeyframeSequence.o: /usr/include/m3g/AnimationController.hpp
java-KeyframeSequence.o: /usr/include/m3g/AnimationTrack.hpp
java-KeyframeSequence.o: /usr/include/m3g/Appearance.hpp
java-KeyframeSequence.o: /usr/include/m3g/Background.hpp
java-KeyframeSequence.o: /usr/include/m3g/CompositingMode.hpp
java-KeyframeSequence.o: /usr/include/m3g/Fog.hpp
java-KeyframeSequence.o: /usr/include/m3g/Image2D.hpp
java-KeyframeSequence.o: /usr/include/m3g/IndexBuffer.hpp
java-KeyframeSequence.o: /usr/include/m3g/TriangleStripArray.hpp
java-KeyframeSequence.o: /usr/include/m3g/KeyframeSequence.hpp
java-KeyframeSequence.o: /usr/include/m3g/Keyframe.hpp
java-KeyframeSequence.o: /usr/include/m3g/Material.hpp
java-KeyframeSequence.o: /usr/include/m3g/PolygonMode.hpp
java-KeyframeSequence.o: /usr/include/m3g/Transformable.hpp
java-KeyframeSequence.o: /usr/include/m3g/Quaternion.hpp
java-KeyframeSequence.o: /usr/include/m3g/Transform.hpp
java-KeyframeSequence.o: /usr/include/m3g/Matrix.hpp
java-KeyframeSequence.o: /usr/include/m3g/Node.hpp
java-KeyframeSequence.o: /usr/include/m3g/Camera.hpp
java-KeyframeSequence.o: /usr/include/m3g/Group.hpp
java-KeyframeSequence.o: /usr/include/m3g/World.hpp
java-KeyframeSequence.o: /usr/include/m3g/Light.hpp /usr/include/m3g/Mesh.hpp
java-KeyframeSequence.o: /usr/include/m3g/MorphingMesh.hpp
java-KeyframeSequence.o: /usr/include/m3g/SkinnedMesh.hpp
java-KeyframeSequence.o: /usr/include/m3g/BoneIndex.hpp
java-KeyframeSequence.o: /usr/include/m3g/Sprite3D.hpp
java-KeyframeSequence.o: /usr/include/m3g/Texture2D.hpp
java-KeyframeSequence.o: /usr/include/m3g/VertexArray.hpp
java-KeyframeSequence.o: /usr/include/m3g/VertexBuffer.hpp
java-KeyframeSequence.o: /usr/include/m3g/RayIntersection.hpp
java-KeyframeSequence.o: /usr/include/m3g/Vector.hpp
java-KeyframeSequence.o: /usr/include/m3g/Loader.hpp
java-KeyframeSequence.o: /usr/include/m3g/M3GReader.hpp
java-KeyframeSequence.o: /usr/include/m3g/InMemoryStream.hpp
java-KeyframeSequence.o: /usr/include/m3g/M3GStruct.hpp
java-KeyframeSequence.o: /usr/include/m3g/Exception.hpp
java-KeyframeSequence.o: /usr/include/m3g/RenderState.hpp
java-Light.o: /usr/lib/jvm/java-6-openjdk/include/jni.h /usr/include/stdio.h
java-Light.o: /usr/include/features.h /usr/include/bits/predefs.h
java-Light.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
java-Light.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h
java-Light.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
java-Light.o: /usr/include/libio.h /usr/include/_G_config.h
java-Light.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
java-Light.o: /usr/include/bits/sys_errlist.h
java-Light.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-Light.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-Light.o: /usr/include/m3g/m3gdef.hpp /usr/include/m3g/Graphics3D.hpp
java-Light.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-Light.o: /usr/include/m3g/m3ginternal.hpp
java-Light.o: /usr/include/m3g/AnimationController.hpp
java-Light.o: /usr/include/m3g/AnimationTrack.hpp
java-Light.o: /usr/include/m3g/Appearance.hpp /usr/include/m3g/Background.hpp
java-Light.o: /usr/include/m3g/CompositingMode.hpp /usr/include/m3g/Fog.hpp
java-Light.o: /usr/include/m3g/Image2D.hpp /usr/include/m3g/IndexBuffer.hpp
java-Light.o: /usr/include/m3g/TriangleStripArray.hpp
java-Light.o: /usr/include/m3g/KeyframeSequence.hpp
java-Light.o: /usr/include/m3g/Keyframe.hpp /usr/include/m3g/Material.hpp
java-Light.o: /usr/include/m3g/PolygonMode.hpp
java-Light.o: /usr/include/m3g/Transformable.hpp
java-Light.o: /usr/include/m3g/Quaternion.hpp /usr/include/m3g/Transform.hpp
java-Light.o: /usr/include/m3g/Matrix.hpp /usr/include/m3g/Node.hpp
java-Light.o: /usr/include/m3g/Camera.hpp /usr/include/m3g/Group.hpp
java-Light.o: /usr/include/m3g/World.hpp /usr/include/m3g/Light.hpp
java-Light.o: /usr/include/m3g/Mesh.hpp /usr/include/m3g/MorphingMesh.hpp
java-Light.o: /usr/include/m3g/SkinnedMesh.hpp /usr/include/m3g/BoneIndex.hpp
java-Light.o: /usr/include/m3g/Sprite3D.hpp /usr/include/m3g/Texture2D.hpp
java-Light.o: /usr/include/m3g/VertexArray.hpp
java-Light.o: /usr/include/m3g/VertexBuffer.hpp
java-Light.o: /usr/include/m3g/RayIntersection.hpp
java-Light.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-Light.o: /usr/include/m3g/M3GReader.hpp
java-Light.o: /usr/include/m3g/InMemoryStream.hpp
java-Light.o: /usr/include/m3g/M3GStruct.hpp /usr/include/m3g/Exception.hpp
java-Light.o: /usr/include/m3g/RenderState.hpp
java-Loader.o: /usr/lib/jvm/java-6-openjdk/include/jni.h /usr/include/stdio.h
java-Loader.o: /usr/include/features.h /usr/include/bits/predefs.h
java-Loader.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
java-Loader.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h
java-Loader.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
java-Loader.o: /usr/include/libio.h /usr/include/_G_config.h
java-Loader.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
java-Loader.o: /usr/include/bits/sys_errlist.h
java-Loader.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-Loader.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-Loader.o: /usr/include/m3g/m3gdef.hpp /usr/include/m3g/Graphics3D.hpp
java-Loader.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-Loader.o: /usr/include/m3g/m3ginternal.hpp
java-Loader.o: /usr/include/m3g/AnimationController.hpp
java-Loader.o: /usr/include/m3g/AnimationTrack.hpp
java-Loader.o: /usr/include/m3g/Appearance.hpp
java-Loader.o: /usr/include/m3g/Background.hpp
java-Loader.o: /usr/include/m3g/CompositingMode.hpp /usr/include/m3g/Fog.hpp
java-Loader.o: /usr/include/m3g/Image2D.hpp /usr/include/m3g/IndexBuffer.hpp
java-Loader.o: /usr/include/m3g/TriangleStripArray.hpp
java-Loader.o: /usr/include/m3g/KeyframeSequence.hpp
java-Loader.o: /usr/include/m3g/Keyframe.hpp /usr/include/m3g/Material.hpp
java-Loader.o: /usr/include/m3g/PolygonMode.hpp
java-Loader.o: /usr/include/m3g/Transformable.hpp
java-Loader.o: /usr/include/m3g/Quaternion.hpp /usr/include/m3g/Transform.hpp
java-Loader.o: /usr/include/m3g/Matrix.hpp /usr/include/m3g/Node.hpp
java-Loader.o: /usr/include/m3g/Camera.hpp /usr/include/m3g/Group.hpp
java-Loader.o: /usr/include/m3g/World.hpp /usr/include/m3g/Light.hpp
java-Loader.o: /usr/include/m3g/Mesh.hpp /usr/include/m3g/MorphingMesh.hpp
java-Loader.o: /usr/include/m3g/SkinnedMesh.hpp
java-Loader.o: /usr/include/m3g/BoneIndex.hpp /usr/include/m3g/Sprite3D.hpp
java-Loader.o: /usr/include/m3g/Texture2D.hpp
java-Loader.o: /usr/include/m3g/VertexArray.hpp
java-Loader.o: /usr/include/m3g/VertexBuffer.hpp
java-Loader.o: /usr/include/m3g/RayIntersection.hpp
java-Loader.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-Loader.o: /usr/include/m3g/M3GReader.hpp
java-Loader.o: /usr/include/m3g/InMemoryStream.hpp
java-Loader.o: /usr/include/m3g/M3GStruct.hpp /usr/include/m3g/Exception.hpp
java-Loader.o: /usr/include/m3g/RenderState.hpp
java-Material.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-Material.o: /usr/include/stdio.h /usr/include/features.h
java-Material.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-Material.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-Material.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-Material.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-Material.o: /usr/include/_G_config.h /usr/include/wchar.h
java-Material.o: /usr/include/bits/stdio_lim.h
java-Material.o: /usr/include/bits/sys_errlist.h
java-Material.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-Material.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-Material.o: /usr/include/m3g/m3gdef.hpp /usr/include/m3g/Graphics3D.hpp
java-Material.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-Material.o: /usr/include/m3g/m3ginternal.hpp
java-Material.o: /usr/include/m3g/AnimationController.hpp
java-Material.o: /usr/include/m3g/AnimationTrack.hpp
java-Material.o: /usr/include/m3g/Appearance.hpp
java-Material.o: /usr/include/m3g/Background.hpp
java-Material.o: /usr/include/m3g/CompositingMode.hpp
java-Material.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-Material.o: /usr/include/m3g/IndexBuffer.hpp
java-Material.o: /usr/include/m3g/TriangleStripArray.hpp
java-Material.o: /usr/include/m3g/KeyframeSequence.hpp
java-Material.o: /usr/include/m3g/Keyframe.hpp /usr/include/m3g/Material.hpp
java-Material.o: /usr/include/m3g/PolygonMode.hpp
java-Material.o: /usr/include/m3g/Transformable.hpp
java-Material.o: /usr/include/m3g/Quaternion.hpp
java-Material.o: /usr/include/m3g/Transform.hpp /usr/include/m3g/Matrix.hpp
java-Material.o: /usr/include/m3g/Node.hpp /usr/include/m3g/Camera.hpp
java-Material.o: /usr/include/m3g/Group.hpp /usr/include/m3g/World.hpp
java-Material.o: /usr/include/m3g/Light.hpp /usr/include/m3g/Mesh.hpp
java-Material.o: /usr/include/m3g/MorphingMesh.hpp
java-Material.o: /usr/include/m3g/SkinnedMesh.hpp
java-Material.o: /usr/include/m3g/BoneIndex.hpp /usr/include/m3g/Sprite3D.hpp
java-Material.o: /usr/include/m3g/Texture2D.hpp
java-Material.o: /usr/include/m3g/VertexArray.hpp
java-Material.o: /usr/include/m3g/VertexBuffer.hpp
java-Material.o: /usr/include/m3g/RayIntersection.hpp
java-Material.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-Material.o: /usr/include/m3g/M3GReader.hpp
java-Material.o: /usr/include/m3g/InMemoryStream.hpp
java-Material.o: /usr/include/m3g/M3GStruct.hpp
java-Material.o: /usr/include/m3g/Exception.hpp
java-Material.o: /usr/include/m3g/RenderState.hpp
java-Mesh.o: /usr/lib/jvm/java-6-openjdk/include/jni.h /usr/include/stdio.h
java-Mesh.o: /usr/include/features.h /usr/include/bits/predefs.h
java-Mesh.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
java-Mesh.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h
java-Mesh.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
java-Mesh.o: /usr/include/libio.h /usr/include/_G_config.h
java-Mesh.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
java-Mesh.o: /usr/include/bits/sys_errlist.h
java-Mesh.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-Mesh.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-Mesh.o: /usr/include/m3g/m3gdef.hpp /usr/include/m3g/Graphics3D.hpp
java-Mesh.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-Mesh.o: /usr/include/m3g/m3ginternal.hpp
java-Mesh.o: /usr/include/m3g/AnimationController.hpp
java-Mesh.o: /usr/include/m3g/AnimationTrack.hpp
java-Mesh.o: /usr/include/m3g/Appearance.hpp /usr/include/m3g/Background.hpp
java-Mesh.o: /usr/include/m3g/CompositingMode.hpp /usr/include/m3g/Fog.hpp
java-Mesh.o: /usr/include/m3g/Image2D.hpp /usr/include/m3g/IndexBuffer.hpp
java-Mesh.o: /usr/include/m3g/TriangleStripArray.hpp
java-Mesh.o: /usr/include/m3g/KeyframeSequence.hpp
java-Mesh.o: /usr/include/m3g/Keyframe.hpp /usr/include/m3g/Material.hpp
java-Mesh.o: /usr/include/m3g/PolygonMode.hpp
java-Mesh.o: /usr/include/m3g/Transformable.hpp
java-Mesh.o: /usr/include/m3g/Quaternion.hpp /usr/include/m3g/Transform.hpp
java-Mesh.o: /usr/include/m3g/Matrix.hpp /usr/include/m3g/Node.hpp
java-Mesh.o: /usr/include/m3g/Camera.hpp /usr/include/m3g/Group.hpp
java-Mesh.o: /usr/include/m3g/World.hpp /usr/include/m3g/Light.hpp
java-Mesh.o: /usr/include/m3g/Mesh.hpp /usr/include/m3g/MorphingMesh.hpp
java-Mesh.o: /usr/include/m3g/SkinnedMesh.hpp /usr/include/m3g/BoneIndex.hpp
java-Mesh.o: /usr/include/m3g/Sprite3D.hpp /usr/include/m3g/Texture2D.hpp
java-Mesh.o: /usr/include/m3g/VertexArray.hpp
java-Mesh.o: /usr/include/m3g/VertexBuffer.hpp
java-Mesh.o: /usr/include/m3g/RayIntersection.hpp /usr/include/m3g/Vector.hpp
java-Mesh.o: /usr/include/m3g/Loader.hpp /usr/include/m3g/M3GReader.hpp
java-Mesh.o: /usr/include/m3g/InMemoryStream.hpp
java-Mesh.o: /usr/include/m3g/M3GStruct.hpp /usr/include/m3g/Exception.hpp
java-Mesh.o: /usr/include/m3g/RenderState.hpp
java-MorphingMesh.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-MorphingMesh.o: /usr/include/stdio.h /usr/include/features.h
java-MorphingMesh.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-MorphingMesh.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-MorphingMesh.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-MorphingMesh.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-MorphingMesh.o: /usr/include/_G_config.h /usr/include/wchar.h
java-MorphingMesh.o: /usr/include/bits/stdio_lim.h
java-MorphingMesh.o: /usr/include/bits/sys_errlist.h
java-MorphingMesh.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h
java-MorphingMesh.o: java-m3g.hpp java-m3g-common.hpp
java-MorphingMesh.o: /usr/include/m3g/m3g.hpp /usr/include/m3g/m3gdef.hpp
java-MorphingMesh.o: /usr/include/m3g/Graphics3D.hpp
java-MorphingMesh.o: /usr/include/m3g/Object.hpp
java-MorphingMesh.o: /usr/include/m3g/Object3D.hpp
java-MorphingMesh.o: /usr/include/m3g/m3ginternal.hpp
java-MorphingMesh.o: /usr/include/m3g/AnimationController.hpp
java-MorphingMesh.o: /usr/include/m3g/AnimationTrack.hpp
java-MorphingMesh.o: /usr/include/m3g/Appearance.hpp
java-MorphingMesh.o: /usr/include/m3g/Background.hpp
java-MorphingMesh.o: /usr/include/m3g/CompositingMode.hpp
java-MorphingMesh.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-MorphingMesh.o: /usr/include/m3g/IndexBuffer.hpp
java-MorphingMesh.o: /usr/include/m3g/TriangleStripArray.hpp
java-MorphingMesh.o: /usr/include/m3g/KeyframeSequence.hpp
java-MorphingMesh.o: /usr/include/m3g/Keyframe.hpp
java-MorphingMesh.o: /usr/include/m3g/Material.hpp
java-MorphingMesh.o: /usr/include/m3g/PolygonMode.hpp
java-MorphingMesh.o: /usr/include/m3g/Transformable.hpp
java-MorphingMesh.o: /usr/include/m3g/Quaternion.hpp
java-MorphingMesh.o: /usr/include/m3g/Transform.hpp
java-MorphingMesh.o: /usr/include/m3g/Matrix.hpp /usr/include/m3g/Node.hpp
java-MorphingMesh.o: /usr/include/m3g/Camera.hpp /usr/include/m3g/Group.hpp
java-MorphingMesh.o: /usr/include/m3g/World.hpp /usr/include/m3g/Light.hpp
java-MorphingMesh.o: /usr/include/m3g/Mesh.hpp
java-MorphingMesh.o: /usr/include/m3g/MorphingMesh.hpp
java-MorphingMesh.o: /usr/include/m3g/SkinnedMesh.hpp
java-MorphingMesh.o: /usr/include/m3g/BoneIndex.hpp
java-MorphingMesh.o: /usr/include/m3g/Sprite3D.hpp
java-MorphingMesh.o: /usr/include/m3g/Texture2D.hpp
java-MorphingMesh.o: /usr/include/m3g/VertexArray.hpp
java-MorphingMesh.o: /usr/include/m3g/VertexBuffer.hpp
java-MorphingMesh.o: /usr/include/m3g/RayIntersection.hpp
java-MorphingMesh.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-MorphingMesh.o: /usr/include/m3g/M3GReader.hpp
java-MorphingMesh.o: /usr/include/m3g/InMemoryStream.hpp
java-MorphingMesh.o: /usr/include/m3g/M3GStruct.hpp
java-MorphingMesh.o: /usr/include/m3g/Exception.hpp
java-MorphingMesh.o: /usr/include/m3g/RenderState.hpp
java-Node.o: /usr/lib/jvm/java-6-openjdk/include/jni.h /usr/include/stdio.h
java-Node.o: /usr/include/features.h /usr/include/bits/predefs.h
java-Node.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
java-Node.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h
java-Node.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
java-Node.o: /usr/include/libio.h /usr/include/_G_config.h
java-Node.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
java-Node.o: /usr/include/bits/sys_errlist.h
java-Node.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-Node.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-Node.o: /usr/include/m3g/m3gdef.hpp /usr/include/m3g/Graphics3D.hpp
java-Node.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-Node.o: /usr/include/m3g/m3ginternal.hpp
java-Node.o: /usr/include/m3g/AnimationController.hpp
java-Node.o: /usr/include/m3g/AnimationTrack.hpp
java-Node.o: /usr/include/m3g/Appearance.hpp /usr/include/m3g/Background.hpp
java-Node.o: /usr/include/m3g/CompositingMode.hpp /usr/include/m3g/Fog.hpp
java-Node.o: /usr/include/m3g/Image2D.hpp /usr/include/m3g/IndexBuffer.hpp
java-Node.o: /usr/include/m3g/TriangleStripArray.hpp
java-Node.o: /usr/include/m3g/KeyframeSequence.hpp
java-Node.o: /usr/include/m3g/Keyframe.hpp /usr/include/m3g/Material.hpp
java-Node.o: /usr/include/m3g/PolygonMode.hpp
java-Node.o: /usr/include/m3g/Transformable.hpp
java-Node.o: /usr/include/m3g/Quaternion.hpp /usr/include/m3g/Transform.hpp
java-Node.o: /usr/include/m3g/Matrix.hpp /usr/include/m3g/Node.hpp
java-Node.o: /usr/include/m3g/Camera.hpp /usr/include/m3g/Group.hpp
java-Node.o: /usr/include/m3g/World.hpp /usr/include/m3g/Light.hpp
java-Node.o: /usr/include/m3g/Mesh.hpp /usr/include/m3g/MorphingMesh.hpp
java-Node.o: /usr/include/m3g/SkinnedMesh.hpp /usr/include/m3g/BoneIndex.hpp
java-Node.o: /usr/include/m3g/Sprite3D.hpp /usr/include/m3g/Texture2D.hpp
java-Node.o: /usr/include/m3g/VertexArray.hpp
java-Node.o: /usr/include/m3g/VertexBuffer.hpp
java-Node.o: /usr/include/m3g/RayIntersection.hpp /usr/include/m3g/Vector.hpp
java-Node.o: /usr/include/m3g/Loader.hpp /usr/include/m3g/M3GReader.hpp
java-Node.o: /usr/include/m3g/InMemoryStream.hpp
java-Node.o: /usr/include/m3g/M3GStruct.hpp /usr/include/m3g/Exception.hpp
java-Node.o: /usr/include/m3g/RenderState.hpp
java-Object3D.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-Object3D.o: /usr/include/stdio.h /usr/include/features.h
java-Object3D.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-Object3D.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-Object3D.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-Object3D.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-Object3D.o: /usr/include/_G_config.h /usr/include/wchar.h
java-Object3D.o: /usr/include/bits/stdio_lim.h
java-Object3D.o: /usr/include/bits/sys_errlist.h
java-Object3D.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-Object3D.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-Object3D.o: /usr/include/m3g/m3gdef.hpp /usr/include/m3g/Graphics3D.hpp
java-Object3D.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-Object3D.o: /usr/include/m3g/m3ginternal.hpp
java-Object3D.o: /usr/include/m3g/AnimationController.hpp
java-Object3D.o: /usr/include/m3g/AnimationTrack.hpp
java-Object3D.o: /usr/include/m3g/Appearance.hpp
java-Object3D.o: /usr/include/m3g/Background.hpp
java-Object3D.o: /usr/include/m3g/CompositingMode.hpp
java-Object3D.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-Object3D.o: /usr/include/m3g/IndexBuffer.hpp
java-Object3D.o: /usr/include/m3g/TriangleStripArray.hpp
java-Object3D.o: /usr/include/m3g/KeyframeSequence.hpp
java-Object3D.o: /usr/include/m3g/Keyframe.hpp /usr/include/m3g/Material.hpp
java-Object3D.o: /usr/include/m3g/PolygonMode.hpp
java-Object3D.o: /usr/include/m3g/Transformable.hpp
java-Object3D.o: /usr/include/m3g/Quaternion.hpp
java-Object3D.o: /usr/include/m3g/Transform.hpp /usr/include/m3g/Matrix.hpp
java-Object3D.o: /usr/include/m3g/Node.hpp /usr/include/m3g/Camera.hpp
java-Object3D.o: /usr/include/m3g/Group.hpp /usr/include/m3g/World.hpp
java-Object3D.o: /usr/include/m3g/Light.hpp /usr/include/m3g/Mesh.hpp
java-Object3D.o: /usr/include/m3g/MorphingMesh.hpp
java-Object3D.o: /usr/include/m3g/SkinnedMesh.hpp
java-Object3D.o: /usr/include/m3g/BoneIndex.hpp /usr/include/m3g/Sprite3D.hpp
java-Object3D.o: /usr/include/m3g/Texture2D.hpp
java-Object3D.o: /usr/include/m3g/VertexArray.hpp
java-Object3D.o: /usr/include/m3g/VertexBuffer.hpp
java-Object3D.o: /usr/include/m3g/RayIntersection.hpp
java-Object3D.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-Object3D.o: /usr/include/m3g/M3GReader.hpp
java-Object3D.o: /usr/include/m3g/InMemoryStream.hpp
java-Object3D.o: /usr/include/m3g/M3GStruct.hpp
java-Object3D.o: /usr/include/m3g/Exception.hpp
java-Object3D.o: /usr/include/m3g/RenderState.hpp
java-PolygonMode.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-PolygonMode.o: /usr/include/stdio.h /usr/include/features.h
java-PolygonMode.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-PolygonMode.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-PolygonMode.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-PolygonMode.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-PolygonMode.o: /usr/include/_G_config.h /usr/include/wchar.h
java-PolygonMode.o: /usr/include/bits/stdio_lim.h
java-PolygonMode.o: /usr/include/bits/sys_errlist.h
java-PolygonMode.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-PolygonMode.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-PolygonMode.o: /usr/include/m3g/m3gdef.hpp
java-PolygonMode.o: /usr/include/m3g/Graphics3D.hpp
java-PolygonMode.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-PolygonMode.o: /usr/include/m3g/m3ginternal.hpp
java-PolygonMode.o: /usr/include/m3g/AnimationController.hpp
java-PolygonMode.o: /usr/include/m3g/AnimationTrack.hpp
java-PolygonMode.o: /usr/include/m3g/Appearance.hpp
java-PolygonMode.o: /usr/include/m3g/Background.hpp
java-PolygonMode.o: /usr/include/m3g/CompositingMode.hpp
java-PolygonMode.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-PolygonMode.o: /usr/include/m3g/IndexBuffer.hpp
java-PolygonMode.o: /usr/include/m3g/TriangleStripArray.hpp
java-PolygonMode.o: /usr/include/m3g/KeyframeSequence.hpp
java-PolygonMode.o: /usr/include/m3g/Keyframe.hpp
java-PolygonMode.o: /usr/include/m3g/Material.hpp
java-PolygonMode.o: /usr/include/m3g/PolygonMode.hpp
java-PolygonMode.o: /usr/include/m3g/Transformable.hpp
java-PolygonMode.o: /usr/include/m3g/Quaternion.hpp
java-PolygonMode.o: /usr/include/m3g/Transform.hpp
java-PolygonMode.o: /usr/include/m3g/Matrix.hpp /usr/include/m3g/Node.hpp
java-PolygonMode.o: /usr/include/m3g/Camera.hpp /usr/include/m3g/Group.hpp
java-PolygonMode.o: /usr/include/m3g/World.hpp /usr/include/m3g/Light.hpp
java-PolygonMode.o: /usr/include/m3g/Mesh.hpp
java-PolygonMode.o: /usr/include/m3g/MorphingMesh.hpp
java-PolygonMode.o: /usr/include/m3g/SkinnedMesh.hpp
java-PolygonMode.o: /usr/include/m3g/BoneIndex.hpp
java-PolygonMode.o: /usr/include/m3g/Sprite3D.hpp
java-PolygonMode.o: /usr/include/m3g/Texture2D.hpp
java-PolygonMode.o: /usr/include/m3g/VertexArray.hpp
java-PolygonMode.o: /usr/include/m3g/VertexBuffer.hpp
java-PolygonMode.o: /usr/include/m3g/RayIntersection.hpp
java-PolygonMode.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-PolygonMode.o: /usr/include/m3g/M3GReader.hpp
java-PolygonMode.o: /usr/include/m3g/InMemoryStream.hpp
java-PolygonMode.o: /usr/include/m3g/M3GStruct.hpp
java-PolygonMode.o: /usr/include/m3g/Exception.hpp
java-PolygonMode.o: /usr/include/m3g/RenderState.hpp
java-RayIntersection.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-RayIntersection.o: /usr/include/stdio.h /usr/include/features.h
java-RayIntersection.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-RayIntersection.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-RayIntersection.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-RayIntersection.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-RayIntersection.o: /usr/include/_G_config.h /usr/include/wchar.h
java-RayIntersection.o: /usr/include/bits/stdio_lim.h
java-RayIntersection.o: /usr/include/bits/sys_errlist.h
java-RayIntersection.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h
java-RayIntersection.o: java-m3g.hpp java-m3g-common.hpp
java-RayIntersection.o: /usr/include/m3g/m3g.hpp /usr/include/m3g/m3gdef.hpp
java-RayIntersection.o: /usr/include/m3g/Graphics3D.hpp
java-RayIntersection.o: /usr/include/m3g/Object.hpp
java-RayIntersection.o: /usr/include/m3g/Object3D.hpp
java-RayIntersection.o: /usr/include/m3g/m3ginternal.hpp
java-RayIntersection.o: /usr/include/m3g/AnimationController.hpp
java-RayIntersection.o: /usr/include/m3g/AnimationTrack.hpp
java-RayIntersection.o: /usr/include/m3g/Appearance.hpp
java-RayIntersection.o: /usr/include/m3g/Background.hpp
java-RayIntersection.o: /usr/include/m3g/CompositingMode.hpp
java-RayIntersection.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-RayIntersection.o: /usr/include/m3g/IndexBuffer.hpp
java-RayIntersection.o: /usr/include/m3g/TriangleStripArray.hpp
java-RayIntersection.o: /usr/include/m3g/KeyframeSequence.hpp
java-RayIntersection.o: /usr/include/m3g/Keyframe.hpp
java-RayIntersection.o: /usr/include/m3g/Material.hpp
java-RayIntersection.o: /usr/include/m3g/PolygonMode.hpp
java-RayIntersection.o: /usr/include/m3g/Transformable.hpp
java-RayIntersection.o: /usr/include/m3g/Quaternion.hpp
java-RayIntersection.o: /usr/include/m3g/Transform.hpp
java-RayIntersection.o: /usr/include/m3g/Matrix.hpp /usr/include/m3g/Node.hpp
java-RayIntersection.o: /usr/include/m3g/Camera.hpp
java-RayIntersection.o: /usr/include/m3g/Group.hpp /usr/include/m3g/World.hpp
java-RayIntersection.o: /usr/include/m3g/Light.hpp /usr/include/m3g/Mesh.hpp
java-RayIntersection.o: /usr/include/m3g/MorphingMesh.hpp
java-RayIntersection.o: /usr/include/m3g/SkinnedMesh.hpp
java-RayIntersection.o: /usr/include/m3g/BoneIndex.hpp
java-RayIntersection.o: /usr/include/m3g/Sprite3D.hpp
java-RayIntersection.o: /usr/include/m3g/Texture2D.hpp
java-RayIntersection.o: /usr/include/m3g/VertexArray.hpp
java-RayIntersection.o: /usr/include/m3g/VertexBuffer.hpp
java-RayIntersection.o: /usr/include/m3g/RayIntersection.hpp
java-RayIntersection.o: /usr/include/m3g/Vector.hpp
java-RayIntersection.o: /usr/include/m3g/Loader.hpp
java-RayIntersection.o: /usr/include/m3g/M3GReader.hpp
java-RayIntersection.o: /usr/include/m3g/InMemoryStream.hpp
java-RayIntersection.o: /usr/include/m3g/M3GStruct.hpp
java-RayIntersection.o: /usr/include/m3g/Exception.hpp
java-RayIntersection.o: /usr/include/m3g/RenderState.hpp
java-SkinnedMesh.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-SkinnedMesh.o: /usr/include/stdio.h /usr/include/features.h
java-SkinnedMesh.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-SkinnedMesh.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-SkinnedMesh.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-SkinnedMesh.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-SkinnedMesh.o: /usr/include/_G_config.h /usr/include/wchar.h
java-SkinnedMesh.o: /usr/include/bits/stdio_lim.h
java-SkinnedMesh.o: /usr/include/bits/sys_errlist.h
java-SkinnedMesh.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-SkinnedMesh.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-SkinnedMesh.o: /usr/include/m3g/m3gdef.hpp
java-SkinnedMesh.o: /usr/include/m3g/Graphics3D.hpp
java-SkinnedMesh.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-SkinnedMesh.o: /usr/include/m3g/m3ginternal.hpp
java-SkinnedMesh.o: /usr/include/m3g/AnimationController.hpp
java-SkinnedMesh.o: /usr/include/m3g/AnimationTrack.hpp
java-SkinnedMesh.o: /usr/include/m3g/Appearance.hpp
java-SkinnedMesh.o: /usr/include/m3g/Background.hpp
java-SkinnedMesh.o: /usr/include/m3g/CompositingMode.hpp
java-SkinnedMesh.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-SkinnedMesh.o: /usr/include/m3g/IndexBuffer.hpp
java-SkinnedMesh.o: /usr/include/m3g/TriangleStripArray.hpp
java-SkinnedMesh.o: /usr/include/m3g/KeyframeSequence.hpp
java-SkinnedMesh.o: /usr/include/m3g/Keyframe.hpp
java-SkinnedMesh.o: /usr/include/m3g/Material.hpp
java-SkinnedMesh.o: /usr/include/m3g/PolygonMode.hpp
java-SkinnedMesh.o: /usr/include/m3g/Transformable.hpp
java-SkinnedMesh.o: /usr/include/m3g/Quaternion.hpp
java-SkinnedMesh.o: /usr/include/m3g/Transform.hpp
java-SkinnedMesh.o: /usr/include/m3g/Matrix.hpp /usr/include/m3g/Node.hpp
java-SkinnedMesh.o: /usr/include/m3g/Camera.hpp /usr/include/m3g/Group.hpp
java-SkinnedMesh.o: /usr/include/m3g/World.hpp /usr/include/m3g/Light.hpp
java-SkinnedMesh.o: /usr/include/m3g/Mesh.hpp
java-SkinnedMesh.o: /usr/include/m3g/MorphingMesh.hpp
java-SkinnedMesh.o: /usr/include/m3g/SkinnedMesh.hpp
java-SkinnedMesh.o: /usr/include/m3g/BoneIndex.hpp
java-SkinnedMesh.o: /usr/include/m3g/Sprite3D.hpp
java-SkinnedMesh.o: /usr/include/m3g/Texture2D.hpp
java-SkinnedMesh.o: /usr/include/m3g/VertexArray.hpp
java-SkinnedMesh.o: /usr/include/m3g/VertexBuffer.hpp
java-SkinnedMesh.o: /usr/include/m3g/RayIntersection.hpp
java-SkinnedMesh.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-SkinnedMesh.o: /usr/include/m3g/M3GReader.hpp
java-SkinnedMesh.o: /usr/include/m3g/InMemoryStream.hpp
java-SkinnedMesh.o: /usr/include/m3g/M3GStruct.hpp
java-SkinnedMesh.o: /usr/include/m3g/Exception.hpp
java-SkinnedMesh.o: /usr/include/m3g/RenderState.hpp
java-Sprite3D.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-Sprite3D.o: /usr/include/stdio.h /usr/include/features.h
java-Sprite3D.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-Sprite3D.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-Sprite3D.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-Sprite3D.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-Sprite3D.o: /usr/include/_G_config.h /usr/include/wchar.h
java-Sprite3D.o: /usr/include/bits/stdio_lim.h
java-Sprite3D.o: /usr/include/bits/sys_errlist.h
java-Sprite3D.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-Sprite3D.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-Sprite3D.o: /usr/include/m3g/m3gdef.hpp /usr/include/m3g/Graphics3D.hpp
java-Sprite3D.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-Sprite3D.o: /usr/include/m3g/m3ginternal.hpp
java-Sprite3D.o: /usr/include/m3g/AnimationController.hpp
java-Sprite3D.o: /usr/include/m3g/AnimationTrack.hpp
java-Sprite3D.o: /usr/include/m3g/Appearance.hpp
java-Sprite3D.o: /usr/include/m3g/Background.hpp
java-Sprite3D.o: /usr/include/m3g/CompositingMode.hpp
java-Sprite3D.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-Sprite3D.o: /usr/include/m3g/IndexBuffer.hpp
java-Sprite3D.o: /usr/include/m3g/TriangleStripArray.hpp
java-Sprite3D.o: /usr/include/m3g/KeyframeSequence.hpp
java-Sprite3D.o: /usr/include/m3g/Keyframe.hpp /usr/include/m3g/Material.hpp
java-Sprite3D.o: /usr/include/m3g/PolygonMode.hpp
java-Sprite3D.o: /usr/include/m3g/Transformable.hpp
java-Sprite3D.o: /usr/include/m3g/Quaternion.hpp
java-Sprite3D.o: /usr/include/m3g/Transform.hpp /usr/include/m3g/Matrix.hpp
java-Sprite3D.o: /usr/include/m3g/Node.hpp /usr/include/m3g/Camera.hpp
java-Sprite3D.o: /usr/include/m3g/Group.hpp /usr/include/m3g/World.hpp
java-Sprite3D.o: /usr/include/m3g/Light.hpp /usr/include/m3g/Mesh.hpp
java-Sprite3D.o: /usr/include/m3g/MorphingMesh.hpp
java-Sprite3D.o: /usr/include/m3g/SkinnedMesh.hpp
java-Sprite3D.o: /usr/include/m3g/BoneIndex.hpp /usr/include/m3g/Sprite3D.hpp
java-Sprite3D.o: /usr/include/m3g/Texture2D.hpp
java-Sprite3D.o: /usr/include/m3g/VertexArray.hpp
java-Sprite3D.o: /usr/include/m3g/VertexBuffer.hpp
java-Sprite3D.o: /usr/include/m3g/RayIntersection.hpp
java-Sprite3D.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-Sprite3D.o: /usr/include/m3g/M3GReader.hpp
java-Sprite3D.o: /usr/include/m3g/InMemoryStream.hpp
java-Sprite3D.o: /usr/include/m3g/M3GStruct.hpp
java-Sprite3D.o: /usr/include/m3g/Exception.hpp
java-Sprite3D.o: /usr/include/m3g/RenderState.hpp
java-Texture2D.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-Texture2D.o: /usr/include/stdio.h /usr/include/features.h
java-Texture2D.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-Texture2D.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-Texture2D.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-Texture2D.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-Texture2D.o: /usr/include/_G_config.h /usr/include/wchar.h
java-Texture2D.o: /usr/include/bits/stdio_lim.h
java-Texture2D.o: /usr/include/bits/sys_errlist.h
java-Texture2D.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-Texture2D.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-Texture2D.o: /usr/include/m3g/m3gdef.hpp /usr/include/m3g/Graphics3D.hpp
java-Texture2D.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-Texture2D.o: /usr/include/m3g/m3ginternal.hpp
java-Texture2D.o: /usr/include/m3g/AnimationController.hpp
java-Texture2D.o: /usr/include/m3g/AnimationTrack.hpp
java-Texture2D.o: /usr/include/m3g/Appearance.hpp
java-Texture2D.o: /usr/include/m3g/Background.hpp
java-Texture2D.o: /usr/include/m3g/CompositingMode.hpp
java-Texture2D.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-Texture2D.o: /usr/include/m3g/IndexBuffer.hpp
java-Texture2D.o: /usr/include/m3g/TriangleStripArray.hpp
java-Texture2D.o: /usr/include/m3g/KeyframeSequence.hpp
java-Texture2D.o: /usr/include/m3g/Keyframe.hpp /usr/include/m3g/Material.hpp
java-Texture2D.o: /usr/include/m3g/PolygonMode.hpp
java-Texture2D.o: /usr/include/m3g/Transformable.hpp
java-Texture2D.o: /usr/include/m3g/Quaternion.hpp
java-Texture2D.o: /usr/include/m3g/Transform.hpp /usr/include/m3g/Matrix.hpp
java-Texture2D.o: /usr/include/m3g/Node.hpp /usr/include/m3g/Camera.hpp
java-Texture2D.o: /usr/include/m3g/Group.hpp /usr/include/m3g/World.hpp
java-Texture2D.o: /usr/include/m3g/Light.hpp /usr/include/m3g/Mesh.hpp
java-Texture2D.o: /usr/include/m3g/MorphingMesh.hpp
java-Texture2D.o: /usr/include/m3g/SkinnedMesh.hpp
java-Texture2D.o: /usr/include/m3g/BoneIndex.hpp
java-Texture2D.o: /usr/include/m3g/Sprite3D.hpp
java-Texture2D.o: /usr/include/m3g/Texture2D.hpp
java-Texture2D.o: /usr/include/m3g/VertexArray.hpp
java-Texture2D.o: /usr/include/m3g/VertexBuffer.hpp
java-Texture2D.o: /usr/include/m3g/RayIntersection.hpp
java-Texture2D.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-Texture2D.o: /usr/include/m3g/M3GReader.hpp
java-Texture2D.o: /usr/include/m3g/InMemoryStream.hpp
java-Texture2D.o: /usr/include/m3g/M3GStruct.hpp
java-Texture2D.o: /usr/include/m3g/Exception.hpp
java-Texture2D.o: /usr/include/m3g/RenderState.hpp
java-Transform.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-Transform.o: /usr/include/stdio.h /usr/include/features.h
java-Transform.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-Transform.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-Transform.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-Transform.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-Transform.o: /usr/include/_G_config.h /usr/include/wchar.h
java-Transform.o: /usr/include/bits/stdio_lim.h
java-Transform.o: /usr/include/bits/sys_errlist.h
java-Transform.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-Transform.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-Transform.o: /usr/include/m3g/m3gdef.hpp /usr/include/m3g/Graphics3D.hpp
java-Transform.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-Transform.o: /usr/include/m3g/m3ginternal.hpp
java-Transform.o: /usr/include/m3g/AnimationController.hpp
java-Transform.o: /usr/include/m3g/AnimationTrack.hpp
java-Transform.o: /usr/include/m3g/Appearance.hpp
java-Transform.o: /usr/include/m3g/Background.hpp
java-Transform.o: /usr/include/m3g/CompositingMode.hpp
java-Transform.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-Transform.o: /usr/include/m3g/IndexBuffer.hpp
java-Transform.o: /usr/include/m3g/TriangleStripArray.hpp
java-Transform.o: /usr/include/m3g/KeyframeSequence.hpp
java-Transform.o: /usr/include/m3g/Keyframe.hpp /usr/include/m3g/Material.hpp
java-Transform.o: /usr/include/m3g/PolygonMode.hpp
java-Transform.o: /usr/include/m3g/Transformable.hpp
java-Transform.o: /usr/include/m3g/Quaternion.hpp
java-Transform.o: /usr/include/m3g/Transform.hpp /usr/include/m3g/Matrix.hpp
java-Transform.o: /usr/include/m3g/Node.hpp /usr/include/m3g/Camera.hpp
java-Transform.o: /usr/include/m3g/Group.hpp /usr/include/m3g/World.hpp
java-Transform.o: /usr/include/m3g/Light.hpp /usr/include/m3g/Mesh.hpp
java-Transform.o: /usr/include/m3g/MorphingMesh.hpp
java-Transform.o: /usr/include/m3g/SkinnedMesh.hpp
java-Transform.o: /usr/include/m3g/BoneIndex.hpp
java-Transform.o: /usr/include/m3g/Sprite3D.hpp
java-Transform.o: /usr/include/m3g/Texture2D.hpp
java-Transform.o: /usr/include/m3g/VertexArray.hpp
java-Transform.o: /usr/include/m3g/VertexBuffer.hpp
java-Transform.o: /usr/include/m3g/RayIntersection.hpp
java-Transform.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-Transform.o: /usr/include/m3g/M3GReader.hpp
java-Transform.o: /usr/include/m3g/InMemoryStream.hpp
java-Transform.o: /usr/include/m3g/M3GStruct.hpp
java-Transform.o: /usr/include/m3g/Exception.hpp
java-Transform.o: /usr/include/m3g/RenderState.hpp
java-Transformable.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-Transformable.o: /usr/include/stdio.h /usr/include/features.h
java-Transformable.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-Transformable.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-Transformable.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-Transformable.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-Transformable.o: /usr/include/_G_config.h /usr/include/wchar.h
java-Transformable.o: /usr/include/bits/stdio_lim.h
java-Transformable.o: /usr/include/bits/sys_errlist.h
java-Transformable.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h
java-Transformable.o: java-m3g.hpp java-m3g-common.hpp
java-Transformable.o: /usr/include/m3g/m3g.hpp /usr/include/m3g/m3gdef.hpp
java-Transformable.o: /usr/include/m3g/Graphics3D.hpp
java-Transformable.o: /usr/include/m3g/Object.hpp
java-Transformable.o: /usr/include/m3g/Object3D.hpp
java-Transformable.o: /usr/include/m3g/m3ginternal.hpp
java-Transformable.o: /usr/include/m3g/AnimationController.hpp
java-Transformable.o: /usr/include/m3g/AnimationTrack.hpp
java-Transformable.o: /usr/include/m3g/Appearance.hpp
java-Transformable.o: /usr/include/m3g/Background.hpp
java-Transformable.o: /usr/include/m3g/CompositingMode.hpp
java-Transformable.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-Transformable.o: /usr/include/m3g/IndexBuffer.hpp
java-Transformable.o: /usr/include/m3g/TriangleStripArray.hpp
java-Transformable.o: /usr/include/m3g/KeyframeSequence.hpp
java-Transformable.o: /usr/include/m3g/Keyframe.hpp
java-Transformable.o: /usr/include/m3g/Material.hpp
java-Transformable.o: /usr/include/m3g/PolygonMode.hpp
java-Transformable.o: /usr/include/m3g/Transformable.hpp
java-Transformable.o: /usr/include/m3g/Quaternion.hpp
java-Transformable.o: /usr/include/m3g/Transform.hpp
java-Transformable.o: /usr/include/m3g/Matrix.hpp /usr/include/m3g/Node.hpp
java-Transformable.o: /usr/include/m3g/Camera.hpp /usr/include/m3g/Group.hpp
java-Transformable.o: /usr/include/m3g/World.hpp /usr/include/m3g/Light.hpp
java-Transformable.o: /usr/include/m3g/Mesh.hpp
java-Transformable.o: /usr/include/m3g/MorphingMesh.hpp
java-Transformable.o: /usr/include/m3g/SkinnedMesh.hpp
java-Transformable.o: /usr/include/m3g/BoneIndex.hpp
java-Transformable.o: /usr/include/m3g/Sprite3D.hpp
java-Transformable.o: /usr/include/m3g/Texture2D.hpp
java-Transformable.o: /usr/include/m3g/VertexArray.hpp
java-Transformable.o: /usr/include/m3g/VertexBuffer.hpp
java-Transformable.o: /usr/include/m3g/RayIntersection.hpp
java-Transformable.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-Transformable.o: /usr/include/m3g/M3GReader.hpp
java-Transformable.o: /usr/include/m3g/InMemoryStream.hpp
java-Transformable.o: /usr/include/m3g/M3GStruct.hpp
java-Transformable.o: /usr/include/m3g/Exception.hpp
java-Transformable.o: /usr/include/m3g/RenderState.hpp
java-TriangleStripArray.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-TriangleStripArray.o: /usr/include/stdio.h /usr/include/features.h
java-TriangleStripArray.o: /usr/include/bits/predefs.h
java-TriangleStripArray.o: /usr/include/sys/cdefs.h
java-TriangleStripArray.o: /usr/include/bits/wordsize.h
java-TriangleStripArray.o: /usr/include/gnu/stubs.h
java-TriangleStripArray.o: /usr/include/gnu/stubs-64.h
java-TriangleStripArray.o: /usr/include/bits/types.h
java-TriangleStripArray.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-TriangleStripArray.o: /usr/include/_G_config.h /usr/include/wchar.h
java-TriangleStripArray.o: /usr/include/bits/stdio_lim.h
java-TriangleStripArray.o: /usr/include/bits/sys_errlist.h
java-TriangleStripArray.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h
java-TriangleStripArray.o: java-m3g.hpp java-m3g-common.hpp
java-TriangleStripArray.o: /usr/include/m3g/m3g.hpp
java-TriangleStripArray.o: /usr/include/m3g/m3gdef.hpp
java-TriangleStripArray.o: /usr/include/m3g/Graphics3D.hpp
java-TriangleStripArray.o: /usr/include/m3g/Object.hpp
java-TriangleStripArray.o: /usr/include/m3g/Object3D.hpp
java-TriangleStripArray.o: /usr/include/m3g/m3ginternal.hpp
java-TriangleStripArray.o: /usr/include/m3g/AnimationController.hpp
java-TriangleStripArray.o: /usr/include/m3g/AnimationTrack.hpp
java-TriangleStripArray.o: /usr/include/m3g/Appearance.hpp
java-TriangleStripArray.o: /usr/include/m3g/Background.hpp
java-TriangleStripArray.o: /usr/include/m3g/CompositingMode.hpp
java-TriangleStripArray.o: /usr/include/m3g/Fog.hpp
java-TriangleStripArray.o: /usr/include/m3g/Image2D.hpp
java-TriangleStripArray.o: /usr/include/m3g/IndexBuffer.hpp
java-TriangleStripArray.o: /usr/include/m3g/TriangleStripArray.hpp
java-TriangleStripArray.o: /usr/include/m3g/KeyframeSequence.hpp
java-TriangleStripArray.o: /usr/include/m3g/Keyframe.hpp
java-TriangleStripArray.o: /usr/include/m3g/Material.hpp
java-TriangleStripArray.o: /usr/include/m3g/PolygonMode.hpp
java-TriangleStripArray.o: /usr/include/m3g/Transformable.hpp
java-TriangleStripArray.o: /usr/include/m3g/Quaternion.hpp
java-TriangleStripArray.o: /usr/include/m3g/Transform.hpp
java-TriangleStripArray.o: /usr/include/m3g/Matrix.hpp
java-TriangleStripArray.o: /usr/include/m3g/Node.hpp
java-TriangleStripArray.o: /usr/include/m3g/Camera.hpp
java-TriangleStripArray.o: /usr/include/m3g/Group.hpp
java-TriangleStripArray.o: /usr/include/m3g/World.hpp
java-TriangleStripArray.o: /usr/include/m3g/Light.hpp
java-TriangleStripArray.o: /usr/include/m3g/Mesh.hpp
java-TriangleStripArray.o: /usr/include/m3g/MorphingMesh.hpp
java-TriangleStripArray.o: /usr/include/m3g/SkinnedMesh.hpp
java-TriangleStripArray.o: /usr/include/m3g/BoneIndex.hpp
java-TriangleStripArray.o: /usr/include/m3g/Sprite3D.hpp
java-TriangleStripArray.o: /usr/include/m3g/Texture2D.hpp
java-TriangleStripArray.o: /usr/include/m3g/VertexArray.hpp
java-TriangleStripArray.o: /usr/include/m3g/VertexBuffer.hpp
java-TriangleStripArray.o: /usr/include/m3g/RayIntersection.hpp
java-TriangleStripArray.o: /usr/include/m3g/Vector.hpp
java-TriangleStripArray.o: /usr/include/m3g/Loader.hpp
java-TriangleStripArray.o: /usr/include/m3g/M3GReader.hpp
java-TriangleStripArray.o: /usr/include/m3g/InMemoryStream.hpp
java-TriangleStripArray.o: /usr/include/m3g/M3GStruct.hpp
java-TriangleStripArray.o: /usr/include/m3g/Exception.hpp
java-TriangleStripArray.o: /usr/include/m3g/RenderState.hpp
java-VertexArray.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-VertexArray.o: /usr/include/stdio.h /usr/include/features.h
java-VertexArray.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-VertexArray.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-VertexArray.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-VertexArray.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-VertexArray.o: /usr/include/_G_config.h /usr/include/wchar.h
java-VertexArray.o: /usr/include/bits/stdio_lim.h
java-VertexArray.o: /usr/include/bits/sys_errlist.h
java-VertexArray.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-VertexArray.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-VertexArray.o: /usr/include/m3g/m3gdef.hpp
java-VertexArray.o: /usr/include/m3g/Graphics3D.hpp
java-VertexArray.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-VertexArray.o: /usr/include/m3g/m3ginternal.hpp
java-VertexArray.o: /usr/include/m3g/AnimationController.hpp
java-VertexArray.o: /usr/include/m3g/AnimationTrack.hpp
java-VertexArray.o: /usr/include/m3g/Appearance.hpp
java-VertexArray.o: /usr/include/m3g/Background.hpp
java-VertexArray.o: /usr/include/m3g/CompositingMode.hpp
java-VertexArray.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-VertexArray.o: /usr/include/m3g/IndexBuffer.hpp
java-VertexArray.o: /usr/include/m3g/TriangleStripArray.hpp
java-VertexArray.o: /usr/include/m3g/KeyframeSequence.hpp
java-VertexArray.o: /usr/include/m3g/Keyframe.hpp
java-VertexArray.o: /usr/include/m3g/Material.hpp
java-VertexArray.o: /usr/include/m3g/PolygonMode.hpp
java-VertexArray.o: /usr/include/m3g/Transformable.hpp
java-VertexArray.o: /usr/include/m3g/Quaternion.hpp
java-VertexArray.o: /usr/include/m3g/Transform.hpp
java-VertexArray.o: /usr/include/m3g/Matrix.hpp /usr/include/m3g/Node.hpp
java-VertexArray.o: /usr/include/m3g/Camera.hpp /usr/include/m3g/Group.hpp
java-VertexArray.o: /usr/include/m3g/World.hpp /usr/include/m3g/Light.hpp
java-VertexArray.o: /usr/include/m3g/Mesh.hpp
java-VertexArray.o: /usr/include/m3g/MorphingMesh.hpp
java-VertexArray.o: /usr/include/m3g/SkinnedMesh.hpp
java-VertexArray.o: /usr/include/m3g/BoneIndex.hpp
java-VertexArray.o: /usr/include/m3g/Sprite3D.hpp
java-VertexArray.o: /usr/include/m3g/Texture2D.hpp
java-VertexArray.o: /usr/include/m3g/VertexArray.hpp
java-VertexArray.o: /usr/include/m3g/VertexBuffer.hpp
java-VertexArray.o: /usr/include/m3g/RayIntersection.hpp
java-VertexArray.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-VertexArray.o: /usr/include/m3g/M3GReader.hpp
java-VertexArray.o: /usr/include/m3g/InMemoryStream.hpp
java-VertexArray.o: /usr/include/m3g/M3GStruct.hpp
java-VertexArray.o: /usr/include/m3g/Exception.hpp
java-VertexArray.o: /usr/include/m3g/RenderState.hpp
java-VertexBuffer.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-VertexBuffer.o: /usr/include/stdio.h /usr/include/features.h
java-VertexBuffer.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-VertexBuffer.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-VertexBuffer.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-VertexBuffer.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-VertexBuffer.o: /usr/include/_G_config.h /usr/include/wchar.h
java-VertexBuffer.o: /usr/include/bits/stdio_lim.h
java-VertexBuffer.o: /usr/include/bits/sys_errlist.h
java-VertexBuffer.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h
java-VertexBuffer.o: java-m3g.hpp java-m3g-common.hpp
java-VertexBuffer.o: /usr/include/m3g/m3g.hpp /usr/include/m3g/m3gdef.hpp
java-VertexBuffer.o: /usr/include/m3g/Graphics3D.hpp
java-VertexBuffer.o: /usr/include/m3g/Object.hpp
java-VertexBuffer.o: /usr/include/m3g/Object3D.hpp
java-VertexBuffer.o: /usr/include/m3g/m3ginternal.hpp
java-VertexBuffer.o: /usr/include/m3g/AnimationController.hpp
java-VertexBuffer.o: /usr/include/m3g/AnimationTrack.hpp
java-VertexBuffer.o: /usr/include/m3g/Appearance.hpp
java-VertexBuffer.o: /usr/include/m3g/Background.hpp
java-VertexBuffer.o: /usr/include/m3g/CompositingMode.hpp
java-VertexBuffer.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-VertexBuffer.o: /usr/include/m3g/IndexBuffer.hpp
java-VertexBuffer.o: /usr/include/m3g/TriangleStripArray.hpp
java-VertexBuffer.o: /usr/include/m3g/KeyframeSequence.hpp
java-VertexBuffer.o: /usr/include/m3g/Keyframe.hpp
java-VertexBuffer.o: /usr/include/m3g/Material.hpp
java-VertexBuffer.o: /usr/include/m3g/PolygonMode.hpp
java-VertexBuffer.o: /usr/include/m3g/Transformable.hpp
java-VertexBuffer.o: /usr/include/m3g/Quaternion.hpp
java-VertexBuffer.o: /usr/include/m3g/Transform.hpp
java-VertexBuffer.o: /usr/include/m3g/Matrix.hpp /usr/include/m3g/Node.hpp
java-VertexBuffer.o: /usr/include/m3g/Camera.hpp /usr/include/m3g/Group.hpp
java-VertexBuffer.o: /usr/include/m3g/World.hpp /usr/include/m3g/Light.hpp
java-VertexBuffer.o: /usr/include/m3g/Mesh.hpp
java-VertexBuffer.o: /usr/include/m3g/MorphingMesh.hpp
java-VertexBuffer.o: /usr/include/m3g/SkinnedMesh.hpp
java-VertexBuffer.o: /usr/include/m3g/BoneIndex.hpp
java-VertexBuffer.o: /usr/include/m3g/Sprite3D.hpp
java-VertexBuffer.o: /usr/include/m3g/Texture2D.hpp
java-VertexBuffer.o: /usr/include/m3g/VertexArray.hpp
java-VertexBuffer.o: /usr/include/m3g/VertexBuffer.hpp
java-VertexBuffer.o: /usr/include/m3g/RayIntersection.hpp
java-VertexBuffer.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-VertexBuffer.o: /usr/include/m3g/M3GReader.hpp
java-VertexBuffer.o: /usr/include/m3g/InMemoryStream.hpp
java-VertexBuffer.o: /usr/include/m3g/M3GStruct.hpp
java-VertexBuffer.o: /usr/include/m3g/Exception.hpp
java-VertexBuffer.o: /usr/include/m3g/RenderState.hpp
java-World.o: /usr/lib/jvm/java-6-openjdk/include/jni.h /usr/include/stdio.h
java-World.o: /usr/include/features.h /usr/include/bits/predefs.h
java-World.o: /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h
java-World.o: /usr/include/gnu/stubs.h /usr/include/gnu/stubs-64.h
java-World.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
java-World.o: /usr/include/libio.h /usr/include/_G_config.h
java-World.o: /usr/include/wchar.h /usr/include/bits/stdio_lim.h
java-World.o: /usr/include/bits/sys_errlist.h
java-World.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h java-m3g.hpp
java-World.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-World.o: /usr/include/m3g/m3gdef.hpp /usr/include/m3g/Graphics3D.hpp
java-World.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-World.o: /usr/include/m3g/m3ginternal.hpp
java-World.o: /usr/include/m3g/AnimationController.hpp
java-World.o: /usr/include/m3g/AnimationTrack.hpp
java-World.o: /usr/include/m3g/Appearance.hpp /usr/include/m3g/Background.hpp
java-World.o: /usr/include/m3g/CompositingMode.hpp /usr/include/m3g/Fog.hpp
java-World.o: /usr/include/m3g/Image2D.hpp /usr/include/m3g/IndexBuffer.hpp
java-World.o: /usr/include/m3g/TriangleStripArray.hpp
java-World.o: /usr/include/m3g/KeyframeSequence.hpp
java-World.o: /usr/include/m3g/Keyframe.hpp /usr/include/m3g/Material.hpp
java-World.o: /usr/include/m3g/PolygonMode.hpp
java-World.o: /usr/include/m3g/Transformable.hpp
java-World.o: /usr/include/m3g/Quaternion.hpp /usr/include/m3g/Transform.hpp
java-World.o: /usr/include/m3g/Matrix.hpp /usr/include/m3g/Node.hpp
java-World.o: /usr/include/m3g/Camera.hpp /usr/include/m3g/Group.hpp
java-World.o: /usr/include/m3g/World.hpp /usr/include/m3g/Light.hpp
java-World.o: /usr/include/m3g/Mesh.hpp /usr/include/m3g/MorphingMesh.hpp
java-World.o: /usr/include/m3g/SkinnedMesh.hpp /usr/include/m3g/BoneIndex.hpp
java-World.o: /usr/include/m3g/Sprite3D.hpp /usr/include/m3g/Texture2D.hpp
java-World.o: /usr/include/m3g/VertexArray.hpp
java-World.o: /usr/include/m3g/VertexBuffer.hpp
java-World.o: /usr/include/m3g/RayIntersection.hpp
java-World.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-World.o: /usr/include/m3g/M3GReader.hpp
java-World.o: /usr/include/m3g/InMemoryStream.hpp
java-World.o: /usr/include/m3g/M3GStruct.hpp /usr/include/m3g/Exception.hpp
java-World.o: /usr/include/m3g/RenderState.hpp
java-m3g-common.o: /usr/lib/jvm/java-6-openjdk/include/jni.h
java-m3g-common.o: /usr/include/stdio.h /usr/include/features.h
java-m3g-common.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
java-m3g-common.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
java-m3g-common.o: /usr/include/gnu/stubs-64.h /usr/include/bits/types.h
java-m3g-common.o: /usr/include/bits/typesizes.h /usr/include/libio.h
java-m3g-common.o: /usr/include/_G_config.h /usr/include/wchar.h
java-m3g-common.o: /usr/include/bits/stdio_lim.h
java-m3g-common.o: /usr/include/bits/sys_errlist.h
java-m3g-common.o: /usr/lib/jvm/java-6-openjdk/include/jni_md.h
java-m3g-common.o: java-m3g-common.hpp /usr/include/m3g/m3g.hpp
java-m3g-common.o: /usr/include/m3g/m3gdef.hpp
java-m3g-common.o: /usr/include/m3g/Graphics3D.hpp
java-m3g-common.o: /usr/include/m3g/Object.hpp /usr/include/m3g/Object3D.hpp
java-m3g-common.o: /usr/include/m3g/m3ginternal.hpp
java-m3g-common.o: /usr/include/m3g/AnimationController.hpp
java-m3g-common.o: /usr/include/m3g/AnimationTrack.hpp
java-m3g-common.o: /usr/include/m3g/Appearance.hpp
java-m3g-common.o: /usr/include/m3g/Background.hpp
java-m3g-common.o: /usr/include/m3g/CompositingMode.hpp
java-m3g-common.o: /usr/include/m3g/Fog.hpp /usr/include/m3g/Image2D.hpp
java-m3g-common.o: /usr/include/m3g/IndexBuffer.hpp
java-m3g-common.o: /usr/include/m3g/TriangleStripArray.hpp
java-m3g-common.o: /usr/include/m3g/KeyframeSequence.hpp
java-m3g-common.o: /usr/include/m3g/Keyframe.hpp
java-m3g-common.o: /usr/include/m3g/Material.hpp
java-m3g-common.o: /usr/include/m3g/PolygonMode.hpp
java-m3g-common.o: /usr/include/m3g/Transformable.hpp
java-m3g-common.o: /usr/include/m3g/Quaternion.hpp
java-m3g-common.o: /usr/include/m3g/Transform.hpp /usr/include/m3g/Matrix.hpp
java-m3g-common.o: /usr/include/m3g/Node.hpp /usr/include/m3g/Camera.hpp
java-m3g-common.o: /usr/include/m3g/Group.hpp /usr/include/m3g/World.hpp
java-m3g-common.o: /usr/include/m3g/Light.hpp /usr/include/m3g/Mesh.hpp
java-m3g-common.o: /usr/include/m3g/MorphingMesh.hpp
java-m3g-common.o: /usr/include/m3g/SkinnedMesh.hpp
java-m3g-common.o: /usr/include/m3g/BoneIndex.hpp
java-m3g-common.o: /usr/include/m3g/Sprite3D.hpp
java-m3g-common.o: /usr/include/m3g/Texture2D.hpp
java-m3g-common.o: /usr/include/m3g/VertexArray.hpp
java-m3g-common.o: /usr/include/m3g/VertexBuffer.hpp
java-m3g-common.o: /usr/include/m3g/RayIntersection.hpp
java-m3g-common.o: /usr/include/m3g/Vector.hpp /usr/include/m3g/Loader.hpp
java-m3g-common.o: /usr/include/m3g/M3GReader.hpp
java-m3g-common.o: /usr/include/m3g/InMemoryStream.hpp
java-m3g-common.o: /usr/include/m3g/M3GStruct.hpp
java-m3g-common.o: /usr/include/m3g/Exception.hpp
java-m3g-common.o: /usr/include/m3g/RenderState.hpp
