#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
    int hour, minute, second;
    long total_second;
    
    printf("Enter total seconds: ");
    scanf("%ld", &total_second);
    
    split_time(total_second, &hour, &minute, &second);
    
    printf("Hour: %d\nMinute: %d\nSecond: %d\n", hour, minute, second);
    return 0;
    
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *sec = total_sec % 60;
    total_sec /= 60;
    
    *min = total_sec % 60;
    total_sec /= 60;
    
    *hr = total_sec % 60;
    
    return;
}
