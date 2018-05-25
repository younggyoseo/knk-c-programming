/* Sorts an array of integers using Quicksort Algorithm */

#include <stdio.h>

#define N 10

void quicksort(int a[], int *low, int *high);
int *split(int a[], int *low, int *high);

int main(void)
{
    int a[N], i;
    
    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    
    quicksort(a, &a[0], &a[N - 1]);
    
    printf("In sorted order: ");
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
    
    return 0;
}

void quicksort(int a[], int *low, int *high)
{
    int *middle;
    
    if (low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int *split(int a[], int *low, int *high)
{
    int part_element = *(a + (low - a));
    
    for (;;) {
        while (low < high && part_element <= *(a + (high - a)))
            high--;
        if (low >= high) break;
        *(a + (low++ - a)) = *(a + (high - a));
        
        while (low < high && *(a + (low - a)) <= part_element)
            low++;
        if (low >= high) break;
        *(a + (high-- - a)) = *(a + (low - a));
    }
    
    *(a + (high - a)) = part_element;
    return high;
}
