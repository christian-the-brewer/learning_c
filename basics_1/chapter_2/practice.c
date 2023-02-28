// Name: Practice
// Purpose: A practice file for learning C
// Author: Christian Brewer
// Date: February 16 2023

#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void)
{
    // // declarations must precede statements
    // int height; // must declare variable type
    // height = 8;
    // float profit; // floats hold more data but are slower
    // profit = 2150.48f;

    // printf("Height: %d\n", height);
    // printf("Profit: $%.2f\n", profit);

    // Shipping box calculations
    // calculate volumetric weight of shipping box
    int height, length, width, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    volume = height * length * width;
    // weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);

    return 0;
}