# $ java org.junit.runner.JUnitCore TestAnimationController|& more
# export CLASSPATH=.:/usr/share/java/junit4.jar:../src   
#

SRCS = $(wildcard *.java)
CLASSS = $(SRCS:.java=.class)
TARGETS = $(SRCS:.java=)
CXX = g++
CXXFLAGS = -Wall -O3 -Wno-deprecated -I../src -I../lib
LD = g++
LDFLAGS = -L../src -L../lib
LIBS =  -lm3g  -lUnitTest++ -lglut -lGL -lz
CLASSPATH = .:/usr/share/java/junit4.jar:../src

all: $(CLASSS)
	java -classpath $(CLASSPATH) org.junit.runner.JUnitCore $(TARGETS) 
	@echo done.

%.class: %.java
	javac -classpath $(CLASSPATH) $<

depend:
	makedepend -- $(CXXFLAGS) -- $(SRCS)

clean:
	rm -rf *.o *.so *.a *~ *.out *.log *.class
	@echo done.

