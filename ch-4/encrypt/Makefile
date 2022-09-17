encrypt.o: encrypt.c encrypt.h
	gcc -c encrypt.c

runner.o: runner.c
	gcc -c runner.c

launch: encrypt.o runner.o
	gcc encrypt.o runner.o -o launch