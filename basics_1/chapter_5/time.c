// Name: time
// Purpose: convert 24 hour to 12 hour time
// Author: Christian Brewer
// Date: March 3 2023

#include <stdio.h>

int main(void)
{
    int hours, minutes;

    printf("Enter the time in 24 hour format (hh:mm): ");
    scanf("%d:%d", &hours, &minutes);

    if (hours < 13)
        printf("12 Hour Time: %02d:%d", hours, minutes);
    else
    {
        hours -= 12;
        printf("12 Hour Time: %02d:%d", hours, minutes);
    }

    return 0;
}