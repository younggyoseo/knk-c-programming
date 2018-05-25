#include <stdio.h>

int main(void)
{
    float loan_amount, interest_rate, monthly_interest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    interest_rate *= 0.01;  // To make it a percentile
    monthly_interest_rate = interest_rate / 12.0f;

    loan_amount *= (1 + monthly_interest_rate);
    loan_amount -= monthly_payment;
    printf("Balance remaining after first payment: %f\n", loan_amount);
    loan_amount *= (1 + monthly_interest_rate);
    loan_amount -= monthly_payment;
    printf("Balance remaining after second payment: %f\n", loan_amount);
    loan_amount *= (1 + monthly_interest_rate);
    loan_amount -= monthly_payment;
    printf("Balance remaining after thirs payment: %f\n", loan_amount);

    return 0;
}
