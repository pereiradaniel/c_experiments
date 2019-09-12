//==============================================
// Name:           Daniele Paolo Grech Pereira
// Student Number: 037747078
// Email:          dppereira@myseneca.ca
// Section:        NZB
// Workshop:       2 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Start your code below:
#include <stdio.h>
#include <math.h>
int main(void)
{
    // Declare variables
    double  amountToBePaid;         // User input.
    int     nLoonies, nQuarters;    // Number of coins.
    float   changeLeft;             // The amount of change left.

    // Get user input
    printf("Please enter the amount to be paid: $");
    scanf("%lf", &amountToBePaid);
    
    // Calculate number of loonies required and subtract the dollar value from the total amount for the remaining change.
    nLoonies = amountToBePaid;           // Rounds to nearest dollar/integer.
    changeLeft = amountToBePaid - nLoonies;
    printf("Loonies required: %d, balance owing $%.2f\n", nLoonies, changeLeft);

    // Calculate number of quarters required and subtract the value of the quarters from the remaining change.
    nQuarters = (100*changeLeft)/25;
    changeLeft = changeLeft - (nQuarters*.25);
    printf("Quarters required: %d, balance owing $%.2f\n", nQuarters, changeLeft);

    return 0;
}
