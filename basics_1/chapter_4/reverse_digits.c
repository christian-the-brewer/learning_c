// Name: Christian Brewer
// Purpose: Reverse Digits
// Author: Christian Brewer
// Date: February 27 2023

#include <stdio.h>

int main(void)
{
    int i, j, k;

    printf("Enter a three digit number: ");
    scanf("%1d%1d%1d", &i, &j, &k);

    printf("%d%d%d\n", k, j, i);
    return 0;
}