#include <stdio.h>

// The first function returns a value of int type.
// power identifies the function.
// base and exponent are the function parameters.
// both are int type.

int power(int base, int exponent)
{
	int i, result;

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
	printf("Enter exponent : ");
	scanf("%d", &exp);

	answer = power(base, exp);

	printf("%d^%d = %d\n", base, exp, answer);
}
