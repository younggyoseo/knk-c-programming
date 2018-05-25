#include <stdio.h>
#include "queue.h"

int main(void)
{
	make_empty();
	
	offer(4);
	offer(5);
	offer(6);
	
	printf("Polled %d\n", poll());
	
	printf("first: %d\n", peek_first());
	printf("last: %d\n", peek_last());
	
	return 0;
}
