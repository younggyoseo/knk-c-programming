/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
    int num_shares;
    float commission, rival_commission, price_per_share, value;
    
    printf("Enter price per share: ");
    scanf("%f", &price_per_share);
    printf("Enter number of shares: ");
    scanf("%d", &num_shares);
    
    value = price_per_share * num_shares;
    
    /* Rival Broker's Commission */
    if (num_shares < 2000)
        rival_commission = 33.00f + 0.03f * num_shares;
    else if (num_shares >= 2000)
        rival_commission = 33.00f + 0.02f * num_shares;
        
    /* Our Commission */
    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;
    
    if (commission < 39.00f)
        commission = 39.00f;
        
    printf("Commission: $%.2f\n", commission);
    printf("Rival's Commission: $%.2f\n", rival_commission);
    
    return 0;
}
