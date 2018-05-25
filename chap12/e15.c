#include <stdio.h>

int main(void)
{
    int temperatures[7][24];
    
    int *p, i, cnt = 0;
    
    // Initialize temperatures
    for (p = temperatures[0]; p < temperatures[0] + 7*24; p++)
        *p = cnt++;
    
    printf("Enter i: ");
    scanf("%d", &i);
    
    // prints all temperature readings stored in row i
    for (p = temperatures[i]; p < temperatures[i] + 24; p++)
        printf(" %d", *p);
    printf("\n");
    
    return 0;
}
