#include <stdio.h>
#define SCALE_FACTOR (4.0f / 3.0f)

int main(void)
{
    float pi = 3.14f, radius = 10.0f, volume;
    volume = SCALE_FACTOR * pi * radius * radius * radius;
    printf("%f\n", volume);

    return 0;
}
