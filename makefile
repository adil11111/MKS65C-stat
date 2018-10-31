all: stat.o
	gcc stat.o

run:
	./a.out

clean:
	rm *.o
	rm file.txt

stat.o: stat.c
	gcc -c stat.c
