#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
    bool win_or_lose;
    int win_cnt = 0, lose_cnt = 0;
    char play_again;
    
    srand((unsigned) time(NULL));
    
    for(;;) {
        win_or_lose = play_game();
        if (win_or_lose == true)
            win_cnt += 1;
        else if (win_or_lose == false)
            lose_cnt += 1;
        
        printf("Play again? ");
        play_again = getchar();
        
        if (toupper(play_again) != 'Y')
            break;
        getchar();
    }
    
    printf("Wins: %d  Losses: %d\n", win_cnt, lose_cnt);
    return 0;
}

int roll_dice(void)
{
    int roll1, roll2;
    roll1 = (rand() % 6) + 1;
    roll2 = (rand() % 6) + 1;
    return roll1 + roll2;
}

bool play_game(void)
{
    int roll, point;
    
    // first game
    roll = roll_dice();
    printf("You rolled: %d\n", roll);
    if (roll == 7 || roll == 11) {
        printf("You win! \n");
        return true;
    }
    else if (roll == 2 || roll == 3 || roll == 12) {
        printf("You lose! \n");
        return false;
    }
    else {
        point = roll;
        printf("Your point is %d\n", point);
    }

    for(;;) {
        roll = roll_dice();
        printf("You rolled: %d\n", roll);
        if (roll == point) {
            printf("You win! \n");
            return true;
        }
        else if (roll == 7) {
            printf("You lose! \n");
            return false;
        }
    }
}
