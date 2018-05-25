#include <stdio.h>

int *find_middle(int a [], int n) {
    return a + n/2;
}

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    
    printf("middle: %d\n", *find_middle(arr, 5));
    return 0;
}
