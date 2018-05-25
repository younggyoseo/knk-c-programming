#include <stdio.h>
#include <ctype.h>

#define N 100

void capitalize(char *p);

int main(void)
{
    char ch, arr[N+1], *p = arr;
    int i = 0;
    printf("Enter characters: ");
    while ((ch = getchar()) != '\n') {
        if (i < N) {
            *p++ = ch;
            i++;
        }
    }
    arr[i] = '\0';
    
    capitalize(arr);
    
    for (p = arr; *p; p++)
        printf("%c", *p);
    
    printf("\n");
    
    return 0;
}

void capitalize(char *p)
{
    while (*p) {
        *p = toupper(*p);
        p++;
    }
    
    return;
}
