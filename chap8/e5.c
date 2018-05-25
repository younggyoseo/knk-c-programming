#include <stdio.h>

int main(void)
{
    int fib_numbers[40] = {0, 1};
    int i;
    
    for (i = 2; i < 40; i++)
    {
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
    }
    
    for (i = 0; i < 40; i++)
    {
        printf("%d ", fib_numbers[i]);
    }
    printf("\n");
    return 0;
}
