#include <stdio.h>

int main (void) {

	int	// Input vars:
		kmTravel, numPgrs, windForce,
		// Calculated vars:
		psgrTime, againstWind;

	float	baseTime, unitsTravel, windTime, totalTime;
	
	char	// Input vars:
		dirTravel, windDir, windIs;
	
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
	printf("Wind is (a)gainst, (w)ith, or (p)erpendicular:  ");
	scanf("%c", &windIs);
	windIs = getchar();

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
	if (windIs == 'A' || windIs == 'a') {
		windTime = baseTime * (0.2 * (float)windForce);
	} else
	if (windIs == 'W' || windIs == 'w') {
		windTime = baseTime * (0.3 * (float)windForce);
	} else
	if (windIs == 'P' || windIs == 'p') {
		windTime = baseTime * (0.05 * (float)windForce);
	}
	printf("\nwindIs %c", windIs);
	printf("\nWind time %.2lf", windTime);

	// Calculate total time:
	totalTime = baseTime + psgrTime + windTime;
	printf("\nTotal time:  %.2lf", totalTime);

	return 0;
}
