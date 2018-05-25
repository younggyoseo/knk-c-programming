#include <stdio.h>
#define SCALE_FACTOR (4.0f / 3.0f)

int main(void)
{
    float pi = 3.14f, radius, volume;

    printf("Enter Radius: ");
    scanf("%f", &radius);
    
    volume = SCALE_FACTOR * pi * radius * radius * radius;
    printf("%f\n", volume);

    return 0;
}
