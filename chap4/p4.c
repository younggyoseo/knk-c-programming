#include <stdio.h>

int main(void)
{
    int decimal_num, octal_num;
    int n1, n2, n3, n4, n5;
    
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &decimal_num);
    
    n1 = decimal_num % 8;
    n2 = (decimal_num / 8) % 8;
    n3 = ((decimal_num / 8) / 8) % 8;
    n4 = (((decimal_num / 8) / 8) / 8) % 8;
    n5 = ((((decimal_num / 8) / 8) / 8) / 8) % 8;
    
    printf("In octal, your number is: %d%d%d%d%d\n", n5, n4, n3, n2, n1);
    return 0;
}
