#include <stdio.h>

int main(void)
{
    int year1, year2, month1, month2, day1, day2,
        time1, time2;
    
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);
    
    time1 = year1 * 365 + (month1 - 1) * 30 + day1;
    time2 = year2 * 365 + (month2 - 1) * 30 + day2;
    
    if (time1 == time2)
        printf("%d/%d/%.2d is equivalent with %d/%d/%.2d\n", month1, day1, year1,
                                                             month2, day2, year2);
    else if (time1 < time2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1,
                                                          month2, day2, year2);
    else if (time1 > time2)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2,
                                                          month1, day1, year1);
    return 0;
}
