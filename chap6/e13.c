#include <stdio.h>

int main(void)
{
    int n, m;
    
    m = 16;
    printf("First Trial\n");
    for (n = 0; m > 0; n++)
    {
        m /= 2;
    }
    printf("First n: %d\n",n);
    
    m = 16;
    printf("Second Trial\n");
    for (n = 0; m > 0; m/=2, n++)
        continue;
    printf("Second n: %d\n", n);
    
    return 0;
}
