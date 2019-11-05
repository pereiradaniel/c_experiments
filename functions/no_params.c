// No Parameters
// A function that does not have to receivce any data does not require paramters.

#include <stdio.h>

void alphabet(void)
{
	char letter = 'A';
	do {
		printf("%c ", letter);
		letter++;
	} while (letter != 'Z');
	return;
}

int main (void)
{
	alphabet();

	return 0;
}