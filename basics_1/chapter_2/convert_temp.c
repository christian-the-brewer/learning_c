// Name: Practice
// Purpose: A practice file for learning C
// Author: Christian Brewer
// Date: February 17 2023

#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Temperature in Celsius: %.1f\n", celsius);

    return 0;
}