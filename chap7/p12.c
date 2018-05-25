/* Evaluates an expression.
   We will use l_operand and r_operand and op to evaluate an expression. */

#include <stdio.h>

int main(void)
{
    float l_operand, r_operand;
    char op;
    
    printf("Enter an expression: ");
    
    scanf("%f", &l_operand);
    for (;;)
    {
        scanf("%c", &op);
        if (op == '\n')
            break;
        scanf("%f", &r_operand);
        
        switch (op) {
            case '+':
                l_operand += r_operand; break;
            case '*':
                l_operand *= r_operand; break;
            case '-':
                l_operand -= r_operand; break;
            case '/':
                l_operand /= r_operand; break;
            default:
                printf("%c is not a proper operator\n", op);
                return -1;
        }
    }
    
    printf("Value of expression: %f\n", l_operand);
    return 0;
}
