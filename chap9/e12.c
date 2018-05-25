#include <stdio.h>

double inner_product(double a[], double b[], int n);

int main(void)
{
    double a[5] = {0.1, 0.2, 0.3, 0.4, 0.5};
    double b[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    printf("%f\n", inner_product(a, b, 5));
    return 0;
}

double inner_product(double a[], double b[], int n)
{
    int i;
    double dot = 0.0;
    
    for (i = 0; i < n; i++) {
        dot += (a[i] * b[i]);
    }
    return dot;
}
