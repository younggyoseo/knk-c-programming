#include <stdbool.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

int area(struct rectangle r)
{
	return (r.lower_right.x - r.upper_left.x) * (r.upper_left.y - r.lower_right.y);
}

struct point center(struct rectangle r)
{
	struct point c;
	c.x = (r.upper_left.x + r.lower_right.x) / 2;
	c.y = (r.upper_left.y + r.lower_right.y) / 2;
	
	return c;
}

struct rectangle shift(struct rectangle r, int x, int y)
{
	r.upper_left.x += x;
	r.lower_right.x += x;
	r.upper_left.y += y;
	r.lower_right.y += y;
	
	return r;
}

bool is_within(struct rectangle r, struct point p)
{
	bool check = false;
	if ((r.upper_left.x < p.x && p.x < r.lower_right.x) &&
		(r.lower_right.y < p.y && p.y < r.upper_left.y))
		check = true;
	
	return check;
}
