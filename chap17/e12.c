struct node {
	int value;
	struct node *next;
};

struct node *find_last(struct node *list, int n)
{
	struct node *target_cur = NULL, *cur = list;
	
	while (cur != NULL)
	{
		if (cur->value == n)
			target_cur = cur;
		cur = cur->next;
	}
	
	return target_cur;
}

