// Name: Fewest Bills
// Purpose: Find fewest number of bills te equal dollar amount
// Author: Christian Brewer
// Date: February 17 2023

#include <stdio.h>

int main(void)
{
    int twenty, ten, five, one, amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    twenty = amount / 20;
    amount = amount - (twenty * 20);

    ten = amount / 10;
    amount = amount - (ten * 10);

    five = amount / 5;
    amount = amount - (five * 5);

    one = amount / 1;
    amount = amount - one;

    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", twenty, ten, five, one);

    return 0;
}