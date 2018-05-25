#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool are_anagrams(const char * word1, const char *word2);

int main(void)
{
    char word1[100], word2[100], *p;
    bool anagram;
    char ch;
    
    p = word1;
    printf("Enter First Word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch) == false)
            continue;
        *p++ = ch;
    }

    p = word2;
    printf("Enter Second Word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch) == false)
            continue;
        *p++ = ch;
    }
    
    
    anagram = are_anagrams(word1, word2);
    
    if (anagram == true)
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");
        
    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    int alpha_arr[26] = {0};

    for(; *word1; word1++)
        alpha_arr[tolower(*word1) - 97] += 1;

    for(; *word2; word2++)
        alpha_arr[tolower(*word2) - 97] -= 1;

    for (int i = 0; i < 26; i++)
        if (alpha_arr[i] != 0)
            return false;

    return true;
}
