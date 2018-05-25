demo: f1.o f2.o main.o
    gcc -o main main.o f1.o f2.o

f1.o: f1.c f1.h f2.h
    gcc -c f1.c

f2.o: f2.c f1.h f2.h
    gcc -c f2.c

main.o: main.c f1.h
    gcc -c main.c
