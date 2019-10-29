#include <stdio.h>
int hello ();
int main (void) {
	hello();
	return 0;
}

int hello () {
	return printf("Hello!");
}
