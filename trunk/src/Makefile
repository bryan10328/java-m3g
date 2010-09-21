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

