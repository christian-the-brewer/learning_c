// Name: gcd
// Purpose: find greatest common denominator
// Author: Christian Brewer
// Date: March 11 2023

#include <stdio.h>

int main(void)
{
    int m, n, n2;

    printf("Enter two intergers to calculate their GCD: ");
    scanf("%d %d", &m, &n);

    // loop until n == 0
    while (n != 0)
    {
        // variable to hold n
        n2 = n;
        // remainder of m / n into n
        n = m % n;
        // m becomes n
        m = n2;
    }

    // print m, which is GCD
    printf("GCD is %d", m);

    return 0;
}