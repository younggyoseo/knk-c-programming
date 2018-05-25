#include <stdio.h>

int main(void)
{
    int num;
    
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    
    printf("The reversal is: ");
    do {
        printf("%d", num % 10);
        num /= 10;
    } while (num > 0);
    printf("\n");
    
    return 0;
}
