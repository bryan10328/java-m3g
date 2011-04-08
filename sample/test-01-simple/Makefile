SRCS       = $(wildcard *.java)
OBJS       = $(SRCS:.java=.class)
TARGETS    = JavaMain
JAVAC      = javac
JAVACFLAGS = -classpath .:../../bin/lib:../../src:/usr/share/java/jogl.jar:/usr/share/java/gluegen-rt.jar
JAVA       = java
JAVAFLAGS  = $(JAVACFLAGS)

all: $(OBJS)
	$(JAVA) $(JAVAFLAGS) $(TARGETS)
	@echo done.

%.class: %.java
	$(JAVAC) $(JAVACFLAGS) $<

clean:
	rm -rf *.o *.so *~ *.class *.log
	@echo done.

