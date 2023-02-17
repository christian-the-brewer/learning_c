// Name: unutitialized
// Purpose: See what happens when yau print uninitialized variables
// Author: Christian Brewer
// Date: February 17 2023

#include <stdio.h>

int main(void)
{

    int height, length;
    float money, weight;

    printf("height: %d\nlength: %d\nmoney: %f\nweight: %.4f\n", height, length, money, weight);

    return 0;
}