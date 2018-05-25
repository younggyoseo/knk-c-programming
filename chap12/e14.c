#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(void)
{
    int temperatures[7][24];
    bool successful;
    
    successful = search(temperatures[0], 7 * 24, 32);
    
    if (successful == true)
        printf("Successful!\n");
    else
        printf("Failed..\n");
    
    return 0;
}

bool search(const int a[], int n, int key)
{
    // See e7.c
    ;
}
