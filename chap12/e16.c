#include <stdio.h>

int find_largest(int a[], int n)
{
    int *p, largest;
    
    largest = a[0];
    
    for (p = a; p < (a + n); p++)
        if (*p > largest)
            largest = *p;
    
    return largest;
}

int main(void)
{
    int temperatures[7][24];
    
    int *p, i, cnt = 0;
    int largest;
    
    // Initialize temperatures
    for (p = temperatures[0]; p < temperatures[0] + 7*24; p++)
        *p = cnt++;
    
    for (i = 0; i < 7; i++)
        printf("day %d's largest: %d\n", i+1, find_largest(temperatures[i], 24));
    
    return 0;
}
