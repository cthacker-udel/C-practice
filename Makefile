all: run

run: clean build
	./prog

clean:
	rm -rf %.o %.exe

build: codewars.o
	gcc -o prog codewars.o

%.o: %.c
	gcc -g -c $<