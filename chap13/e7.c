#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[20] = "Hello World!";
    
    // *arr = 0;
    // arr[0] = '\0';
    // strcpy(arr, "");
    strcat(arr, "");
    
    printf("%s\n", arr);
    
    return 0;
}
