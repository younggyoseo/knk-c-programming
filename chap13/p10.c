#include <stdio.h>
#include <string.h>

void reverse_name(char *name);

int main(void)
{
    char ch, name[100], *p = name;
    
    printf("Enter a first and last name: ");
    while ((ch = getchar()) != '\n')
        *p++ = ch;
    *p = '\0';
    
    reverse_name(name);
    
    printf("Result: %s\n", name);
    
    return 0;
    
}

void reverse_name(char *name)
{
    char first_ch[2], *p = name;
    
    while (*p == ' ')  // Consume whitespaces before first name
        p++;
    
    strncpy(first_ch, p, 1);   // Save first character of first name
    first_ch[1] = '\0';
    
    while (*p != ' ')  // Consume remaining characters of first name
        p++;
    
    while (*p == ' ')  // Consume white spaces between first name and last name
        p++;
    
    strcpy(name, p);
    strcat(name, ", ");
    strcat(name, first_ch);
    
    return;
}
