struct node *delete_from_list(struct node *list, int n)
{
	struct node *cur;
	
	for (cur = list;
		 cur != NULL && cur->value !=n;
		 cur = cur->next)
		 ;
	
	if (cur->next == NULL)  // Last Node
	{
		for (cur = list;
			 cur != NULL && cur->value !=n && (cur->next)->next != NULL;
			 cur = cur->next)
			 ;
		free(cur->next);
		cur->next = NULL;
	}
	else
	{
		*cur = *(cur->next);
		free(cur->next);
	}
	
	return list;
}
