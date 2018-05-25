#include <stdio.h>

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduce_denominator);

int main(void)
{
    int num, denom, reduced_num, reduced_denom, gcd;
    
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);
    
    reduce(num, denom, &reduced_num, &reduced_denom);
    
    printf("In lowest terms: %d/%d\n", reduced_num, reduced_denom);
    return 0;
}

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator)
{
    int m = numerator, n = denominator, gcd, tmp;
    
    while(1) {
        if (n == 0)
            break;
        else if (n != 0) {
            tmp = m % n;
            m = n;
            n = tmp;
        }
    }
    
    gcd = m;
    
    *reduced_numerator = numerator / gcd;
    *reduced_denominator = denominator / gcd;
    
    return;
}
