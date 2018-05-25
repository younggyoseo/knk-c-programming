#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    char word[20], smallest_word[20], largest_word[20];
    bool first = true;
    
    while (true) {
        printf("Enter word: ");
        scanf("%s", word);
        if (first) {
            strcpy(smallest_word, word);
            strcpy(largest_word, word);
            first = false;
        }
        
        if (strlen(word) == 4)
            break;
        
        if (strcmp(word, smallest_word) < 0)
            strcpy(smallest_word, word);
        
        else if (strcmp(word, largest_word) > 0)
            strcpy(largest_word, word);
    }
    
    printf("\n");
    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);
    
    return 0;
}
