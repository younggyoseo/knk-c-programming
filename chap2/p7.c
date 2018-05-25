#include <stdio.h>

int main(void)
{
    int dollar_amount, remaining_amount, bills_20, bills_10, bills_5, bills_1;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollar_amount);

    bills_20 = dollar_amount / 20;
    dollar_amount = dollar_amount - 20 * bills_20;
    bills_10 = dollar_amount / 10;
    dollar_amount = dollar_amount - 10 * bills_10;
    bills_5 = dollar_amount / 5;
    dollar_amount = dollar_amount - 5 * bills_5;
    bills_1 = dollar_amount;

    printf("$20 bills: %d\n", bills_20);
    printf("$10 bills: %d\n", bills_10);
    printf(" $5 bills: %d\n", bills_5);
    printf(" $1 bills: %d\n", bills_1);

    return 0;
}
