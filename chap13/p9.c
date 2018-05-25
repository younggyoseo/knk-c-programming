#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char *sentence);

int main(void)
{
    char ch, sentence[100], *p = sentence;
    
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n')
        *p++ = ch;
    *p = '\0';
    
    printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));
    
    return 0;
}

int compute_vowel_count(const char *sentence)
{
    int vowel_cnt = 0;
    while (*sentence) {
        switch (toupper(*sentence++))
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowel_cnt += 1; break;
        }
    }
    return vowel_cnt;
}
