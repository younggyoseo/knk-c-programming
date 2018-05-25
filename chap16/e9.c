#include <stdio.h>
#include <stdbool.h>

struct color {
	int red;
	int green;
	int blue;
};

struct color make_color(int red, int green, int blue);
int getRed(struct color c);
bool equal_color(struct color color1, struct color color2);
struct color brighter(struct color c);
struct color darker(struct color c);

int main(void)
{
	struct color c;
	c = make_color(100, 100, 100);
	printf("%d %d %d\n", c.red, c.green, c.blue);
	
	return 0;
}

struct color make_color(int red, int green, int blue)
{
	int r = red > 255 ? 255 : (red < 0 ? 0 : red);
	int g = green > 255 ? 255 : (green < 0 ? 0 : green);
	int b = blue > 255 ? 255 : (blue < 0 ? 0 : blue);
	
	struct color c = {r, g, b};
	
	return c;
}

int getRed(struct color c)
{
	return c.red;
}

bool equal_color(struct color color1, struct color color2)
{
	bool check = true;
	if (color1.red != color2.red)
		check = false;
	if (color1.green != color2.green)
		check = false;
	if (color1.blue != color2.blue)
		check = false;
	return check;
}

struct color brighter(struct color c)
{
	if (c.red == 0 && c.green == 0 && c.blue == 0)
	{
		c.red = 3;
		c.green = 3;
		c.blue = 3;
		return c;
	}
	
	if (0 < c.red && c.red < 3)
		c.red = 3;
	if (0 < c.green && c.green < 3)
		c.green = 3;
	if (0 < c.blue && c.blue < 3)
		c.blue = 3;
	
	c.red /= 0.7;
	c.green /= 0.7;
	c.blue /= 0.7;
	
	if (c.red > 255)
		c.red = 255;
	if (c.green > 255)
		c.green = 255;
	if (c.blue > 255)
		c.blue = 255;
	
	return c;
}

struct color darker(struct color c)
{
	c.red *= 0.7;
	c.green *= 0.7;
	c.blue *= 0.7;
	
	return c;
}
