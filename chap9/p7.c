#include <stdio.h>

double power(int n, double x);

int main(void)
{
    int n;
    double x;
    
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter n: ");
    scanf("%d", &n);
    
    printf("Power: %f\n", power(n, x));
    return 0;
}

double power(int n, double x)
{
    if (n == 0)
        return 1;
    else {
        if (n % 2 == 0)
            return power(n/2, x) * power(n/2, x);
        else
            return x * power(n-1, x);
    }
}
