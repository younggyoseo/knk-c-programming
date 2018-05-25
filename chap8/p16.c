#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    int i, alpha_arr[26] = {0}; 
    bool anagram;
    char ch;
    
    printf("Enter first word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch) == false)
            continue;
        ch = tolower(ch);
        alpha_arr[ch - 97] += 1;
    }
    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch) == false)
            continue;
        ch = tolower(ch);
        alpha_arr[ch - 97] -= 1;
    }
    
    anagram = true;
    for(i = 0; i < 26; i++) {
        if (alpha_arr[i] != 0) {
            anagram = false;
            break;
        }
    }
    
    if (anagram == true)
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");
        
    return 0;
}
