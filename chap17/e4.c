#include <stdio.h>
#include <stdlib.h>

struct point {
	int x, y;
};

struct rectangle {
	struct point upper_left, lower_right;
};

int main(void)
{
	struct rectangle *p;
	p = malloc(2 * sizeof(struct point));
	
	p->upper_left.x = 20;
	p->upper_left.y = 15;
	p->lower_right.x = 25;
	p->lower_right.y = 20;
	
	printf("%d, %d\n", (p->upper_left).x, (p->upper_left).y);
	printf("%d, %d\n", (p->lower_right).x, (p->lower_right).y);
	return 0;
}

