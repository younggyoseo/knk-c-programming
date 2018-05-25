#include <stdio.h>

int main(void)
{
    char ch, message_arr[80];
    int i, cnt, shift;
    
    printf("Enter message to be encrypted: ");
    cnt = 0;
    while ((ch = getchar()) != '\n') {
        message_arr[cnt++] = ch;
    }
    
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    
    for (i = 0; i < cnt; i++) {
        ch = message_arr[i];
        if (97 <= ch && ch <= 122)
            printf("%c", ((ch - 'a') + shift) % 26 + 'a');
        else if (65 <= ch && ch <=90)
            printf("%c", ((ch - 'A') + shift) % 26 + 'A');
        else
            printf("%c", ch);
    }
    
    printf("\n");
    
    return 0;
}
