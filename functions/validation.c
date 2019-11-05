#include <stdio.h>

// getNonNegInt returns a non-negative integer
// getNonNegInt assumes that the user enters only integer values and no trailing characters

int getNonNegInt(void)
{
 int value;

 do {
         printf(" Non-negative : ");
         scanf("%d", &value);
         if (value < 0)
                 printf(" * Negative! *\n"); 
 } while(value <= 0);

 return value;
}

// power returns the value of base raised to 
//  the power of exponent (base^exponent)
//
//  power assumes that base and exponent are
//  integer values and exponent is non-negative
//
int power(int base, int exponent)
{
 int result, i;

 result = 1;
 for (i = 0; i < exponent; i++)
 result = result * base;

 return result;
}

int main(void)
{
 int base, exp, answer;

 printf("Enter base : ");
 scanf("%d", &base);
 printf("Enter exponent\n");
 exp = getNonNegInt();
 answer = power(base, exp);
 printf("%d^%d is %d\n", base, exp, answer);

 return 0;
}