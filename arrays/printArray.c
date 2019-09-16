#include <stdio.h>

int main(void) {
	int newArray[] = {0,1,2,3,4,5};
	int i;
	printf("Array contents: ");
	for(i = 0; i < 6; i++)
		printf("%d", newArray[i]);
	return 0;
}
