// Name: Broker Fee
// Purpose: Calculate Broker's Fee
// Author: Christian Brewer
// Date: March 1 2023

#include <stdio.h>

int main(void)
{
    float commission, value, shares, price, rival_commission;

    printf("Enter number of shares: ");
    scanf("%f", &shares);
    printf("Enter price of share: ");
    scanf("%f", &price);

    value = shares * price;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Commission: $%.2f\n", commission);

    if (shares < 2000)
        rival_commission = 33.00f + .03f * shares;
    else
        rival_commission = 33.00f + .02f * shares;
    printf("Rival Commission: $%.2f\n", rival_commission);

    return 0;
}