#include <stdio.h>

#define N 100

void censor(char *p);

int main(void)
{
    char ch, arr[N+1], *p = arr;
    int i = 0;
    
    printf("Enter Characters: ");
    while ((ch = getchar()) != '\n') {
        *p++ = ch;
        i++;
    }
    arr[i] = '\0';

    censor(arr);
    
    for (p = arr; *p; p++)
        printf("%c", *p);
    printf("\n");
    
    return 0;
}

void censor(char *p)
{
    for (p = p + 2; *p; p++)
        if ((*(p-2) == 'f') &&
            (*(p-1) == 'o') &&
            (*(p)     == 'o')) {
                *(p-2) = *(p-1) = *p = 'x';
            }
    return;
}
