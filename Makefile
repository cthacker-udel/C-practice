all: build run clean

build: codewars.o
	gcc -o prog codewars.o

%.o: %.c
	gcc -g -c $<

run:
	./prog

clean:
	rm -rf %.o %.exe