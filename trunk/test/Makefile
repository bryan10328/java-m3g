# $ java org.junit.runner.JUnitCore TestAnimationController|& more
# export CLASSPATH=.:/usr/share/java/junit4.jar:../src   
#

SRCS       = $(wildcard Test*.java)
CLASSS     = $(SRCS:.java=.class)
TARGETS    = org.junit.runner.JUnitCore $(SRCS:.java=)
JAVAC      = javac
JAVACFLAGS = -classpath .:../src:/usr/share/java/junit4.jar:/usr/share/java/jogl.jar:/usr/share/java/gluegen-rt.jar
JAVA       = java
JAVAFLAGS  = $(JAVACFLAGS) \
             -Djava.library.path=./:../src:./library


all: $(CLASSS)
	$(JAVA) $(JAVAFLAGS) $(TARGETS) 
	@echo done.

%.class: %.java
	$(JAVAC) $(JAVACFLAGS) $<

depend:
	makedepend -- $(CXXFLAGS) -- $(SRCS)

clean:
	rm -rf *.o *.so *.a *~ *.out *.log *.class
	@echo done.

