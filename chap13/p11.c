#include <stdio.h>

double compute_average_word_length(const char *sentence);

int main(void)
{
    char sentence[100], *p = sentence, ch;
    
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n')
        *p++ = ch;
    *p = '\0';
    
    printf("Average word length: %.1f\n", compute_average_word_length(sentence));
    return 0;
}

double compute_average_word_length(const char *sentence)
{
    int word_length_cnt = 0, word_num_cnt = 1;

    while (*sentence)
    {
        if (*sentence == ' ')
            word_num_cnt++;
        else if (*sentence != ' ')
            word_length_cnt++;
        sentence++;
    }
    
    return (double) word_length_cnt / word_num_cnt;
}
