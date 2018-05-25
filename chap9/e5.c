#include <stdio.h>

int num_digits(int n)
{
    int cnt;
    while (n != 0) {
        n /= 10;
        cnt++;
    }
    
    return cnt;
}

int main(void)
{
    printf("number of digits in '54321': %d\n", num_digits(54321));
    return 0;
}
