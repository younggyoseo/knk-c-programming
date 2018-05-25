#include <stdio.h>

#define ERROR(str, ...) fprintf(stderr, str, __VA_ARGS__)

int main(void)
{
    int index = 0;
    ERROR("Range error: index = %d\n", index);
    
    return 0;
}
