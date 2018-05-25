#include <stdio.h>

#define LINE_FILE LINE_FILE2(__FILE__, __LINE__)
#define LINE_FILE2(f, l) LINE_FILE3(f, l)
#define LINE_FILE3(f, l) "Line " #l " of file " #f

int main(void)
{
    const char *str = LINE_FILE;
    
    printf("%s\n", str);
    return 0;
}
