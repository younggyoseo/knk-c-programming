#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void)
{
    char file_name[20], extension[10], ch;
    int i;
    
    printf("Enter file name: ");
    
    while((ch = getchar()) != '\n')
        file_name[i++] = ch;
    file_name[i] = '\0';
    
    get_extension(file_name, extension);
    
    printf("extension: %s\n", extension);
    return 0;
}

void get_extension(const char *file_name, char *extension)
{
    while(*file_name != '.' && *file_name != '\0')
        file_name++;
    if (*file_name == '.')
        strcpy(extension, ++file_name);
        // while (*file_name != '\0')
            // *extension++ = *file_name++;
    else
        *extension = '\0';
}
