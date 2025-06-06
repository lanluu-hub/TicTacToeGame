# Lan Luu
# lanluu@pdx.edu
# makefile for TicTacToeGame
CXX = g++
DEBUG = -g3
CXXFLAGS = $(DEBUG) -Wall -std=c++17

# $@  - The name of the target of the rule
# $<  - The name of the first prerequisite
# $^  - The names of all the prerequisites

# Target executable
TARGET = tictactoe

# sources files
SRCS = \
		main.cpp \
		src/Player.cpp \
		src/Board.cpp \
		src/TicTacToe.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default rule to build and run the executable
all: $(TARGET)

# Rule to link object files into target executable
$(TARGET): $(OBJS)
	$(CXX)	$(CXXFLAGS)	-o	$@	$(OBJS)

# RUle to complile .cpp files into .o files
%.o: %.cpp
	$(CXX)	$(CXXFLAGS)	-c	$<	-o	$@

# Rule to run the executable
run: $(TARGET)
	./$(TARGET)

# Clean rule to remove generated files
clean:
ifeq ($(OS), Windows_NT)
	del	/Q $(subst /,\,$(TARGET).exe)	$(subst /,\,$(OBJS))
else
	rm -f $(TARGET)	$(OBJS)
endif
