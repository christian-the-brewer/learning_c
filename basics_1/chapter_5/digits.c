// Name: digits
// Purpose: Calculate number uf digits
// Author: Christian Brewer
// Date: March 3 2023

#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a positive number less than 10,000: ");
    scanf("%d", &number);

    if (number < 10)
        printf("%d has 1 digit.", number);
    else if (number < 100)
        printf("%d has 2 digits.", number);
    else if (number < 1000)
        printf("%d has 3 digits.", number);
    else if (number < 10000)
        printf("%d has 4 digits.", number);
    else
        printf("Number is out of bounds.");

    return 0;
}