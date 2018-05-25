#include <stdio.h>

/* Prototypes */
void split_date(int day_of_year, int year,
                int *month, int *day);

int main(void)
{
    int day_of_year, year, month, day;
    
    printf("Enter year: ");
    scanf("%d", &year);
    
    printf("Enter days: ");
    scanf("%d", &day_of_year);
    
    split_date(day_of_year, year, &month, &day);
    printf("Year: %d\n", year);
    printf("Month: %d\n", month);
    printf("Day: %d\n", day);
    
    return 0;
}

void split_date(int day_of_year, int year,
                int *month, int *day)
{
    int month_date[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;
    *month = 1;
    *day = 0;
    
    /* Check leap year */
    if (year % 4 == 0)
        if (year % 100 != 0 || year % 400 == 0)
            month_date[1] += 1;
    
    /* Calculate month and day */
    for (i = 0; i < 12; i++) {
        if (day_of_year <= month_date[i])
        {
            *day = day_of_year;
            break;
        }
        
        *month += 1;
        day_of_year -= month_date[i];
    }
}
