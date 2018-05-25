#include <stdio.h>

typedef struct {
	double real, imaginary;
} Complex;

Complex make_complex(double r, double i);
Complex add_complex(Complex c1, Complex c2);

int main(void)
{
	Complex c1, c2, c3;
	
	c1 = make_complex(1.0, 2.0);
	c2 = make_complex(2.0, 3.0);
	c3 = add_complex(c1, c2);
	printf("%f %f\n", c3.real, c3.imaginary);
	
	return 0;
}

Complex make_complex(double r, double i)
{
	Complex num;
	num.real = r;
	num.imaginary = i;
	
	return num;
}

Complex add_complex (Complex c1, Complex c2)
{
	Complex num;
	num.real = c1.real + c2.real;
	num.imaginary = c1.imaginary + c2.imaginary;
	
	return num;
}
