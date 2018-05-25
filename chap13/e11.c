#include <stdio.h>

int strcmp(char *s, char *t)
{
    int i;
    
    do {
        if (*s == '\0' && *t == '\0')
            return 0;
    } while (*s++ == *t++);
    
    return s[i] - t[i];
}

int main(void)
{
    char str1[30] = "Hello", str2[30] = "Hello";
    int i;
    
    i = strcmp(str1, str2);
    
    printf("strcmp(\"%s\", \"%s\"): %d\n", str1, str2, i);
    
    return 0;
}
