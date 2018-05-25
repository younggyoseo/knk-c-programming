#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int read_line(char str[], int n)
{
    int ch, i = 0;
    
    printf("Enter characters: ");
    while (true) {
        ch = getchar();
        if (i < n)
            str[i++] = ch;
            if (ch == '\n')
                break;
    }
    str[i] = '\0';
    return i;
}

int main(void)
{
    char arr[100];
    int i;
    
    read_line(arr, 100);
    
    for (char *p = arr; *p; p++)
        printf("%c", *p);
    printf("\n");
    
    return 0;
}
