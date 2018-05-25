#include <stdio.h>
int gcd(int m, int n);

int main(void)
{
    printf("gcd of 27, 9 is %d\n", gcd(27, 9));
    return 0;
}

int gcd(int m, int n)
{
    if (n == 0)
        return m;
    else
        return gcd(n, m % n);
}
