#include <stdio.h>

#define N 100

int main(void)
{
    char ch, arr[N], *p = arr;
    int len = 0;
    
    printf("Enter a message: ");
    while ((ch = getchar()) != '\n')
    {
        *p++ = ch;
        len++;
    }
    
    printf("Reversal is: ");
    for(p = arr + (len - 1); p >= arr; p--)
        printf("%c", *p);
    printf("\n");
    
    return 0;
}
