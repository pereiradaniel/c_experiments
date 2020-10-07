// Passing an Array to a Function
// passArray.c

#include <stdio.h>
#define NGRADES 8

// Function prototypes
void display(const int *g, int n);


// Main program
int main(void)
{
     int grade[] = {10,9,10,8,7,9,8,10}; 

     display(grade, NGRADES);

     return 0;

}

// Functions
void display(const int *g, int n)  // Use const to bar changes to array.
{
    for(int i = 0; i < n; i++)
            printf("%d ", g[i]); 
}