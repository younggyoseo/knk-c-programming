#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d, %d", &num1, &num2);
    
    swap(&num1, &num2);
    
    printf("Swapped: %d, %d\n", num1, num2);
    return 0;
}

void swap(int *p, int *q)
{
    int tmp;
    tmp = *q;
    *q = *p;
    *p = tmp;
}
