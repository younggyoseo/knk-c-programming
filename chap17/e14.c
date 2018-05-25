struct node {
	int value;
	struct *node next;

void delete_from_list(struct node **list, int n)
{
	struct node *cur, *prev;
	
	for (cur = *list, prev = NULL;
		 cur != NULL && cur->value != n;
		 prev = cur, cur = cur->next)
		 ;
	if (cur == NULL)
		return;
	if (prev == NULL)
		*list = *list->next;
	else
		prev->next = cur->next;
	free(cur);
	return;
}
