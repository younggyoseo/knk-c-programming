#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, input_check_digit,
        first_sum, second_sum, calc_check_digit, total;
        
    printf("Enter UPC(12-digits): ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5,
                                                      &j1, &j2, &j3, &j4, &j5,
                                                      &input_check_digit);
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;
    
    calc_check_digit = 9 - ((total - 1) % 10);
    
    if (calc_check_digit == input_check_digit)
        printf("VALID\n");
    else
        printf("NOT VALID\n");
    
    return 0;
}
