// Name: Octal
// Purpose: Convert to octal
// Author: Christian Brewer
// Date: February 27 2023

#include <stdio.h>

int main(void)
{
    int number, remainder, i1, i2, i3, i4, i5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    i5 = number % 8;
    number = number / 8;

    i4 = number % 8;
    number = number / 8;

    i3 = number % 8;
    number = number / 8;

    i2 = number % 8;
    number = number / 8;

    i1 = number % 8;
    number = number / 8;

    printf("%d%d%d%d%d\n", i1, i2, i3, i4, i5);

    return 0;
}