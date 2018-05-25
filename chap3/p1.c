#include <stdio.h>

int main(void)
{
    int month_input, date_input, year_input;
    int m1, m2, d1, d2;
    
    printf("Enter a date (mm/dd/yyyy) ");
    scanf("%d/%d/%d", &month_input, &date_input, &year_input);
    
    m1 = month_input / 10;
    m2 = month_input % 10;
    d1 = date_input / 10;
    d2 = date_input % 10;
    
    printf("You entered the date %d%d%d%d%d\n", year_input, m1, m2, d1, d2);
    
    return 0;
}
