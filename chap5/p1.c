#include <stdio.h>

int main(void)
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("The number %d has ", num);
    if (num >= 0 && num <= 9)
        printf("1");
    else if (num >= 10 && num <= 99)
        printf("2");
    else if (num >= 100 && num <= 999)
        printf("3");
    printf(" digits\n");
    
    return 0;
    
}
