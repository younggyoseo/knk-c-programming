#include <stdio.h>

int main(void)
{
    int num, denom, m, n, tmp, gcd;
    
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);
    
    m = num;
    n = denom;
    
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
    
    printf("In lowest terms: %d/%d\n", num/gcd, denom/gcd);
    return 0;
}
