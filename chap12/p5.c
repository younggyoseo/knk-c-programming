#include <stdio.h>

int main(void)
{
    char ch, terminal_ch, sentence_char_arr[100];
    int len, start_idx, end_idx;
    char *p, *q;
    
    p = sentence_char_arr;
    printf("Enter a sentence: ");
    for(;;) {
        ch = getchar();
        if (ch == '?' || ch == '.' || ch == '!') {
            terminal_ch = ch;
            break;
        }
        *p++ = ch;
        len++;
    }
    
    end_idx = len;
    start_idx = len;
    
    printf("Reversal of sentence: ");
    
    for (p = sentence_char_arr + len - 1; p >= sentence_char_arr; p--) {
        if (*p == ' ' || p == sentence_char_arr) {
            start_idx = p - sentence_char_arr;
            if (p != sentence_char_arr) start_idx += 1;
            for (q = sentence_char_arr + start_idx; q < sentence_char_arr + end_idx; q++) {
                printf("%c", *q);
            }
            printf(" ");
            end_idx = p - sentence_char_arr;
        }
    }
    printf("%c\n", terminal_ch);
    
    return 0;
}
