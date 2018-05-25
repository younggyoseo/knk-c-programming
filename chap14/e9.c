#include <stdio.h>

#define CHECK(x,y,n) (((0 <= (x)) && ((x) <= (n-1)) && (0 <= (y)) && ((y) <= (n-1))) ? 1 : 0)
#define MEDIAN(x,y,z) ((((x)-(y))*((y)-(z)) >= 0) ? (y) : ((((x)-(z))*((z)-(y)) >= 0) ? (z) : (x)))
#define POLYNOMIAL(x) (3*(x)*(x)*(x)*(x)*(x) + 2*(x)*(x)*(x)*(x) - 5*(x)*(x)*(x) - (x)*(x) + 7*(x) - 6)

int main(void)
{
    printf("CHECK(3,4,5) = %d\n", CHECK(3,4,5));
    printf("MEDIAN(3,4,5) = %d\n", MEDIAN(3,4,5));
    printf("POLYNOMIAL(3) = %d\n", POLYNOMIAL(3));
    
    return 0;
}
