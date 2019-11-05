#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
	// ABS
	int a = -34;
	abs(a);		// returns 34
	
	// Primitive char:
	char name[10];		// primitive char array
	char lastname[11];	// 10 char in last name // c style string
	int num = 0;
	
	// scanf("%s", name);
	// printf("%s %d", name, lastname)

	// Generate random numbers:
	int min = 100, max = 200;
	srand(time(NULL));	// Gives system time to rand.
	printf("%d", min + (rand() % (max + 1 - min)));

	return 0;

}