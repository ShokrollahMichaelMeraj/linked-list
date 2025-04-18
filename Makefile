#compiler 
CXX = clang++
CXXFLAGS = -std=c++11 -Wall

#executable

TARGET = linkedlist

# source files
SRCS = main.cpp LinkedList.cpp

# Object files 
OBJS = $(SRCS:.cpp=.o)

# Default rule
all: $(TARGET)

# Link object files into final executable
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# Clean up compiled files
clean:
	rm -f $(TARGET) *.o