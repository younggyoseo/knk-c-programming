#include <stdio.h>

int main(void)
{
    int i, n, factorial;
    double e = 1.0;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    factorial = 1;
    for (i = 1; i <= n; i++) {
        // Calculate Factorial
        factorial *= i;
        
        // Calculate exponential
        e += (1 / (double) factorial);
    }
    
    printf("n: %f\n", e);
    
    return 0;
    
}
