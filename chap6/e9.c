#include <stdio.h>

int main(void)
{
    int i, cnt;
    
    i = 10;
    while (i >= 1) {
        printf("%d ", i++);
        i /= 2;
        cnt++;
        if (cnt == 100)
            break;
    }
    
    return 0;
}
