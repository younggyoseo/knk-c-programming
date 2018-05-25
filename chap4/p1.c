#include <stdio.h>

int main(void)
{
    int num, n1, n2;
    
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    
    n1 = num / 10;
    n2 = num % 10;
    
    printf("The reversal is: %d%d\n", n2, n1);
    
    return 0;
}
