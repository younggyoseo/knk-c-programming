#define RECTANGLE 0
#define CIRCLE 1
#define PI 3.14

struct point { int x, y; };

struct shape {
	int shape_kind;
	struct point center;
	union {
		struct {
			int height, width;
		} rectangle;
		struct {
			int radius;
		} circle;
	} u;
} s;

int area(struct shape s)
{
	int a;
	
	if (s.shape_kind == RECTANGLE)
		a = s.u.rectangle.height * s.u.rectangle.width;
	else if (s.shape_kind == CIRCLE)
		a = s.u.circle.radius * s.u.circle.radius * PI;
	else
		a = -1;
	
	return a;
}

struct shape shift(struct shape s, int x, int y)
{
	struct shape new_shape = s;
	new_shape.center.x += x;
	new_shape.center.y += y;
	
	return new_shape;
}

struct shape scale(struct shape s, double c)
{
	struct shape new_shape = s;
	
	if (new_shape.shape_kind == RECTANGLE)
	{
		new_shape.u.rectangle.height *= c;
		new_shape.u.rectangle.width *= c;
	}
	else if (new_shape.shape_kind == CIRCLE)
	{
		new_shape.u.circle.radius *= c;
	}
	
	return new_shape;
}

