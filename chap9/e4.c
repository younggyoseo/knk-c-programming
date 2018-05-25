#include <stdio.h>

int day_of_year(int month, int day, int year)
{
    int month_num_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, num_days = 0;
    
    if (year % 4 == 0)
        if (year % 100 != 0 || year % 400 == 0)
            month_num_days[1] += 1;
    
    for (i = 0; i < month; i++) {
        num_days += month_num_days[i];
    }
    num_days += day;
    
    return num_days;
}
