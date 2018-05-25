#include <stdio.h>

int gcd(int m, int n)
{
    int tmp;
    while (n != 0) {
        tmp = m % n;
        m = n;
        n = tmp;
    }
    return m;
}
