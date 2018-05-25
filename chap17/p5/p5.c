#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "readline.h"

#define MAX_WORD_LEN 20
#define MAX_NUM 100

int compare_strings(const void *p, const void *q);

int main(void)
{
	char word[MAX_WORD_LEN + 1];
	char *word_arr[MAX_NUM];
	int idx = 0;
	
	while (true)
	{
		read_line(word, MAX_WORD_LEN);
		
		if (idx >= MAX_NUM || strlen(word) == 0)
			break;
		
		word_arr[idx] = malloc(strlen(word) + 1);
		strcpy(word_arr[idx], word);
		idx++;
	}
	qsort(word_arr, idx, sizeof(word_arr[0]),
		  compare_strings);
	
	printf("In sorted order: ");
	for (int i = 0; i < idx; i++)
		printf("%s ", word_arr[i]);
	printf("\n");
	
	return 0;
}

int compare_strings(const void *p, const void *q)
{
	return strcmp(*(char **)p, *(char **)q);
}
