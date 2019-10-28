#include <stdio.h>
#define AWIND 0.2
#define WWIND 0.3
#define PWIND 0.05

int main (void) {

	int	// Input vars:
		kmTravel, numPgrs, windForce,
		// Calculated vars:
		psgrTime, againstWind;

	float	baseTime, unitsTravel;
	
	char	// Input vars:
		dirTravel, windDir;
	
	// Get info from user:
	printf("\nKMs to travel:  ");
	scanf("%d", &kmTravel);
	printf("\nTravel direction:  ");
	scanf("%c", &dirTravel);
	dirTravel = getchar();
	printf("\nNumber of passengers:  ");
	scanf("%d", &numPgrs);
	printf("\nWind force (0-3):  ");
	scanf("%d", &windForce);
	printf("\nWind direction:  ");
	scanf("%c", &windDir);
	windDir = getchar();

	printf("\n\nOutputs:\nkmTravel %d\ndirTravel %c\nnumPgrs %d\nwindForce %d\nwindDir %c ", kmTravel, dirTravel, numPgrs, windForce, windDir);

	// Calculate units of travel:
	unitsTravel = (float)kmTravel / 2;
	printf("\n\nunitsTravel %.2lf", unitsTravel);

	// Calculate base time:
	baseTime = unitsTravel * 10;
	printf("\nbaseTime %.2lf", baseTime);

	// Calculate passenger time:
	psgrTime = baseTime * (numPgrs * 0.2);
	printf("\npsgrTime %d", psgrTime);

	// Calculate wind time:
	if (windDir == "N" || windDir == "n") {
		bearing = 0;
	} else
	if (windDir == "S" || windDir == "s") {
		bearing = 3200;
	} else
	if (windDir == "E" || windDir == "e") {
		bearing = 1600;
	} else
	if (windDir == "W" || windDir == "w") {
		bearing == 4800;
	}

		

	return 0;
}
