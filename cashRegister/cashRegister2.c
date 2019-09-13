#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    // Declare variables
    double  amountToBePaid;         // User input.
    int     nLoonies, nQuarters,    // Number of coins.
	    nDimes, nNickels,
	    nPennies;
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

    // Calculate number of dimes required and subtract the value of the dimes from the remaining change.
    nDimes = (100*changeLeft)/10;
    changeLeft = changeLeft - (nDimes*.1);
    printf("Dimes required: %d, balance owing $%.2f\n", nDimes, changeLeft);

    // Calculate number of nickels required and subtract the value of the nickels from the remaining change.
    nNickels = (100*changeLeft)/5;
    changeLeft = changeLeft - (nNickels*.05);
    printf("Nickels required: %d, balance owing $%.2f\n", nNickels, changeLeft);

    // Calculate number of pennies required and subtract the value of the pennies from the remaining change.
    nPennies = (100*changeLeft);
    changeLeft = changeLeft - (nPennies*.01);
    printf("Pennies required: %d, balance owing $%.2f\n", nPennies, changeLeft);
    
    return 0;
}
