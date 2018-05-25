#include <stdio.h>

int main(void)
{
	int i, a[100];
	for (i = 0; i < 100; i++)
		a[i] = 100-i;
	
	qsort(&a[50], 50, sizeof(a[0]), compare);
	
	for (i = 0; i < 100; i++)
		printf("%d ", a[i]);
	
	printf("\n");
	return 0;
}
