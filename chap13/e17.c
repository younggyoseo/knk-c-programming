#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool test_extension(const char *file_name,
                    const char *extension);

int main(void)
{
    char file_name[100], extension[100], *p, ch;
    
    p = file_name;
    printf("Enter file name with extension: ");
    while ((ch = getchar()) != '\n')
        *p++ = ch;
    
    p = extension;
    printf("Enter extension: ");
    while ((ch = getchar()) != '\n')
        *p++ = ch;
    
    bool successful = test_extension(file_name, extension);
    
    if (successful == true)
        printf("True!\n");
    else
        printf("False!\n");
    
    return 0;
}


bool test_extension(const char *file_name,
                    const char *extension)
{
    char *p;
    
    while (*file_name++ != '.')
        continue;
    
    for (p = file_name; *p; p++)
        *p = toupper(*p);
    for (p = extension; *p; p++)
        *p = toupper(*p);
    
    return strcmp(file_name, extension) == 0;
}
