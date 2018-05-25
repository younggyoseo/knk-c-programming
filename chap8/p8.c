#include <stdio.h>

int main(void)
{
    int array[5][5], i, j,
        total_score, high_score, low_score;
    
    for (i = 0; i < 5; i++) {
        printf("Enter student %d: ", i+1);
        scanf("%d %d %d %d %d", &array[i][0], &array[i][1], &array[i][2], &array[i][3], &array[i][4]);
    }
    
    for (i = 0; i < 5; i++) {
        total_score = 0;
        for (j = 0; j < 5; j++) {
            total_score += array[i][j];
        }
        printf("Student %d's total score: %d, average score: %f\n", i+1, total_score, total_score / 5.0f);
    }
    
    for (j = 0; j < 5; j++) {
        total_score = 0;
        high_score = 0;
        low_score = 99999;
        for (i = 0; i < 5; i++) {
            total_score += array[i][j];
            if (high_score < array[i][j])
                high_score = array[i][j];
            if (low_score > array[i][j])
                low_score = array[i][j];
        }
        printf("Quiz %d's average score: %f, high score: %d, low score: %d\n",
                j+1, total_score / 5.0f, high_score, low_score);
    }
    printf("\n");
    
    return 0;
}
