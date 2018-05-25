#include <stdio.h>

#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
    int arr[N], i, largest, second_largest;
    
    printf("Enter numbers (%d numbers): ", N);
    
    for (i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    
    find_two_largest(arr, N, &largest, &second_largest);
    
    printf("largest number: %d\n", largest);
    printf("Second largest number: %d\n", second_largest);
    
    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int largest_idx, i;
    
    *largest = *second_largest = a[0];
    largest_idx = 0;
    
    // Find largest element within 1 to n-1
    for (i = 0; i < n; i++)
    {
        if (a[i] > *largest) {
            *largest = a[i];
            largest_idx = i;
        }
    }
    
    // Swap last entry with largest entry
    if (largest_idx != (n - 1)) {
        int tmp = a[largest_idx];
        a[largest_idx] = a[n-1];
        a[n-1] = tmp;
    }
    
    // Find second largest element within 1 to n-2
    for (i = 0; i < (n-1); i++)
    {
        if (a[i] > *second_largest)
            *second_largest = a[i];
    }
}
