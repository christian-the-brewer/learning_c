// Name: wind
// Purpose: Show wind speed descriptions
// Author: Christian Brewer
// Date: March 3 2023

#include <stdio.h>

int main(void)
{
    int speed;

    printf("Enter wind speed in knots: ");
    scanf("%d", &speed);

    if (speed < 1)
        printf("Calm\n");
    else if (speed < 4)
        printf("Light air");
    else if (speed < 28)
        printf("Breeze");
    else if (speed < 48)
        printf("Gale");
    else if (speed < 64)
        printf("Storm");
    else
        printf("Hurricane");

    return 0;
}