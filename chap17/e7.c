p = first;
while (p != NULL) {
	temp = p;
	p = p->next;
	free(temp);
}
