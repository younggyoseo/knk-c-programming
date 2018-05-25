#include <stdio.h>

int main(void)
{
	enum {NORTH, SOUTH, EAST, WEST} direction;
	int x = 0, y = 0;
	
	switch (direction) {
		case EAST:
			x += 1;
		case WEST:
			x -= 1;
		case SOUTH:
			y -= 1;
		case NORTH:
			y += 1;
	}
	
	return 0;
}
