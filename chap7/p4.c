#include <stdio.h>

int main(void)
{
    char ch;
    
    printf("Enter phone number: ");
    while ((ch = getchar()) != '\n') 
    {
        if (65 <= ch && ch <= 90) 
        {
            switch ((ch - 65) / 3) 
            {
                case 0:
                    ch = '2'; break;
                case 1:
                    ch = '3'; break;
                case 2:
                    ch = '4'; break;
                case 3:
                    ch = '5'; break;
                case 4:
                    ch = '6'; break;
                case 5:
                    ch = '7'; break;
                case 6:
                    ch = '8'; break;
                case 7:
                    ch = '9'; break;
            }
        }
        putchar(ch);
    }
    printf("\n");
}
