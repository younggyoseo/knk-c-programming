#include <stdio.h>

void encrypt(char *message, int shift);

int main(void)
{
    char ch, message_arr[80], *p = message_arr;
    int i, shift;
    
    printf("Enter message to be encrypted: ");
    while ((ch = getchar()) != '\n')
        *p++ = ch;
    *p = '\0';
    
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    
    encrypt(message_arr, shift);
    
    printf("%s\n", message_arr);
    
    return 0;
}

void encrypt(char *message, int shift)
{
    while (*message) {
        if (97 <= *message && *message <= 122)
            *message = ((*message - 97 + shift) % 26) + 97;
        else if (65 <= *message && *message <= 90)
            *message = ((*message - 65 + shift) % 26) + 65;
        message++;
    }
    
    return;
}
