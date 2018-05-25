/* Checks numbers for repeated digits */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int occurrences[10] = {0};
    int digit;
    long n;
    
    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while (n > 0) {
        digit = n % 10;
        occurrences[digit] += 1;
        n /= 10;
    }
    
    printf("Digit:      ");
    for (digit = 0; digit < 10; digit++) {
        printf("    %d", digit);
    }
    printf("\n");
    printf("Occurrences:");
    for (digit = 0; digit < 10; digit++) {
        printf("    %d", occurrences[digit]);
    }
    printf("\n");
    
    return 0;
}
