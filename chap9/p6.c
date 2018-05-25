#include <stdio.h>

double poly(double x);

int main(void)
{
    double x;
    printf("Enter x: ");
    scanf("%lf", &x);
    
    printf("Result: %f\n", poly(x));
    return 0;
}

double poly(double x)
{
    double result;
    result = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
    return result;
}
