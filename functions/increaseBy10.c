#include <stdio.h>
void incr10 (int *varToIncr) {
	*varToIncr += 10;
}

int main () {
	int var = 5;
	printf("\nvar = %d", var);
	incr10(&var);
	printf("\nvar = %d\n", var);

	return 0;
}
