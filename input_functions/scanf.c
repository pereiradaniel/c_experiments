/* scanf conversion specifiers
* scanf.c
*/

#include <stdio.h>

int main(void)
{
	int items;
	float price;
	printf("Enter items, price : "); 
	scanf("%d%f", &items, &price);
	return 0;
}