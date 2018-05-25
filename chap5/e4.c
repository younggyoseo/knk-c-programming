#include <stdio.h>

int main(void)
{
    int i, j;
    
    printf("Enter i, j: ");
    scanf("%d %d",&i, &j);
    
    printf("%d\n", i < j ? -1 : (i != j));
    return 0;
}
