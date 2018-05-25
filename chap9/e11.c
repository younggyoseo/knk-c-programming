#include <stdio.h>
#include <ctype.h>

float compute_GPA(char grades[], int n);

int main(void)
{
    char grade_arr[4] = {'A', 'A', 'A', 'B'};
    printf("%f\n", compute_GPA(grade_arr, 4));
    return 0;
}

float compute_GPA(char grades[], int n)
{
    int grade_table[6] = {4, 3, 2, 1, 0, 0};
    int i, grade_idx;
    float gpa = 0.0f;
    
    for (i = 0; i < n; i++) {
        grade_idx = toupper(grades[i]) - 65;
        gpa += (float) grade_table[grade_idx];
    }
    
    return gpa / n;
}
