SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)
CXX  = g++
CXXFLAGS = -Wall -g -fPIC \
           -I/usr/lib/jvm/java-6-openjdk/include
LD = g++
LDFLAGS = -shared
LIBS   = -lglut -lGL -lGLEW
TARGET = libjni-opengl.so


all:  $(TARGET)

$(TARGET): $(OBJS)
	$(LD) $(LDFLAGS) $^ $(LIBS) -o $(TARGET)
	@echo done.

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -c


c: clean

clean:
	rm -f *.o *.core *.png *.tiff *.hdr *~ *# $(TARGET)
	@echo done.
