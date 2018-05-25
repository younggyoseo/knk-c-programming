int *create_array(int n, int initial_value)
{
	int *temp = malloc(n * sizeof(int));
	
	if (temp == NULL)
		return NULL;
	
	for (int i = 0; i < n; i++)
		temp[i] = initial_value;
	
	return temp;
}
