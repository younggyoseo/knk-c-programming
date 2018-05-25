#include <stdio.h>

int main(void)
{
    int i, j;
    char *s;
    
    printf("Enter: ");
    scanf("%d%s%d", &i, s, &j);
    
    printf("i :  %d\n", i);
    printf("s :  %s\n", s);
    printf("j :  %d\n", j);
    return 0;
}
