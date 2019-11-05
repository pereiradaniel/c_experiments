#include <stdio.h>

int power(int base, int exponent);

int main(void)
{
      int base, exp, answer;

      printf("Enter base : ");
      scanf("%d", &base);
      printf("Enter exponent : ");
      scanf("%d", &exp);

      answer = power(base, exp);
      printf("%d^%d = %d\n", base, exp, answer); 

      return 0;
}

int power(int base, int exponent)
{
      int result, i;

      result = 1;
      for (i = 0; i < exponent; i++)
              result = result * base;

      return result;
}