#include <stdio.h>

int main(void)
{
    int age, teenager;
    
    printf("Enter age: ");
    scanf("%d", &age);
    
    teenager = (age >= 13 && age <= 19) ? 1 : 0;
    
    printf("You're ");
    switch (teenager) {
        case 0: printf("not teenager.\n");
                break;
        case 1: printf("teenager.\n");
                break;
    }
    
    return 0;
}
