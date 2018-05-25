#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int time1, time2, time3, time4, time5, time6, time7, time8,
        input_hour, input_minute, input_time;
    char ch1, ch2;
    
    time1 = 8 * 60 + 0 * 1;
    time2 = 9 * 60 + 43 * 1;
    time3 = 11 * 60 + 19 * 1;
    time4 = 12 * 60 + 47 * 1;
    time5 = 14 * 60 + 0 * 1;
    time6 = 15 * 60 + 45 * 1;
    time7 = 19 * 60 + 0 * 1;
    time8 = 21 * 60 + 45 * 1;
    
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c%c", &input_hour, &input_minute, &ch1, &ch2);
    
    if (toupper(ch1) == 'P')
        input_hour += 12;
    
    input_time = input_hour * 60 + input_minute * 1;
    
    if (input_time <= time1)
        printf("Closest departure time is 08:00 a.m., arriving at 10:16 a.m.\n");
        
    if (time1 < input_time && input_time <= time2)
    {
        if (input_time - time2 <= time3 - input_time)
            printf("Closest departure time is 08:00 a.m., arriving at 10:16 a.m.\n");
        else
            printf("Closest departure time is 09:43 a.m., arriving at 11:52 a.m.\n");
    }
    
    if (time2 < input_time && input_time <= time3)
    {
        if (input_time - time2 <= time3 - input_time)
            printf("Closest departure time is 09:43 a.m., arriving at 11:52 a.m.\n");
        else
            printf("Closest departure time is 11:19 a.m., arriving at  1:31 p.m.\n");
    }
    
    if (time3 < input_time && input_time <= time4)
    {
        if (input_time - time3 <= time4 - input_time)
            printf("Closest departure time is 11:19 a.m., arriving at  1:31 p.m.\n");
        else
            printf("Closest departure time is 12:47 p.m., arriving at  3:00 p.m.\n");
    }
    
    if (time4 < input_time && input_time <= time5)
    {
        if (input_time - time4 <= time5 - input_time)
            printf("Closest departure time is 12:47 p.m., arriving at  3:00 p.m.\n");
        else
            printf("Closest departure time is  2:00 p.m., arriving at  4:08 p.m.\n");
    }
    
    if (time5 < input_time && input_time <= time6)
    {
        if (input_time - time4 <= time5 - input_time)
            printf("Closest departure time is  2:00 p.m., arriving at  4:08 p.m.\n");
        else
            printf("Closest departure time is  3:45 p.m., arriving at  5:55 p.m.\n");
    }
    
    if (time6 < input_time && input_time <= time7)
    {
        if (input_time - time6 <= time7 - input_time)
            printf("Closest departure time is  3:45 p.m., arriving at  5:55 p.m.\n");
        else
            printf("Closest departure time is  7:00 p.m., arriving at  9:20 p.m.\n");
    }

    if (time7 < input_time && input_time <= time8)
    {
        if (input_time - time7 <= time8 - input_time)
            printf("Closest departure time is  7:00 p.m., arriving at  9:20 p.m.\n");
        else
            printf("Closest departure time is  9:45 p.m., arriving at 11:58 p.m.\n");
    }
       
    if (time8 < input_time)
        printf("Closest departure time is  9:45 p.m., arriving at 11:58 p.m.\n");
        
    return 0;
}
