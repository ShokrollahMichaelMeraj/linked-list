#compiler 
CXX := c++
CXXFLAGS := -std=c++11 -Wall -Wextra  -pedantic -g 

#executable

TARGETS := main test app

# source files
MAIN_SRCS := main.cpp LinkedList.cpp
TEST_SRCS := TestLinkedList.cpp LinkedList.cpp
APP_SRCS := demo.cpp LinkedList.cpp

# Object files 
MAIN_OBJS := $(MAIN_SRCS:.cpp=.o)

TEST_OBJS := $(TEST_SRCS:.cpp=.o)

APP_OBJS := $(APP_SRCS:.cpp=.o)
	


# Default target
all: $(TARGETS)

# Build main
main: $(MAIN_OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build test
test: $(TEST_OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Build demo

app: $(APP_OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^


# Compile rule: .cpp -> .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(TARGETS) $(MAIN_OBJS) $(TEST_OBJS) $(APP_OBJS)

.PHONY: all clean