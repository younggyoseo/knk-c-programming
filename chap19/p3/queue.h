#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;

#define QUEUE_SIZE 100

typedef struct {
	Item contents[QUEUE_SIZE];
	int first, last, cnt;
} Queue;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void offer(Item i);
Item poll(void);
Item peek_first(void);
Item peek_last(void);

#endif
