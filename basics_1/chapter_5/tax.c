// Name: tax
// Purpose: calculate income tax owed
// Author: Christian Brewer
// Date: March 3 2023

#include <stdio.h>

int main(void)
{
    float income, tax;

    printf("Enter taxable income: ");
    scanf("%f", &income);

    if (income <= 750)
    {
        tax = income * .01;
        printf("Tax owed: $%.2f", tax);
    }
    else if (income <= 2250)
    {
        tax = 7.50f + (income - 750) * .02;
        printf("Tax owed: $%.2f", tax);
    }
    else if (income <= 3750)
    {
        tax = 37.50f + (income - 2250) * .03;
        printf("Tax owed: $%.2f", tax);
    }
    else if (income <= 5250)
    {
        tax = 82.50f + (income - 3750) * .04;
        printf("Tax owed: $%.2f", tax);
    }
    else if (income <= 7000)
    {
        tax = 142.50f + (income - 5250) * .05;
        printf("Tax owed: $%.2f", tax);
    }
    else
    {
        tax = 230.00f + (income - 2250) * .06;
        printf("Tax owed: $%.2f", tax);
    }

    return 0;
}