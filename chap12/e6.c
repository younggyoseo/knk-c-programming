#include <stdio.h>

int sum_array(const int *a, int n)
{
    int sum, *p;
    
    sum = 0;
    for (p = a; p < a + n; p++)
        sum += *p;
    return sum;
}

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    
    printf("result: %d\n", sum_array(arr, 5));
    return 0;
}
