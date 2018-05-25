#include <stdio.h>

double median(double x, double y, double z);

int main(void)
{
    double x, y, z;
    x = 5.0; y = 4.0; z = 3.0;
    printf("x: %f, y: %f, z: %f\n", x, y, z);
    printf("Median: %f\n", median(x,y,z));
    return 0;
}

double median(double x, double y, double z)
{
    double med;
    
    if (x <= y)
        if (y <= z)
            med = y;
        else if (x <= z)
            med = z;
        else
            med = x;
    if (z <= y)
        med = y;
    if (x <= z)
        med = x;
    
    return med;
}
