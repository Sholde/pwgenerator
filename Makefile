CC=gcc
CFLAGS=-std=c99
DFLAGS=-g3 -Wall

all : main

main :
	$(CC) $(CFLAGS) $(DFLAGS) main.c -o pwgenerator