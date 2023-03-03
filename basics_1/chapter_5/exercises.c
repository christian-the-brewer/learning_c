// Name: Exercises
// Purpose: Exercises
// Author: Christian Brewer
// Date: March 1 2023

#include <stdio.h>

int main(void)
{
    int i, j, k;
    // 1
    //  A
    //   i = 2;
    //   j = 3;
    //   k = i * j == 6;
    //   printf("%d", k);

    // B
    // i = 5;
    // j = 10;
    // k = 1;
    // printf("%d", k > i < j);

    // C
    // i = 5;
    // j = 10;
    // k = 1;
    // printf("%d", i < j == j < k);

    // D
    // i = 3;
    // j = 4;
    // k = 5;
    // printf("%d", i % j);
    // printf("%d", i % j + i < k);

    // 2
    // A
    // i = 10;
    // j = 5;
    // printf("%d", !i < j);

    // 4
    // i = 2;
    // j = 4;
    // printf("%d\n", (i > j) - (i < j));

    // 8
    // int teenager, age;
    // age = 13;
    // teenager = (age > 12 && age < 20) ? 1 : 0;
    // printf("%d", teenager);

    // 11
    int code;
    printf("Enter area code: ");
    scanf("%d", &code);

    switch (code)
    {
    case 229:
        printf("Albany");
        break;
    case 404:
    case 470:
    case 678:
    case 770:
        printf("Atlanta");
        break;
    case 478:
        printf("Macon");
        break;
    case 706:
    case 762:
        printf("Columbus");
        break;
    case 912:
        printf("Savannah");
        break;
    default:
        printf("Area code not recognized.");
    }

    return 0;
}