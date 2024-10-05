all:
	gcc -W -Wall -Wextra -pedantic -std=c17 -c main.c -o main.o
	gcc -W -Wall -Wextra -pedantic -std=c17 -c util.c -o util.o
	gcc main.o util.o -o exemplo1

clean:
	rm -f main.o
	rm -f util.o
	rm -f exemplo1