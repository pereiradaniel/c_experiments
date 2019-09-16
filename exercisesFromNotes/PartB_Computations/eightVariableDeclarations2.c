#include<stdio.h>

int main(void) {
	// Create 8 different variables, 2 of each type.
	
	// char
	char firstInitial, lastInitial;
	
	// int
	int age, heightInCm;
	
	// float
	float bodyFat, totalBodyWeight;
	
	// double
	double maxDeadlift, maxBackSquat;

	printf("\nEnter first initial: ");
	scanf("%c", &firstInitial);
	
	// ERROR:  Program runs through this line without getting input.
	printf("\nEnter last initial: ");
	scanf("%c", &lastInitial);

	printf("\nEnter age: ");
	scanf("%d", &age);
	printf("\nEnter height in CM: ");
	scanf("%d", &heightInCm);

	printf("\nEnter body fat percentage: ");
	scanf("%f", &bodyFat);
	printf("\nEnter total body weight in lbs: ");
	scanf("%f", &totalBodyWeight);

	printf("\nEnter deadlift 1RM in lbs: ");
	scanf("%lf", &maxDeadlift);
	printf("\nEnter back squat 1RM in lbs: ");
	scanf("%lf", &maxBackSquat);

	float result;
	result = totalBodyWeight * (bodyFat / 100);
	printf("\nYour total body fat in lbs is:  %f", result);

	return 0;
}
