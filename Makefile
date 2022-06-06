all: build run

build: codewars.o
	gcc -o codewars codewars.o

%.o: %.c
	gcc -g -c $<

run: build
	./codewars.exe

clean:
	del *.o *.exe