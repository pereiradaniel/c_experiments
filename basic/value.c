#include <stdio.h>

int main (void)
{
	int value = 30;
	printf("%d", (value++) * 2);
	printf("%d", value);

	return 0;
}
