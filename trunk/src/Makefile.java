SRCS = \
org/karlsland/m3g/AnimationController.java  org/karlsland/m3g/Mesh.java             \
org/karlsland/m3g/AnimationTrack.java       org/karlsland/m3g/MorphingMesh.java     \
org/karlsland/m3g/Appearance.java           org/karlsland/m3g/Node.java             \
org/karlsland/m3g/Background.java           org/karlsland/m3g/Object3D.java         \
org/karlsland/m3g/Camera.java               org/karlsland/m3g/PolygonMode.java      \
org/karlsland/m3g/CompositingMode.java      org/karlsland/m3g/RayIntersection.java  \
org/karlsland/m3g/Fog.java                  org/karlsland/m3g/SkinnedMesh.java      \
org/karlsland/m3g/Graphics3D.java           org/karlsland/m3g/Sprite3D.java         \
org/karlsland/m3g/Group.java                org/karlsland/m3g/Texture2D.java        \
org/karlsland/m3g/Image2D.java              org/karlsland/m3g/Transform.java        \
org/karlsland/m3g/IndexBuffer.java          org/karlsland/m3g/Transformable.java      \
org/karlsland/m3g/KeyframeSequence.java     org/karlsland/m3g/TriangleStripArray.java \
org/karlsland/m3g/Light.java                org/karlsland/m3g/VertexArray.java      \
org/karlsland/m3g/Loader.java               org/karlsland/m3g/VertexBuffer.java     \
org/karlsland/m3g/Material.java             org/karlsland/m3g/World.java            \
org/karlsland/m3g/OpenGLException.java      org/karlsland/m3g/NotImplementedException.java \
org/karlsland/m3g/InternalException.java 
PACKAGES = \
org.karlsland.m3g.AnimationController  org.karlsland.m3g.Mesh             \
org.karlsland.m3g.AnimationTrack       org.karlsland.m3g.MorphingMesh     \
org.karlsland.m3g.Appearance           org.karlsland.m3g.Node             \
org.karlsland.m3g.Background           org.karlsland.m3g.Object3D         \
org.karlsland.m3g.Camera               org.karlsland.m3g.PolygonMode      \
org.karlsland.m3g.CompositingMode      org.karlsland.m3g.RayIntersection  \
org.karlsland.m3g.Fog                  org.karlsland.m3g.SkinnedMesh      \
org.karlsland.m3g.Graphics3D           org.karlsland.m3g.Sprite3D         \
org.karlsland.m3g.Group                org.karlsland.m3g.Texture2D        \
org.karlsland.m3g.Image2D              org.karlsland.m3g.Transform        \
org.karlsland.m3g.IndexBuffer          org.karlsland.m3g.Transformable      \
org.karlsland.m3g.KeyframeSequence     org.karlsland.m3g.TriangleStripArray \
org.karlsland.m3g.Light                org.karlsland.m3g.VertexArray      \
org.karlsland.m3g.Loader               org.karlsland.m3g.VertexBuffer     \
org.karlsland.m3g.Material             org.karlsland.m3g.World            \
org.karlsland.m3g.OpenGLException      org.karlsland.m3g.NotImplementedException \
org.karlsland.m3g.InternalException 
CLASSES  = $(SRCS:.java=.class)
TARGET = libm3g.so
JAVAC = javac
JAVAFLAGS = 
JAVAH = javah
JAVAH_FLAGS = -jni
JNI_HPP = java-m3g.hpp
LD = 
LDFLAGS = 
LIBS = 


all: $(CLASSES)
	$(JAVAH) $(JAVAH_FLAGS) -o $(JNI_HPP) $(PACKAGES)
	@echo done.


#%.class: %.java
#	$(JAVAC) $(JAVAFLAGS) $<

$(CLASSES): $(SRCS)
	$(JAVAC) $(JAVAFLAGS) $(SRCS)



clean:
	rm -rf *.o *.so *~ $(JNI_HPP) $(CLASSES)
	@echo done.


