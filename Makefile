#SRC is our source files
SRC = $(wildcard ./Source/*.cpp)

#CC is the compiler
CC = g++

INCLUDE_PATHS = -IC:\mingw_dev_lib\include\SDL2

LIBRARY_PATHS = -LC:\mingw_dev_lib\lib

#FLAGS
#-Wl,-subsystem,windows gets rid of console window
COMPILER_FLAGS = -Wall 

#Our Libraries
LINKER_FLAGS = -lmingw32 -lSDL2main -lSDL2

#OUT = executable name
OUT = aintpaint.exe

#The target that compiles our exe
all : $(SRC)
		$(CC) $(SRC) $(INCLUDE_PATHS) $(LIBRARY_PATHS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OUT)