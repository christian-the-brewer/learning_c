// Name: UP Check Digit
// Purpose: Calculate UPC check digit
// Author: Christian Brewer
// Date: February 27 2023

#include <stdio.h>

int main(void)
{
    int first, i1, i2, i3, i4, i5, group1, j1, j2, j3, j4, j5, group2, total, last, check;

    printf("Enter 12 digit UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%d", &first, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &check);

    group1 = first + i2 + i4 + j1 + j3 + j5;
    group2 = i1 + i3 + i5 + j2 + j4;
    total = 3 * group1 + group2;
    last = (9 - ((total - 1) % 10));

    if (check == last)
        printf("UPC Valid");
    else
        printf("UPC Invalid");

    return 0;
}