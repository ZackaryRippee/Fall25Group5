# Compiler
CC := gcc

# Compiler flags
CFLAGS := -Wall -Wextra -std=c11 -Iinclude -Iraylib/include

# Linker flags (Raylib + Windows dependencies)
LDFLAGS := -Lraylib/lib -lraylib -lopengl32 -lgdi32 -lwinmm

# Sources and objects
SRC := $(wildcard src/*.c)
OBJ := $(SRC:.c=.o)

# Output executable
TARGET := demo

# Detect OS for executable extension
ifeq ($(OS),Windows_NT)
    EXE := $(TARGET).exe
    RMEXE := if exist $(EXE) del /F /Q $(EXE)
    RMOBJ := if exist src\*.o del /F /Q src\*.o
else
    EXE := $(TARGET)
    RMEXE := rm -f $(EXE)
    RMOBJ := rm -f src/*.o
endif

# Default target
all: $(EXE)

# Link step
$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $@ $(LDFLAGS)

# Compile each .c into .o
src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	$(RMEXE)
	$(RMOBJ)
