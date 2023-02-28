// Name: ISBN
// Purpose: Format ISBN
// Author: Christian Brewer
// Date: February 23 2023

#include <stdio.h>

int main(void)
{
    int prefix, group, publisher, item, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &item, &check);
    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", prefix, group, publisher, item, check);

    return 0;
}