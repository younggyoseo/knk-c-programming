#include <stdio.h>

int main(void)
{
    int input_num, n1, n2;
    char *first_digits[] = {"", "one", "two", "three", "four", "five",
                         "six", "seven", "eight", "nine", "ten"};
    char *second_digits[] = {"-", "-", "twenty", "thirty", "fourty", "fifty",
                            "sixty", "seventy", "eighty", "ninety"};
    char *special_cases[] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
                             "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    
    printf("Enter a two-digit number: ");
    scanf("%d", &input_num);
    
    n1 = input_num / 10;
    n2 = input_num % 10;
    
    printf("You entered the number: ");
    if (n1 == 1)
        printf("%s", special_cases[n2]);  // 10 to 19
    else
        printf("%s %s", second_digits[n1], first_digits[n2]);  // else
    printf("\n");
    
    return 0;
}
