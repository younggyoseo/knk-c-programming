#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n)
{
    int ch, i = 0;
    
    printf("Enter characters: ");
    while ((ch = getchar()) != '\n') {
        if (isspace(ch)) {
            if (i == 0)
                continue;  // skip first white spaces
            else
                break;  // stop reading at first white-space character
        }
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}

int main(void)
{
    char arr[10];
    int i;
    
    read_line(arr, 10);
    
    for (char *p = arr; *p; p++)
        printf("%c", *p);
    printf("\n");
    
    return 0;
}
