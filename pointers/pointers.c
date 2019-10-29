#include <stdio.h>

int main (void) {
	int x;
	int *p = &x;	// store address of x in p

	printf("Enter x : ");
	scanf("%d", &x);
	printf("Value stored in x : %d\n", *p);
	printf("Address of x	  : %x\n", p);

	return 0;
}
