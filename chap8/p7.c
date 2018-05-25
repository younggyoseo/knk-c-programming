#include <stdio.h>

int main(void)
{
    int array[5][5], i, j, sum;
    
    for (i = 0; i < 5; i++) {
        printf("Enter row %d: ", i+1);
        scanf("%d %d %d %d %d", &array[i][0], &array[i][1], &array[i][2], &array[i][3], &array[i][4]);
    }
    
    printf("Row totals:");
    for (i = 0; i < 5; i++) {
        sum = 0;
        for (j = 0; j < 5; j++) {
            sum += array[i][j];
        }
        printf(" %d", sum);
    }
    printf("\n");
    printf("Column totals:");
    for (j = 0; j < 5; j++) {
        sum = 0;
        for (i = 0; i < 5; i++) {
            sum += array[i][j];
        }
        printf(" %d", sum);
    }
    printf("\n");
    
    return 0;
}
