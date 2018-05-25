#include <stdio.h>

int main(void)
{
    char first_ch = 0, ch;
    
    printf("Enter a first and last name: ");
    
    for (;;) {
        ch = getchar();
        
        if (first_ch == 0 && ch == ' ')  // Consume whitespaces before first name
            continue;
        else if (first_ch == 0 && ch != ' ')  // Save first character of first name
            first_ch = ch;
        else if (first_ch != 0 && ch != ' ')  // If first charater is saved, skip rest of characters
            continue;
        else if (first_ch != 0 && ch == ' ')  // If we meet whitespace, break from the loop
            break;
    }
    
    // Continue to the end of the line
    for (;;) {
        ch = getchar();
        if (ch == ' ') {
            continue;
        }
        else if (ch != '\n') {
            printf("%c", ch);
        }
        else {
            break;
        }
    }
    
    printf(", %c.\n", first_ch);
    
    return 0;
    
}
