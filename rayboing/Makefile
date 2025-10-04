# Compiler
CC := gcc

# Compiler flags
CFLAGS := -Wall -Wextra -std=c11 -Iraylib/include

# Sources
SRC := src/paddle_demo.c src/paddle.c

# Output executable
TARGET := paddle_demo

# Raylib libraries
LDFLAGS := -Lraylib/lib -lraylib -lopengl32 -lgdi32 -lwinmm

# Default target
all: $(TARGET)

# Compile & link
$(TARGET):
	$(CC) $(CFLAGS) $(SRC) $(LDFLAGS) -o $(TARGET)

# Clean
clean:
	del $(TARGET) 2>nul
