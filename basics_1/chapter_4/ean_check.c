// Name: EAN Check Digit
// Purpose: Calculate EANcheck digit
// Author: Christian Brewer
// Date: February 27 2023

#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, i5, group1, i6, i7, i8, i9, i10, i11, i12, group2, total, last;

    printf("Enter 12 digit EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

    group1 = i2 + i4 + i6 + i8 + i10 + i12;
    group2 = i1 + i3 + i5 + i7 + i9 + i11;
    total = 3 * group1 + group2;
    last = (9 - ((total - 1) % 10));

    printf("Check digit: %d\n", last);

    return 0;
}