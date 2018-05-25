#include <stdio.h>

int check(int x, int y, int n)
{
    if (0 < x && x < (n-1) && 0 < y && y < (n-1))
        return 1;
    return 0;
}
