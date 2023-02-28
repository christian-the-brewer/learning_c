// Name: Loan Balance
// Purpose: Calculate monthly loan balance
// Author: Christian Brewer
// Date: February 17 2023

#include <stdio.h>

int main(void)
{
    float loan_amount, interest_rate, payment;

    printf("Enter loan amount: ");
    scanf("%f", &loan_amount);

    printf("Enter your monthly payment amount: ");
    scanf("%f", &payment);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    loan_amount = loan_amount - payment;
    loan_amount = loan_amount * (1 + ((interest_rate / 12) / 100));

    printf("Balance remaining after first payment: %.2f\n", loan_amount);

    loan_amount = loan_amount - payment;
    loan_amount = loan_amount * (1 + ((interest_rate / 12) / 100));

    printf("Balance remaining after second payment: %.2f\n", loan_amount);

    loan_amount = loan_amount - payment;
    loan_amount = loan_amount * (1 + ((interest_rate / 12) / 100));

    printf("Balance remaining after third payment: %.2f\n", loan_amount);

    return 0;
}