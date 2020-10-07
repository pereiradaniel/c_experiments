/* Robust Input Validation
*  getInt.c
*/

#include <stdio.h>

int getInt(int min, int max);
void clear(void);

#define MIN 3
#define MAX 15

int main(void)
{
     int input;

     input = getInt(MIN, MAX);
     printf("\nProgram accepted %d\n", input);

     return 0;
}

// getInt accepts an int between min and max
// inclusive, returns the value of the int accepted
//
int getInt(int min, int max)
{
     int value, keeptrying = 1, rc;
     char after;

     do {
             printf("Enter an integer in\n"
              "range [%d,%d] : ", min, max);
             rc = scanf("%d%c", &value, &after);
             if (rc == 0) {
                     printf("**Bad char(s)!**\n");
                     clear();
             } else if (after != '\n') {
                     printf("**Trail char(s)!**\n"); 
                     clear();
             } else if (value < min ||
              value > max) {
                     printf("**Out of range!**\n");
             } else
                     keeptrying = 0;
     } while (keeptrying == 1);

     return value;
}

// clear empties the input buffer 
//
void clear(void)
{
     while (getchar() != '\n')
             ;  // empty statement intentional 
}