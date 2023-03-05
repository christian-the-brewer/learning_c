// Name: count digits
// Purpose: Count number of digits in number
// Author: Christian Brewer
// Date: March 4 2023

#include <stdio.h>

int main(void)
{
    int number, count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    do
    {
        number /= 10;
        count++;
    } while (number > 0);

    printf("The number has %d digits.\n", count);

    return 0;
}