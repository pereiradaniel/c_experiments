#include <stdio.h>  // <> indicates header is located in systems directory.
#include "power.h"  // Holds function prototypes.

// Main Program
int main(void)
{
      int base, exp, answer;  // Local scope vars.

      printf("Enter base : ");
      scanf("%d", &base);
      printf("Enter exponent : ");
      scanf("%d", &exp);

      answer = power(base, exp);
      printf("%d^%d = %d\n", base, exp, answer); 

      return 0;
}

// Functions
int power(int base, int exponent)  // Function scope vars.
{ 
      int result, i;  // Local scope vars.

      result = 1;
      for (i = 0; i < exponent; i++)
              result = result * base;

      return result;
}