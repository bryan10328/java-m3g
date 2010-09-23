# $ java org.junit.runner.JUnitCore TestAnimationController|& more
# export CLASSPATH=.:/usr/share/java/junit4.jar:../src   
#

SRCS       = Setup.java $(wildcard Test*.java)
CLASSS     = $(SRCS:.java=.class)
TARGETS    = org.junit.runner.JUnitCore $(SRCS:.java=)
JAVAC      = javac
JAVACFLAGS = -classpath .:../src:/usr/share/java/junit4.jar
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

