#include <stdio.h>

int main(void)
{
    int numerical_grade;
    
    printf("Enter numerical grade: ");
    scanf("%d", &numerical_grade);
    
    numerical_grade /= 10;
    
    printf("Letter grade: ");
    switch (numerical_grade) {
        case 10: case 9:
            printf("A\n"); break;
        case 8:
            printf("B\n"); break;
        case 7:
            printf("C\n"); break;
        case 6:
            printf("D\n"); break;
        case 5: case 4: case 3: case 2: case 1: case 0:
            printf("F\n"); break;
        default:
            printf("Invalid\n");
    }
    
    return 0;
}
