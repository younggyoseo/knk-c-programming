#include <stdio.h>

int main(void)
{
    int word_length_cnt, word_num_cnt;
    float avg_word_length;
    char ch;
    
    printf("Enter a sentence: ");
    word_num_cnt = 1;
    while ((ch = getchar()) != '\n')
    {
        if (ch != ' ')
            word_length_cnt += 1;
        else if (ch == ' ')
            word_num_cnt += 1;
    }
    
    printf("Average word length: %.1f\n", (float) word_length_cnt / word_num_cnt);
    return 0;
}
