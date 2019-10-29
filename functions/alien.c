#include <stdio.h>

int main (void) {

	struct Alien {
		char name[50];
		int capacity;
		int abductees;
	};

	int city_x = 6430;

	struct Alien green_men = {"Green Men", 528, 99};

	// Alert explaining UFO is upon City X
	printf("A UFO marked %s has descended upon City X, a growing metropolis with a population of %d\n\n", green_men.name, city_x);

	printf("Top Secret Intelligence reveals that the %s currently have %d prisoners, with a max capacity of %d prisoners\n\n", green_men.name, green_men.abductees, green_men.capacity);

	// Invasion
	if (city_x <= (green_men.capacity - green_men.abductees)) {
		green_men.abductees += city_x;
		city_x = 0;
	}
	else {
		city_x -= (green_men.capacity - green_men.abductees);
		green_men.abductees = green_men.capacity;
	}

	// Aftermath
	printf("...\n\nAfter the invasion, City X has a population of %d!  The %s have %d prisoners!\n\n\n", city_x, green_men.name, green_men.abductees);

}
