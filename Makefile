all: run

build: codewars.o
	gcc -o prog codewars.o

%.o: %.c
	gcc -g -c $<

run: clean build
	./prog

clean:
	rm -rf %.o %.exe