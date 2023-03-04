// Name: dates
// Purpose: Calculate which date is earlier
// Author: Christian Brewer
// Date: March 4 2023

#include <stdio.h>

int main(void)
{

    int year1, month1, day1, year2, month2, day2;

    printf("Enter two dates (mm/dd/yy): ");
    scanf("%d/%d/%d %d/%d/%d", &month1, &day1, &year1, &month2, &day2, &year2);

    if (year1 < year2)
        printf("%02d/%02d/%d is earlier than %02d/%02d/%d", month1, day1, year1, month2, day2, year2);
    else if (year1 > year2)
        printf("%02d/%02d/%d is earlier than %02d/%02d/%d", month2, day2, year2, month1, day1, year1);
    else
    {
        if (month1 < month2)
            printf("%02d/%02d/%d is earlier than %02d/%02d/%d", month1, day1, year1, month2, day2, year2);
        else if (month1 > month2)
            printf("%02d/%02d/%d is earlier than %02d/%02d/%d", month2, day2, year2, month1, day1, year1);
        else
        {
            if (day1 < day2)
                printf("%02d/%02d/%d is earlier than %02d/%02d/%d", month1, day1, year1, month2, day2, year2);
            else if (day1 > day2)
                printf("%02d/%02d/%d is earlier than %02d/%02d/%d", month2, day2, year2, month1, day1, year1);
            else
                printf("The two dates are the same.");
        }
    }
    return 0;
}