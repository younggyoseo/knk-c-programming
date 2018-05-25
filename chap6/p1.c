#include <stdio.h>

int main(void)
{
    float input_num, largest = 0;
    
    while(1) {
        printf("Enter a number: ");
        scanf("%f", &input_num);
        
        if (input_num == 0)
            break;
        if (input_num > largest)
            largest = input_num;
    }
    printf("The largest number entered was %.2f\n", largest);
    
    return 0;
}
