struct node {
	int value;
	struct node *next;
};

int count_occurrences(struct node *list, int n)
{
	int cnt = 0;
	while (list != NULL)
	{
		if (list->value == n)
		{
			cnt++;
		}
		list = list->next;
	}
	
	return cnt;
}
