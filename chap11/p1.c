#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens,
                int *fives, int *ones);

int main(void)
{
    int dollars, twenties, tens, fives, ones;
    
    printf("Enter dollars: ");
    scanf("%d", &dollars);
    
    pay_amount(dollars, &twenties, &tens, &fives, &ones);
    
    printf("$20: %d, $10: %d, $5: %d, $1: %d\n", twenties, tens, fives, ones);
    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens,
                int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars %= 20;
    
    *tens = dollars / 10;
    dollars %= 10;
    
    *fives = dollars / 5;
    dollars %= 5;
    
    *ones = dollars;
    
    return;
}
