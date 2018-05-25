#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int value_arr[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int value = 0;
    
    printf("Enter a word: ");
    while ((ch = getchar()) != '\n')
    {
        value += value_arr[toupper(ch) - 65];
    }
    printf("Scrabble value: %d\n", value);
    
    return 0;
}
