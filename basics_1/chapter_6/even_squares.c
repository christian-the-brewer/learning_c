// Name: even squares
// Purpose: print even squares up between 1 and n
// Author: Christian Brewer
// Date: March 13 2023

#include <stdio.h>

int main(void)
{
    int n, i = 2, square = 0;

    printf("Enter number to print even squares up to: ");
    scanf("%d", &n);

    while (square < n)
    {
        if (i % 2 == 0)
        {
            square = i * i;

            if (square <= n)
                printf("%d\n", square);
        }
        i++;
    };

    return 0;
}