#include <stdio.h>

#define NELEMS(a) (int) (sizeof(a) / sizeof(a[0]))

int main(void)
{
    int arr[50] = {0};
    
    printf("%d\n", NELEMS(arr));
    return 0;
}
