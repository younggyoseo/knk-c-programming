#include <stdio.h>

#define DOUBLE(x) 2*x
#define DOUBLE_FIXED(x) (2 * (x))

int main(void)
{
    printf("%d\n", DOUBLE(1+2));
    printf("%d\n", 4/DOUBLE(2));
    
    printf("\nFixed\n");
    printf("%d\n", DOUBLE_FIXED(1+2));
    printf("%d\n", 4/DOUBLE_FIXED(2));
    return 0;
}
