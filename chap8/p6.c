#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char message[50], ch;
    int i = 0, cnt = 0;
    
    printf("Enter message: ");
    while((ch = getchar()) != '\n') {
        message[i] = ch;
        i++;
        cnt++;
    }
    
    printf("In B1FF-speak: ");
    for (i = 0; i < cnt; i++) {
        ch = toupper(message[i]);
        switch (ch) {
            case 'A':
                ch = '4'; break;
            case 'B':
                ch = '8'; break;
            case 'E':
                ch = '3'; break;
            case 'I':
                ch = '1'; break;
            case 'O':
                ch = '0'; break;
            case 'S':
                ch = '5'; break;
        }
        printf("%c", ch);
    }
    printf("!!!!!!!!!!!!\n");
    return 0;
}

