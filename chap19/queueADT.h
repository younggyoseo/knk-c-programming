#ifndef QUEUE_H
#define QUEUE_H

typedef int Item;

typedef struct queue_type *Queue;

Queue create(void);
void destory(Queue s);
void make_empty(Queue s);
bool is_empty(Queue s);
bool is_full(Queue s);
void offer(Queue q, Item i);	// Insert an item at the end of the queue
Item poll(Queue q);			    // Remove an item from the beginning of the queue
Item peek_first(const Queue q);	// Return the first item in the queue(w.o changing the queue)
Item peek_last(const Queue q);	// Return the last item in the queue(w.o changing the queue)

#endif
