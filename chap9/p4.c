#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
    int i, alpha_arr1[26] = {0}, alpha_arr2[26] = {0};
    bool anagram;
    char ch;
    
    read_word(alpha_arr1);
    read_word(alpha_arr2);
    
    anagram = equal_array(alpha_arr1, alpha_arr2);
    
    if (anagram == true)
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");
        
    return 0;
}

void read_word(int counts[26])
{
    char ch;
    printf("Enter word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch) == false)
            continue;
        ch = tolower(ch);
        counts[ch - 97] += 1;
    }
}

bool equal_array(int counts1[26], int counts2[26])
{
    int i;
    bool anagram = true;

    for(i = 0; i < 26; i++) {
        if (counts1[i] != counts2[i]) {
            anagram = false;
            break;
        }
    }
    
    return anagram;
}
