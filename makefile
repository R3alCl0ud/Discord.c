CC = clang
CFLAGS = -std=c99 -Wall
SRC = src

all: compile

# COMPILE FILES
compile:
	$(CC) $(CFLAGS) $(SRC)/Discord.c
