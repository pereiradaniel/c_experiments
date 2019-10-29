#include <stdio.h>
int sum (int, int);

int main (void) {
	int a, b;

	scanf("%d %d", &a, &b);

	int result;

	result = sum(a, b);
	printf("a+b is %d\n", result); 

	return 0;
}

int sum(int var1, int var2) {
	return var1 + var2;
}
