#include <stdio.h>
#define NGRADES 8

void display(const int g[], int n)
{
	int i;
    for(i = 0; i < n; i++)
            printf("%d ", g[i]); 
}

int main(void)
{
 int grade[] = {10,9,10,8,7,9,8,10}; 

 display(grade, NGRADES);

 return 0;
}