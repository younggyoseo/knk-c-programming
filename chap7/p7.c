/* Adds/Subtracts/Multiplies/Divides two fractions */

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char op;
    
    printf("Enter two fractions separated by a operator: ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &op, &num2, &denom2);
    
    switch (op) {
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;
        case '/':
            result_num = num1 * denom2;
            result_denom = denom1 * num2;
            break;
        default:
            printf("%c is not a proper operator\n", op);
            return -1;
    }
    
    printf("The sum is %d/%d\n", result_num, result_denom);
    
    return 0;
}
