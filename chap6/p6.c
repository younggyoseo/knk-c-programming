#include <stdio.h>

int main(void)
{
    int n, d;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (d = 2; d * d <= n; d++) {
        if (d % 2 == 0)
            printf("%d\n", d * d);
    }
    
    return 0;
}
