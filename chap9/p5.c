#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void)
{
    int n, i, j, cnt;
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);
    
    char magic[n][n];
    
    create_magic_square(n, magic);
    print_magic_square(n, magic);
    
    return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
    int i, j, cnt;
    
    i = 0;
    j = n / 2;

    for (cnt = 1; cnt <= n * n; cnt++) {
        magic_square[i][j] = cnt;
        
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
    return;
}

void print_magic_square(int n, char magic_square[n][n])
{
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d",magic_square[i][j]);
        }
        printf("\n");
    }
}
