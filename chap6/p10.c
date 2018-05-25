#include <stdio.h>

int main(void)
{
    int year, month, day, time,
        e_year = 0, e_month = 0, e_day = 0, e_time;  //earliest
    
    e_time = 100 * 365;
    while(1) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        
        if (year == 0 && month == 0 && day == 0)
            break;
        
        time = year * 365 + (month - 1) * 30 + day;
        if (time < e_time) {
            e_time = time;
            e_year = year;
            e_month = month;
            e_day = day;
        }
    }
    
    printf("%d/%d/%.2d is the earliest date\n", e_month, e_day, e_year);
    
    return 0;
}
