all: build run

build: codewars.o
	gcc -o prog codewars.o

%.o: %.c
	gcc -g -c $<

run: build
	./prog

clean:
	rm -rf *.o *.exe