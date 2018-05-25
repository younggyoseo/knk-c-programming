#include <stdio.h>

void selection_sort(int a[], int n);

int main(void)
{
    int arr[7] = {10, 4, 8, 2, 7, 6, 1};
    int i;
    
    selection_sort(arr, 7);
    
    for (i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

void selection_sort(int a[], int n)
{
    int i, tmp, highest = a[0], highest_idx = 0;
    
    for (i = 0; i < n; i++) {
        if (a[i] > highest) {
            highest = a[i];
            highest_idx = i;
        }
    }
    
    if (highest_idx != n-1) {
        tmp = a[n-1];
        a[n-1] = highest;
        a[highest_idx] = tmp;
    }
    
    if (n > 1)
        selection_sort(a, n-1);
        
    return;
}
