#include <stdio.h>

int digit(int n, int k)
{
    int i, pow = 1;
    for (i = 0; i < (k-1); i++) {
        pow *= 10;
    }
    n /= pow;
    return n % 10;
}

int main(void)
{
    printf("digit(829, 1): %d\n", digit(829,1));
    printf("digit(829, 2): %d\n", digit(829,2));
    printf("digit(829, 3): %d\n", digit(829,3));
    printf("digit(829, 4): %d\n", digit(829,4));
    
    return 0;
}
