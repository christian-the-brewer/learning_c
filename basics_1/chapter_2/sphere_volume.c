// Name: Sphere volume
// Purpose: calcusate volume of sphere
// Author: Christian Brewer
// Date: February 17 2023

#include <stdio.h>
#define PI 3.14159265358979323846

int main(void)
{
    float volume, radius;

    printf("Enter radius of sphere: ");
    scanf("%f", &radius);

    volume = (4.0f / 3.0f) * PI * radius * radius * radius;
    printf("Volume is %.2f", volume);

    return 0;
}