TARGET = Main

SOURCE = source
BIN = bin
INC = header_files

SRC = $(wildcard $(SOURCE)/*.cpp)
OBJ = $(patsubst %,$(BIN)/%, $(notdir $(SRC:.cpp=.o)))

CC = g++
FLAGS = -Wall -I$(INC)

$(BIN)/$(TARGET):	$(OBJ)
	$(CC) -o $@ $^

$(BIN)/%.o:	$(SOURCE)/%.cpp
	$(CC) $(FLAGS) -c $< -o $@

run:	
	./$(BIN)/$(TARGET)