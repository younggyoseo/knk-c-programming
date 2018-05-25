#include <stdio.h>

int main(void)
{
    const float temperature_readings[30][24] = {0};
    int i, j, cnt;
    float avg;
    
    for (i = 0; i < 30; i++) {
        for (j = 0; j < 24; j++) {
            avg += temperature_readings[i][j];
            cnt++;
        }
    }
    avg /= cnt;
    printf("Average temperature: %f\n", avg);
    
    return 0;
}
