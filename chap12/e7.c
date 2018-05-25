#include <stdio.h>
#include <stdbool.h>

bool search(const int a [], int n, int key)
{
    int *p;
    
    for (p = a; p < a + n; p++)
        if (*p == key)
            return true;
    return false;
}

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key = 3;
    bool success;
    
    success = search(arr, 5, key);
    if (success == true)
        printf("Success!\n");
    else
        printf("Failure!\n");
    return 0;
}
