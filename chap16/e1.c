#include <stdio.h>

int main(void)
{
	struct { int x, y; } x;
	struct { int x, y; } y;
	
	x.x = 1;
	x.y = 2;
	y.x = 3;
	y.y = 4;
	
	printf("%d %d %d %d\n", x.x, x.y, y.x, y.y);
	return 0;
}
