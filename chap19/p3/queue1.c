#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "queue.h"

#define PUBLIC /* empty */
#define PRIVATE static

Queue queue;

PRIVATE void terminate(const char *message)
{
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}

PUBLIC void make_empty(void)
{
	queue.first = 0;
	queue.last = 0;
	queue.cnt = 0;
	return;
}

PUBLIC bool is_empty(void)
{
	return cnt == 0;
}

PUBLIC bool is_full(void)
{
	return cnt == QUEUE_SIZE;
}

PUBLIC void offer(Item i)
{
	if (is_full())
		terminate("Error in offer: queue is full.");
	
	queue.contents[queue.last++] = i;
	queue.last %= QUEUE_SIZE;
	cnt++;
}

PUBLIC Item poll(void)
{
	if (is_empty())
		terminate("Error in poll: queue is empty.");
	
	Item a = queue.contents[queue.first++];
	queue.first %= QUEUE_SIZE;
	cnt--;
	return a;
}

PUBLIC Item peek_first(void)
{
	if (is_empty())
		terminate("Error in peek_first: queue is empty.");
	
	return queue.contents[queue.first];
}

PUBLIC Item peek_last(void)
{
	if (is_empty())
		terminate("Error in peek_last: uqeue is empty.");
	
	return queue.contents[queue.last];
}
