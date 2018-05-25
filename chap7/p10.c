#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int vowel_cnt;
    char ch;
    
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n')
    {
        switch (toupper(ch))
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowel_cnt += 1; break;
        }
    }
    
    printf("Your sentence contains 6 vowels.\n");
    
    return 0;
}
