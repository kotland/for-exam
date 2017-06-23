.PHONY: clean

all: program

program: bin/for-exam

bin/for-exam: build/src/main.o
	gcc build/src/main.o -o bin/for-exam -lm

build/src/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o -lm

clean:
	rm -rf build/src/*.o bin/for-exam
