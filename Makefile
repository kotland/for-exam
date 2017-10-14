.PHONY: clean

all: clean program

program: bin/for-exam bin/test

bin/test: build/src/test/test.o build/src/calc.o
	gcc build/src/test/test.o build/src/calc.o -o bin/test -lm

build/src/test/test.o:
	gcc -Wall -Werror -c src/test/test.c -o build/src/test/test.o -lm

bin/for-exam: build/src/main.o build/src/calc.o
	gcc build/src/main.o build/src/calc.o -o bin/for-exam -lm

build/src/main.o:
	gcc -Wall -Werror -c src/main.c -o build/src/main.o -lm

build/src/calc.o:
	gcc -Wall -Werror -c src/calc.c -o build/src/calc.o -lm

clean:
	rm -rf build/src/*.o build/src/test/*.o bin/for-exams