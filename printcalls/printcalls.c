#include <stdio.h>
#define SIZE 4
void printInfo(float numbers[], float info[], int* count);

void printInfo(float numbers[], float info[], int* count)
{
	int i = 0, y = SIZE - 1;
	for(i = 0; i < SIZE; i++) {
		printf("%010.2lf %010.3lf\n", numbers[i], info[y]);
		y--;
		(*count)++;
	}
	printf("The count inside the function is \" %d \" \n", (*count)++);
}


int main(int argc, const char * argvp[]) {
	float arr1[SIZE] = {55.432,43.78,33.4,2.677};
	float arr2[SIZE] = {53.566,4.77,99.7,7.9};
	int numberOfPrintfCalls = 0;
	printf("Hello this is the first printf\n");
	numberOfPrintfCalls++;
	printInfo(arr1, arr2, &numberOfPrintfCalls);
	printf("The number of all printf calls in this program is %d", numberOfPrintfCalls++);
	return 0;
}
