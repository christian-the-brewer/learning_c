// Name: Phone Number
// Purpose: Convern number format
// Author: Christian Brewer
// Date: February 23 2023

#include <stdio.h>

int main(void)
{
    int area, triplet, quadruplet;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area, &triplet, &quadruplet);
    printf("You entered %d.%d.%d\n", area, triplet, quadruplet);
    return 0;
}