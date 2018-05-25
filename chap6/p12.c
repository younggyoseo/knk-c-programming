#include <stdio.h>

int main(void)
{
    int i, n, factorial;
    double e = 1.0, eps;
    
    printf("Enter epsilon: ");
    scanf("%lf", &eps);
    
    factorial = 1;
    for (i = 1 ;; i++) {
        // Calculate Factorial
        factorial *= i;
        
        // Calculate exponential
        if ((1.0 / factorial) < eps)
            break;
        e += (1.0 / factorial);
    }
    
    printf("e: %f\n", e);
    
    return 0;
    
}
