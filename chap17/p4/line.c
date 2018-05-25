#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line.h"

#define MAX_LINE_LEN 60
#define MAX_WORD_LEN 20

struct line {
	char word[MAX_WORD_LEN+2];
	struct line *next;
};

struct line *list;

int line_len = 0;
int num_words = 0;

void clear_line(void)
{
	struct line *prev = NULL, *cur = list;
	
	while (cur != NULL)
	{
		prev = cur;
		cur = cur->next;
		if (prev == list) {
			list = NULL;   // Do not free first variable 'list'. Just make it NULL
		}
		else {
			free(prev);
		}
	}
	line_len = 0;
	num_words = 0;
	return;
}

void add_word(const char *word)
{
	struct line *new_node, *tmp;
	new_node = malloc(sizeof(struct line));
	
	strcpy(new_node->word, word);
	new_node->next = NULL;
	
	for (tmp = list; tmp != NULL && (tmp->next) != NULL; tmp = tmp->next)
		;

	if (tmp == NULL) {  // list is empty
		list = new_node;
	}
	else { // append a word to the end of line
		tmp->next = new_node;
		line_len++;  // increase line_len for a whitespace between words
	}
	line_len += strlen(word);
	num_words++;
}

int space_remaining(void)
{
	return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
	int extra_spaces, spaces_to_insert, i;
	struct line *tmp;
	extra_spaces = MAX_LINE_LEN - line_len;
	
	for (tmp = list; tmp != NULL; tmp = tmp->next)
	{
		for (char *p = tmp->word; *p; p++)
			putchar(*p);
			
		if (tmp->next != NULL) {
			spaces_to_insert = extra_spaces / (num_words - 1);
			for (i = 1; i <= spaces_to_insert + 1; i++)
				putchar(' ');
			extra_spaces -= spaces_to_insert;
		}
		num_words--;
	}
	putchar('\n');
}

void flush_line(void)
{
	struct line *tmp;
	
	for (tmp = list; tmp != NULL; tmp = tmp->next)
	{
		for (char *p = tmp->word; *p; p++)
			putchar(*p);
		if (tmp->next != NULL)
			putchar(' ');
	}
	putchar('\n');
}
