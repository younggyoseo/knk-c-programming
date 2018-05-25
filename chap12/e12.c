#include <stdio.h>


void find_two_largest(const int *a, int n, int *largest,
                      int *second_largest);

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int largest, second_largest;
    
    find_two_largest(arr, 5, &largest, &second_largest);
    
    printf("Largest: %d\n", largest);
    printf("Second Largest: %d\n", second_largest);
    
    return 0;
}

void find_two_largest(const int *a, int n, int *largest,
                      int *second_largest)
{
    int *p;
    int *highest_idx;
    
    /* Find largest */
    *largest = *a;
    for (p = a; p < a + n; p++)
        if (*p > *largest) {
            *largest = *p;
            highest_idx = p;
        }
            
    
    /* Initialize second_largest */
    for (p = a; p < a + n; p++)
        if (*p <= *largest && p != highest_idx) {
            *second_largest = *p;
            break;
        }
    
    /* Find second largest if initial second_largest is not equivalent to largest */
    if (*second_largest != *largest) {
        for (p = a; p < a + n; p++)
            if (*second_largest < *p && *p < *largest)
                *second_largest = *p;
    }
}
