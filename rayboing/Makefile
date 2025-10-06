# =============================
#  OS Detection
# =============================
UNAME_S := $(shell uname -s)

ifeq ($(OS),Windows_NT)
    PLATFORM := windows
else ifeq ($(UNAME_S),Linux)
    PLATFORM := linux
else ifeq ($(UNAME_S),Darwin)
    PLATFORM := macos
else
    PLATFORM := unknown
endif

# =============================
#  Compiler Setup
# =============================
# Detect C or C++ automatically based on files
SRC_DIR := src
C_SRC := $(wildcard $(SRC_DIR)/*.c)
CPP_SRC := $(wildcard $(SRC_DIR)/*.cpp)

ifeq ($(strip $(CPP_SRC)),)
    CC := gcc
    CFLAGS := -Wall -Wextra -std=c11
else
    CC := g++
    CFLAGS := -Wall -Wextra -std=c++17
endif

# =============================
#  Raylib Paths & Flags
# =============================
RAYLIB_DIR := raylib/$(PLATFORM)
I_DIR := $(RAYLIB_DIR)/include
LIB_FILE := $(RAYLIB_DIR)/lib/libraylib.a

ifeq ($(PLATFORM),windows)
    LDFLAGS := -L$(RAYLIB_DIR)/lib -lraylib -lopengl32 -lgdi32 -lwinmm
    RM := del /Q
    EXE := program.exe
else ifeq ($(PLATFORM),linux)
    LDFLAGS := -L$(RAYLIB_DIR)/lib -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
    RM := rm -f
    EXE := program
else ifeq ($(PLATFORM),macos)
    LDFLAGS := -L$(RAYLIB_DIR)/lib -lraylib -framework OpenGL -framework Cocoa -framework IOKit
    RM := rm -f
    EXE := program
endif

# =============================
#  Files & Targets
# =============================
SRC := $(C_SRC) $(CPP_SRC)
OBJ := $(SRC:.c=.o)
OBJ := $(OBJ:.cpp=.o)
TARGET := $(EXE)

# =============================
#  Build Rules
# =============================
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -I$(I_DIR) $(OBJ) -o $@ $(LIB_FILE) $(LDFLAGS)
	@echo "Build complete: $(TARGET)"

# Compile C and C++ sources
%.o: %.c
	$(CC) $(CFLAGS) -I$(I_DIR) -c $< -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -I$(I_DIR) -c $< -o $@

# =============================
#  Utility Targets
# =============================
run: $(TARGET)
ifeq ($(PLATFORM),windows)
	$(TARGET)
else
	./$(TARGET)
endif

clean:
	$(RM) $(TARGET) $(OBJ)
	@echo "Cleaned build files."

.PHONY: all run clean
