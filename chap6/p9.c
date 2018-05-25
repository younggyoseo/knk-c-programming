#include <stdio.h>

int main(void)
{
    int num_payments, i;
    float loan_amount, interest_rate, monthly_interest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter number of payments: ");
    scanf("%d", &num_payments);

    interest_rate *= 0.01;  // To make it a percentile
    monthly_interest_rate = interest_rate / 12.0f;

    for (i = 1; i <= num_payments; i++){
        loan_amount *= (1 + monthly_interest_rate);
        loan_amount -= monthly_payment;
        printf("Balance remaining after %d",i);
        switch ((i) % 10) {
            case 1:
                printf("st"); break;
            case 2:
                printf("nd"); break;
            case 3:
                printf("rd"); break;
            case 0: case 4: case 5: case 6: case 7: case 8: case 9:
                printf("th"); break;
        }
        printf(" payment: %f\n", loan_amount);
    }
    
    return 0;
}
