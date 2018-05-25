#include <stdio.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60

char line[MAX_LINE_LEN+1];
int line_len = 0;
int num_words = 0;
int line_cnt = 0;

void clear_line(void)
{
    line[0] = '\0';
    line_len = 0;
    num_words = 0;
    line_cnt = 0;
}

void add_word(const char *word)
{
    if (num_words > 0) {
        line[line_len] = ' ';
        line[line_len+1] = '\0';
        line_len++;
    }
    strcat(line, word);
    line_len += strlen(word);
    num_words++;
}

int space_remaining(void)
{
    return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
    int extra_spaces, i, j, mod, word_cnt = 0;
    
    extra_spaces = MAX_LINE_LEN - line_len;
    int spaces_to_insert[num_words - 1];
    
    for (i = 0; i < num_words - 1; i++)
        spaces_to_insert[i] = 1 + extra_spaces / (num_words - 1);
    
    mod = extra_spaces % (num_words - 1);
    
    if (line_cnt % 2 == 0)
        for (i = 0; i < mod; i++)
            spaces_to_insert[i] += 1;
    else if (line_cnt % 2 == 1)
        for (i = mod - 1; i >= 0; i--)
            spaces_to_insert[i] += 1;
	/*DEBUG
    printf("line_cnt = %d\n", line_cnt);
    printf("extra spaces = %d\n", extra_spaces);
    printf("num_words = %d\n", num_words);
    printf("mod = %d\n", mod);
    for (i = 0; i < num_words - 1; i++)
    	printf("spaces_to_insert[%d] = %d\n", i, spaces_to_insert[i]);*/
    
    for (i = 0; i < line_len; i++) {
        if (line[i] != ' ')
            putchar(line[i]);
        else
            for (j = 0; j < spaces_to_insert[word_cnt++]; j++)
                putchar(' ');
        }
    putchar('\n');
    line_cnt++;
}

void flush_line(void)
{
    if (line_len > 0)
        puts(line);
}
