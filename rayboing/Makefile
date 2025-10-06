# =============================
#  OS Detection
# =============================
UNAME_S := $(shell uname -s)

ifeq ($(OS),Windows_NT)
    PLATFORM := windows
else ifneq (,$(findstring MINGW,$(UNAME_S)))
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
SRC_DIR := src
C_SRC := $(wildcard $(SRC_DIR)/*.c)
CPP_SRC := $(wildcard $(SRC_DIR)/*.cpp)

ifeq ($(strip $(CPP_SRC)),)
    CC := gcc
    CFLAGS := -Wall -Wextra -std=c11 -Iinclude
else
    CC := g++
    CFLAGS := -Wall -Wextra -std=c++17 -Iinclude
endif

# =============================
#  Raylib Paths & Flags
# =============================
RAYLIB_DIR := raylib/$(PLATFORM)
I_DIR := $(RAYLIB_DIR)/include
LIB_FILE := $(RAYLIB_DIR)/lib/libraylib.a

ifeq ($(PLATFORM),windows)
    LDFLAGS := -L$(RAYLIB_DIR)/lib -lraylib -lopengl32 -lgdi32 -lwinmm
else ifeq ($(PLATFORM),linux)
    LDFLAGS := -L$(RAYLIB_DIR)/lib -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
else ifeq ($(PLATFORM),macos)
    LDFLAGS := -L$(RAYLIB_DIR)/lib -lraylib -framework OpenGL -framework Cocoa -framework IOKit
endif

# =============================
#  Files & Targets
# =============================
SRC := $(C_SRC) $(CPP_SRC)
OBJ := $(SRC:.c=.o)
OBJ := $(OBJ:.cpp=.o)
TARGET := program
ifeq ($(PLATFORM),windows)
    EXE := $(TARGET).exe
else
    EXE := $(TARGET)
endif

# =============================
#  Build Rules
# =============================
all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) -I$(I_DIR) $(OBJ) -o $@ $(LIB_FILE) $(LDFLAGS)
	@echo "Build complete: $@"

# Compile C and C++ sources
%.o: %.c
	$(CC) $(CFLAGS) -I$(I_DIR) -c $< -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -I$(I_DIR) -c $< -o $@

# =============================
#  Utility Targets
# =============================
run: $(EXE)
ifeq ($(PLATFORM),windows)
	$(EXE)
else
	./$(EXE)
endif

clean:
ifeq ($(PLATFORM),windows)
	if exist "$(EXE)" del /F /Q "$(EXE)"
	if exist "src\*.o" del /F /Q src\*.o
else
	rm -f $(EXE) src/*.o
endif
	@echo "Cleaned build files."

.PHONY: all run clean
