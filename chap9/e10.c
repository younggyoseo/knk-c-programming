#include <stdio.h>

int largest(int [], int);
float average(int [], int);
int positive_num(int [], int);

int main(void)
{
    int a[8] = {1, 2, 3, 4, 5, -1, -2, 0}, i;
    printf("a =");
    for (i = 0; i < 8; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");
    
    printf("largest = %d\n", largest(a, 8));
    printf("average = %f\n", average(a, 8));
    printf("positive number = %d\n", positive_num(a, 8));
    
    return 0;
}

int largest(int a[], int n)
{
    int largest_num, i;
    largest_num = 0;
    for (i = 0; i < n; i++) {
        if (a[i] > largest_num)
            largest_num = a[i];
    }
    return largest_num;
}

float average(int a[], int n)
{
    int total, i;
    float avg;
    total = 0;
    for (i = 0; i < n; i++) {
        total += a[i];
    }
    avg = (float) total / n;
    return avg;
}

int positive_num(int a[], int n)
{
    int cnt = 0, i;
    
    for (i = 0; i < n; i++) {
        if (a[i] > 0)
            cnt += 1;
    }
    return cnt;
}
