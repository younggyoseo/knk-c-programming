#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour, minute;
    char ch1, ch2;
    
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c%c", &hour, &minute, &ch1, &ch2);
    
    if (toupper(ch1) == 'P')
        hour += 12;
    
    printf("Equivalent 24-hour time: %d:%d\n", hour, minute);
    
    return 0;
}
