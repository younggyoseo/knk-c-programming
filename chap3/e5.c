#include <stdio.h>

int main(void)
{
    int i;
    float x, y;
    
    printf("Enter \"12.3 45.6 789\" ");
    scanf("%f%d%f", &x, &i, &y);
    
    printf("x: %f, i: %d, y: %f\n", x, i, y);
}
