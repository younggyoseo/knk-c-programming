#include <stdio.h>

int main(void)
{
    const char checker_board[8][8] = {0};
    int i, j;
    
    for (i = 0; i < 8; i++){
        for (j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0)
                checker_board[i][j] = 'B';
            else
                checker_board[i][j] = 'R';
        }
    }
    
    return 0;
}
