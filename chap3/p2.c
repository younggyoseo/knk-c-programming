#include <stdio.h>

int main(void)
{
    int num_items;
    int month_input, date_input, year_input;
    int m1, m2, d1, d2;
    float unit_price;
    
    printf("Enter item number: ");
    scanf("%d", &num_items);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month_input, &date_input, &year_input);
    
    printf("Item\tUnit    \tPurchase  \n");
    printf("    \tPrice   \tDate      \n");
    printf("%-4d\t$%7.2f\t%d/%d/%d\n", num_items, unit_price, month_input, date_input, year_input);
    
    return 0;
}
