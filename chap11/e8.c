#include <stdio.h>

#define N 10

/* Prototypes */
int *find_largest(int a[], int n);

int main(void)
{
    int *largest_p, arr[N], i;
    
    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    
    largest_p = find_largest(arr, N);
    
    printf("largest: %d\n", *largest_p);
    return 0;
}

/*
 * find_largest: Returns a pointer to the array's largest element.
 */
int *find_largest(int a[], int n)
{
    int largest_idx = 0, largest = a[0], i;
    
    for (i = 0; i < n; i++)
        if (a[i] > largest) {
            largest = a[i];
            largest_idx = i;
        }
    
    return &a[largest_idx];
}
