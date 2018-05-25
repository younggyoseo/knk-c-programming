#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define STACK_SIZE 100

struct node {
	int number;
	struct node *next;
}

struct node *top = NULL;

void make_empty(void)
{
	struct node *temp;
	
	while (top != NULL) {
		temp = top;
		top = top->next;
		free(temp);
	}
}

bool is_empty(void)
{
	return stack == NULL;
}

bool push(int i)
{
	struct node *new_node;
	new_node = malloc(sizeof(struct node));
	if (new_node == NULL) {
		printf("Memory is full!\n");
		return false;
	}
	new_node->number = i;
	new_node->next = top;
	top = new_node;
	
	return true;
}

int pop(void)
{
	if (is_empty()) {
		printf("Empty!\n");
		exit(EXIT_FAILURE);
	}
	else {
		int element = top->number;
		struct *node tmp = top;
		top = top->next;
		free(tmp);
		return element;
	}
}

