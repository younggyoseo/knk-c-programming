#include <stdio.h>

int main(void)
{
    int score;
    
    printf("Enter your score: ");
    scanf("%d", &score);
    
    printf("-- first Version --\n");
    if (score >= 90)
        printf("A");
    else if (score >= 80)
        printf("B");
    else if (score >= 70)
        printf("C");
    else if (score >= 60)
        printf("D");
    else
        printf("F");
    printf("\n");
    
    printf("-- second Version --\n");
    if (score < 60)
        printf("F");
    else if (score < 70)
        printf("D");
    else if (score < 80)
        printf("C");
    else if (score < 90)
        printf("B");
    else
        printf("A");
    printf("\n");
        
    return 0;
}
