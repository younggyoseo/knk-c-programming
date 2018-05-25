#include <stdio.h>

struct complex {
	double real;
	double imaginary;
};

struct complex make_complex(double r, double i);
struct complex add_complex(struct complex c1, struct complex c2);

int main(void)
{
	struct complex c1, c2, c3;
	
	c1 = make_complex(1.0, 2.0);
	c2 = make_complex(2.0, 3.0);
	c3 = add_complex(c1, c2);
	printf("%f %f\n", c3.real, c3.imaginary);
	
	return 0;
}

struct complex make_complex(double r, double i)
{
	struct complex num;
	num.real = r;
	num.imaginary = i;
	
	return num;
}

struct complex add_complex (struct complex c1, struct complex c2)
{
	struct complex num;
	num.real = c1.real + c2.real;
	num.imaginary = c1.imaginary + c2.imaginary;
	
	return num;
}
