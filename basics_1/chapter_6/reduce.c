// Name: reduce
// Purpose: reduce fraction
// Author: Christian Brewer
// Date: March 12 2023

#include <stdio.h>

int main(void)
{
    int m, n, n2, num, den;

    printf("Enter a fraction to reduce to lowest terms (x/x): ");
    scanf("%d/%d", &m, &n);

    num = m;
    den = n;
    // loop until n == 0
    while (n != 0)
    {
        // variable to hold n
        n2 = n;
        // remainder of m / n into n
        n = m % n;
        // m becomes n/
        m = n2;
    }

    num /= m;
    den /= m;
    printf("%d/%d\n", num, den);

    return 0;
}