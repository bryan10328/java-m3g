SRCS   = $(wildcard *.java)
CLSSS  = $(SRCS:.java=.class)
TARGET = libm3g.so
JAVAC = javac
JAVAFLAGS = 
LD = 
LDFLAGS = 
LIBS = 


all: $(CLSSS)
	@echo done.

#%.class: %.java
#	$(JAVAC) $(JAVAFLAGS) $<

$(CLSSS): $(SRCS)
	$(JAVAC) $(JAVAFLAGS) $(SRCS)


clean:
	rm -rf *.o *.so *~ *.class
	@echo done.


