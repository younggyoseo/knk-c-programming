char *duplicate(const char *s)
{
	char *temp = malloc(strlen(s) + 1);
	
	if (temp == NULL)
		return NULL;
	strcpy(temp, s);
	return temp;
}
