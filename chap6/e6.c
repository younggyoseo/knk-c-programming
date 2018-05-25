#include <stdio.h>

int main(void)
{
    int i;
    
    for (i = 1; i <= 128; i *= 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
