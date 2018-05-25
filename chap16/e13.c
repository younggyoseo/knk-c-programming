#include <stdio.h>

int main(void)
{
	union {
		struct {
			int height, width;
		} rectangle;
		struct {
			int radius;
		} circle;
	} u;
	
	u.circle.radius = 5;
	
	printf("%d\n", u.circle.radius);
	
	return 0;
}
