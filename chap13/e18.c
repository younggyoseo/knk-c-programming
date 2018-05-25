#include <stdio.h>

void remove_filename(char *url);

int main(void)
{
    char url[100], ch, *p = url;
    
    printf("Enter url: ");
    
    while((ch = getchar()) != '\n')
        *p++ = ch;
    
    remove_filename(url);
    
    printf("%s\n", url);
    
    return 0;
}

void remove_filename(char *url)
{
    while (*url++)
        continue;
    
    while (*url != '/')
        *url-- = '\0';
    *url = '\0';
    
    return;
}
