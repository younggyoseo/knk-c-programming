#include <stdio.h>

int main(void)
{
    int n, i, j, cnt;
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);
    
    int magic[n][n];
    
    i = 0;
    j = n / 2;

    for (cnt = 1; cnt <= n * n; cnt++) {
        magic[i][j] = cnt;
        
        if (cnt % n == 0) {
            i++;
        }
        else {
            i--;
            j++;
        }

        if (i < 0)
            i += n;
        else if (i == n)
            i = 0;
        j = j % n;
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d",magic[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
