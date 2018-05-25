#include <stdio.h>

double inner_product(const double *a, const double *b, int n)
{
    int i;
    double result = 0.0;
    for (i = 0; i < n; i++)
        result += (*a++) * (*b++);
    
    return result;
}

int main(void)
{
    double arr1[3] = {1.0, 2.0, 3.0};
    double arr2[3] = {1.0, 2.0, 3.0};
    
    printf("%lf\n", inner_product(arr1, arr2, 3));
    return 0;
}
