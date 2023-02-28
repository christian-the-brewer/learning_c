// Name: Add Tax
// Purpose: Adds 5% tax to entered amount
// Author: Christian Brewer
// Date:

#include <stdio.h>

int main(void)
{
    float amount;

    printf("Enter amount to calcusate total with tax: ");
    scanf("%f", &amount);

    printf("The total with tax is %.2f.", amount * 1.05f);

    return 0;
}