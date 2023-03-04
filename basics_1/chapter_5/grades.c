// Name: grades
// Purpose: Assign grades a letter
// Author: Christian Brewer
// Date: March 4 2023

#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter grade: ");
    scanf("%d", &grade);

    if (grade == 100)
        printf("Letter grade: A\n");

    grade /= 10;

    switch (grade)
    {
    case 9:
        printf("Letter grade: A\n");
        break;
    case 8:
        printf("Letter grade: B\n");
        break;
    case 7:
        printf("Letter grade: C\n");
        break;
    case 6:
        printf("Letter grade: D\n");
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("Letter grade: F\n");
        break;
    }

    return 0;
}