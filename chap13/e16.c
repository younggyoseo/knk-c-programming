#include <stdio.h>

int count_spaces(const char *s)
{
    int count = 0;
    
    while(*s++ == ' ')
        count++;
    return count;
}

int main(void)
{
    char arr[30], ch, *p = arr;
    
    printf("Enter: ");
    while((ch = getchar()) != '\n')
        *p++ = ch;
    
    printf("White spaces: %d\n", count_spaces(arr));
    
    return 0;
}
