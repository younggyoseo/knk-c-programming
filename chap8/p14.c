#include <stdio.h>

int main(void)
{
    char ch, terminal_ch, sentence_char_arr[100];
    int i, j, cnt, start_idx, end_idx;
    
    printf("Enter a sentence: ");
    cnt = 0;
    for(;;) {
        ch = getchar();
        if (ch == '?' || ch == '.' || ch == '!') {
            terminal_ch = ch;
            break;
        }
        sentence_char_arr[cnt++] = ch;
    }
    
    end_idx = cnt;
    start_idx = cnt;
    
    printf("Reversal of sentence: ");
    
    for (i = cnt; i >= 0; i--) {
        if (sentence_char_arr[i] == ' ' || i == 0) {
            start_idx = i;
            if (i != 0) start_idx += 1;
            for (j = start_idx; j < end_idx; j++) {
                printf("%c", sentence_char_arr[j]);
            }
            printf(" ");
            end_idx = i;
        }
    }
    printf("%c\n", terminal_ch);
    
    return 0;
}
