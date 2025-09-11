#compiler 
CXX := clang++
CXXFLAGS := -std=c++11 -Wall -Wextra  -pedantic -g 

#executable

TARGETS := main test

# source files
MAIN_SRCS := main.cpp LinkedList.cpp
TEST_SRCS := TestLinkedList.cpp LinkedList.cpp

# Object files 
MAIN_OBJS := $(MAIN_SRCS:.cpp=.o)


TEST_OBJS := $(TEST_SRCS:.cpp=.o)
	


# Default target
all: $(TARGETS)

# Build main
main: $(MAIN_OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build test
test: $(TEST_OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile rule: .cpp -> .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(TARGETS) $(MAIN_OBJS) $(TEST_OBJS)

.PHONY: all clean