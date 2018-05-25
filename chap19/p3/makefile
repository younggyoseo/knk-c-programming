queue: queueclient.o queue.o
	gcc -o queue queueclient.o queue.o

queueclient.o: queueclient.c queue.h
	gcc -c queueclient.c

queue.o: queue1.c queue.h
	gcc -c queue1.c
