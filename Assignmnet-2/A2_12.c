// Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
// convert it into USD.

#include <stdio.h>

const float INR = 76.23; 
int main()
{
    printf("Enter amount in INR: ");
    float inr, usd;
    scanf("%f", &inr);
    usd = inr/INR;
    printf("USD = %.2f\n",usd);
    return 0;
}