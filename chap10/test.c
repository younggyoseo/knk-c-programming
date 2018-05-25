#include <stdio.h>

int main(void)
{
    char ch;
    printf("Enter a number: ");
    scanf("%c", &ch);
    
    if (ch == 1)
        printf("Number!\n");
    else if (ch == '1')
        printf("String!\n");
    
    return 0;
}
