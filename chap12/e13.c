#include <stdio.h>

#define N 10

int main(void)
{
    int a[N][N], *p, cnt;
    
    cnt = 1;
    for (p = a[0]; p < (a[0] + N*N); p++) {
        if (p == a[0] || cnt  == N) {
            *p = 1;
            cnt = 0;
        }
        else {
            *p = 0;
            cnt++;
        }
    }
    
    cnt = 0;
    for (p = a[0]; p < (a[0] + N*N); p++) {
        printf(" %d", *p);
        if (cnt++ % N == (N-1))
            printf("\n");
    }
    
    return 0;
}
