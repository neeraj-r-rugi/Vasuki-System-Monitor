CC = gcc
CFLAGS = -Wall -Wextra -std=c11 `sdl2-config --cflags` -Iinclude -Wno-deprecated-declarations
LDFLAGS = `sdl2-config --libs`
SRC = src/main.c src/defines.c 
OUT = ./Vasuki.out

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT) $(LDFLAGS)

clean:
	rm -f $(OUT)
