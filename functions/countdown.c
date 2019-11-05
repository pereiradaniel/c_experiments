#include <stdio.h>

void countDown(int n)
{
	while (n > 0) {
		printf("%d ", n);
		n--;
	}
	return;
}

int main (void) {
	int num;
	printf("\nEnter countdown number : ");
	scanf("%d", &num);

	countDown(num);

	return 0;
}