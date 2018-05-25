#include <stdio.h>

int main(void){
    int i, cnt;
    
    for (i = 10; i >= 1; i /= 2) {
        printf("%d ", i++);
        cnt++;
        if (cnt == 100)
            break;
    }
    
    return 0;
}
