#set compiler
CC = g++

#provide debug and turn on warnings
CFLAGS = -g -Wall 

#assign main target
TARGET = main

#assign deletion target for later cleaning
TARGET_DEL = main.exe

#define sources
SRCS = student.cpp address.cpp date.cpp main.cpp

#reassign sources to objects
OBJS = $(SRCS:.cpp=.o)

#build and run exe
all: $(TARGET) run

#links objects to the executable
$(TARGET): $(OBJS)
  $(CC) $(CFLAGS) -o $(TARGETS) $(OBJS)

#compile .cpp to .o
%.o: %.cpp
  $(CC) $(CFLAGS) -c $< -o $@

#valgrind setup
valgrind: $(TARGET)
  valgrind --leak-check=full ./$(TARGET)

#run
run $(TARGET)
  $(TARGET)

#cleaning
clean:
  del $(TARGET_DEL) %(OBJS)
