all: listmake run
listmake:
	gcc -Wall list_test.c -o list_test3
run: list_test3
	./list_test3
