#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 100

int main(void)
{
    char ch, arr[N], *p = arr;
    int len = 0;
    bool is_palindrome;
    
    printf("Enter a message: ");
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch)) {
            *p++ = tolower(ch);
            len++;
        }
    }
    
    is_palindrome = true;
    for (p = arr; p < arr + (len / 2); p++) {
        if (*p != *(arr + ((arr + len) - p) - 1)) {
            is_palindrome = false;
            break;
        }
    }
    
    if (is_palindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    
    return 0;
}
