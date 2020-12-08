CC=gcc

obj/main.o: src/main.c
	$(CC) -Wall -c src/main.c -o obj/main.o

clean: 
	rm -r obj/*.o
