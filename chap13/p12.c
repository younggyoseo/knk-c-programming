#include <stdio.h>

#define NUM_WORDS 30
#define LEN_WORD  20

int main(void)
{
    char arr[NUM_WORDS][LEN_WORD], *p, (*q)[LEN_WORD];
    char ch, terminal_ch;
    int word_cnt = 0;
    
    p = arr[0];
    printf("Enter: ");
    while((ch = getchar()) != '\n') {
        // If we meet whitespace, save last word and continue to next word.
        if (ch == ' ') {
            *p = '\0';
            p = arr[++word_cnt];
        }
        // If we meet terminal characters, save last word.
        // This should be the last character in sentence by hypothesis.
        else if ((ch == '!') ||
                 (ch == '.') ||
                 (ch == '?'))
        {
            *p = '\0';
            word_cnt++;
            terminal_ch = ch;
        }
        // if we meet normal characters, save them to word arary.
        else if (ch != ' ')
            *p++ = ch;
    }

    for (q = arr + word_cnt - 1; q >= arr; q--) {
        printf("%s", *q);
        if (q != arr)
            printf(" ");
    }
    printf("%c\n", terminal_ch);
    
    return 0;
}
