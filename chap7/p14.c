#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y, avg, eps = 0.00001;
    
    printf("Enter a positive number: ");;
    scanf("%lf", &x);
    
    avg = 1.0;
    do {
        y = avg;
        avg = (y + (x / y)) / 2.0;
    } while (fabs(y - avg) >= eps * y);
    
    printf("Square root: %f\n", y);
    
    return 0;
    
}
